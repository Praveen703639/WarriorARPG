// pravin's patashala all rights reserved

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GameplayTagContainer.h"

#include "DataAsset/Inputs/DataAsset_InputConfig.h"
#include "WarriorInputComponent.generated.h"

class UInputAction;

UCLASS()
class WARRIRORARPG_API UWarriorInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:

	template<class UserObject, typename CallbackFunc>
	void BindNativeInputAction(
		const UDataAsset_InputConfig* InputConfig,
		const FGameplayTag& InputTag,
		ETriggerEvent TriggerEvent,
		UserObject* ContextObject,
		CallbackFunc Func
	);
};


// ================= TEMPLATE IMPLEMENTATION =================

template<class UserObject, typename CallbackFunc>
inline void UWarriorInputComponent::BindNativeInputAction(
	const UDataAsset_InputConfig* InputConfig,
	const FGameplayTag& InputTag,
	ETriggerEvent TriggerEvent,
	UserObject* ContextObject,
	CallbackFunc Func)
{
	checkf(InputConfig, TEXT("InputConfig is null"));

	if (const UInputAction* FoundAction =
		InputConfig->GiveNativeInputActionByTag(InputTag))
	{
		BindAction(FoundAction, TriggerEvent, ContextObject, Func);
	}
}
