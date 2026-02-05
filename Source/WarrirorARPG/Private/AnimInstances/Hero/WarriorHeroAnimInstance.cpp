// pravin's patashala all rights reserved


#include "AnimInstances/Hero/WarriorHeroAnimInstance.h"
#include "Characters/WarriorHeroCharacter.h"

void UWarriorHeroAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (!OwningHeroCharacter)
	{
		OwningHeroCharacter = Cast<AWarriorHeroCharacter>(OwningCharacter);
	}
}

void UWarriorHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	if(bHasAccerleration)
	{
		IdlleElaspedTime = 0.f;
		bShouldEnterRelaxState = false;

	}
	else {
		IdlleElaspedTime += DeltaSeconds;
		bShouldEnterRelaxState = (IdlleElaspedTime >= EnterRelaxStateThreshold);

		
	}
}
