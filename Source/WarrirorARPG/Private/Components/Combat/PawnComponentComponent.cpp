// pravin's patashala all rights reserved


#include "Components/Combat/PawnComponentComponent.h"

void UPawnComponentComponent::RegisterSpawnWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon)
{
	checkf(!CharacterCarriedWeaponMap.Contains(InWeaponTagToRegister),TEXT("a named %s has already added as current weapon"),*InWeaponTagToRegister.ToString());
	check(InWeaponToRegister);

	CharacterCarriedWeaponMap.Emplace(InWeaponTagToRegister, InWeaponToRegister);
	if (bRegisterAsEquippedWeapon) {
		CurrentEquippedWeaponTag = InWeaponTagToRegister;
	}
}

AWarriorWeaponBase* UPawnComponentComponent::GetCharacterCarriedWeaponByTay(FGameplayTag InWeaponTag) const
{
	if (AWarriorWeaponBase* const* FoundWeapon = CharacterCarriedWeaponMap.Find(InWeaponTag))
	{
		return *FoundWeapon;
	}
	return nullptr;
}

AWarriorWeaponBase* UPawnComponentComponent::GetCurrentEquippedWeapon() const
{
	return nullptr;
}

AWarriorWeaponBase* UPawnComponentComponent::GetCharacterCarriedCurrentEquippedWeapon() const
{
	if (!CurrentEquippedWeaponTag.IsValid())
	{
		return nullptr;
	}
	return GetCharacterCarriedWeaponByTay(CurrentEquippedWeaponTag);
}
