// pravin's patashala all rights reserved


#include "StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 AbilityLevel )
{
	check(InWarriorASCToGive);
	GrandAbilities(ActivateOnGivenAbilities, InWarriorASCToGive, AbilityLevel);
	GrandAbilities(Reactivebilities, InWarriorASCToGive, AbilityLevel);
}

void UDataAsset_StartUpDataBase::GrandAbilities(const TArray<TSubclassOf<UWarriorGameplayAbility>>& InAbilitiesToGive, UWarriorAbilitySystemComponent* InWarriorASCToGive, int32 AbilityLevel)
{
	if (InAbilitiesToGive.IsEmpty())
	{
		return;
	}

	for (const TSubclassOf<UWarriorGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue;
		FGameplayAbilitySpec AbilitySpec(Ability);
			AbilitySpec.SourceObject = InWarriorASCToGive->GetAvatarActor();
			AbilitySpec.Level = AbilityLevel;

		InWarriorASCToGive->GiveAbility(AbilitySpec);

	}
}
