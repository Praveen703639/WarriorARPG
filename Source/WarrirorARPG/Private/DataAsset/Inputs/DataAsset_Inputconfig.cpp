// pravin's patashala all rights reserved


#include "DataAsset/Inputs/DataAsset_Inputconfig.h"

UInputAction* UDataAsset_InputConfig::GiveNativeInputActionByTag(const FGameplayTag& InInputTag) const
{
	for (const FWarriorInputActionConfig& Inputconfig : NativeInputActions)
	{
		if (Inputconfig.InputTag == InInputTag && Inputconfig.InputAction)
		{
			return Inputconfig.InputAction;
		}
	}

	return nullptr;
}
