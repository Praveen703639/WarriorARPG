// pravin's patashala all rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/WarriorCharacterAnimInstance.h"
#include "WarriorHeroAnimInstance.generated.h"
class AWarriorHeroCharacter;


/**
 * 
 */
UCLASS()
class WARRIRORARPG_API UWarriorHeroAnimInstance : public UWarriorCharacterAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animdata|References")
	AWarriorHeroCharacter* OwningHeroCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animdata|Hero")
	bool bShouldEnterRelaxState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animdata|Hero")
	float EnterRelaxStateThreshold= 5.f;

	float IdlleElaspedTime;
};
