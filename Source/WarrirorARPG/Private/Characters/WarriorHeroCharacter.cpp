// pravin's patashala all rights reserved


#include "Characters/WarriorHeroCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAsset/Inputs/DataAsset_Inputconfig.h"
#include "Components/Inputs/WarriorInputComponent.h"
#include "WarriorGameplayTags.h"


#include "WarriordebugHelper.h"

AWarriorHeroCharacter::AWarriorHeroCharacter()
{
	
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 200.f;
	CameraBoom->SocketOffset = FVector(0.f, 55.f, 65.f);
	CameraBoom->bUsePawnControlRotation = false;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 400.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;




}

void AWarriorHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	checkf(InputconfigDataAsset, TEXT("Forgeot to assign valid data asset to !!"));
	 ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();
	 UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	 check(Subsystem);
	 Subsystem->AddMappingContext(InputconfigDataAsset->DefaultMappingContext, 0);
	 UWarriorInputComponent* WarriorInputComponent = CastChecked<UWarriorInputComponent>(PlayerInputComponent);
	 WarriorInputComponent->BindNativeInputAction(InputconfigDataAsset,WarriorGameplayTags::Input_Move,ETriggerEvent::Triggered,this,&ThisClass::Input_Move);
	 WarriorInputComponent->BindNativeInputAction(InputconfigDataAsset, WarriorGameplayTags::Input_Look, ETriggerEvent::Triggered, this, &ThisClass::Input_Look);
}

void AWarriorHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	Debug::Print("Welcome to pravin's patashala dude !!");

	
}

void AWarriorHeroCharacter::Input_Move(const FInputActionValue& ActionValue)
{

	const FVector2D MovementVector = ActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f, Controller->GetControlRotation().Yaw,0.f);
	if (MovementVector.Y != 0)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection,MovementVector.Y);
	}
	if (MovementVector.X != 0)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AWarriorHeroCharacter::Input_Look(const FInputActionValue& ActionValue)
{
	const FVector2D LookAxisVector = ActionValue.Get<FVector2D>();

	if (LookAxisVector.X != 0)
		AddControllerYawInput(LookAxisVector.X);
	if (LookAxisVector.Y != 0)
		AddControllerPitchInput(LookAxisVector.Y);


}
