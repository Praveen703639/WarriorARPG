// pravin's patashala all rights reserved


#include "AnimInstances/Hero/WarriorHeroAnimInstance.h"
#include "Characters/WarriorBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"



void UWarriorHeroAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	OwingCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner());
	if (!OwingCharacter)
	{
		return;
	}
	OwingMovementComponent = OwingCharacter->GetCharacterMovement();

}

void UWarriorHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwingCharacter && !OwingMovementComponent)
	{
		return;
	}

	GroundSpeed = OwingCharacter->GetVelocity().Size2D();
	bHasAccerleration = OwingMovementComponent->GetCurrentAcceleration().SizeSquared2D()>0.f;
}
