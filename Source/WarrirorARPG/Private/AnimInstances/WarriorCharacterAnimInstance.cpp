// pravin's patashala all rights reserved


#include "AnimInstances/WarriorCharacterAnimInstance.h"
#include "Characters/WarriorBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
void UWarriorCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	OwningCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner());
	if (!OwningCharacter)
	{
		return;
	}
	OwningMovementComponent = OwningCharacter->GetCharacterMovement();
}
void UWarriorCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter && !OwningMovementComponent)
	{
		return;
	}
	GroundSpeed = OwningCharacter->GetVelocity().Size2D();
	bHasAccerleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D()>0.f;
}

