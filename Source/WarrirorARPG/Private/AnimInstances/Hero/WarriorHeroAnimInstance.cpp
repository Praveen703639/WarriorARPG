// pravin's patashala all rights reserved


#include "AnimInstances/Hero/WarriorHeroAnimInstance.h"
#include "Characters/WarriorBaseCharacter.h"


void UWarriorHeroAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	OwingCharacter = Cast<AWarriorBaseCharacter>(TryGetPawnOwner());
	if (!OwingCharacter)
	{
		return;
	}
	WarriorMovementComponent = OwingCharacter->GetCharacterMovement();

}

void UWarriorHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
}
