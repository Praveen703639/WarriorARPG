// pravin's patashala all rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataAsset_InputConfig.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FWarriorInputActionConfig
{
	GENERATED_BODY()

public:

	

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UInputAction* InputAction = nullptr;
};

UCLASS()
class WARRIRORARPG_API UDataAsset_InputConfig : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Config", meta = (TitleProperty = "InputTag"))
	TArray<FWarriorInputActionConfig> NativeInputActions;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Config")
	UInputMappingContext* DefaultMappingContext = nullptr;

	UFUNCTION(BlueprintCallable)
	UInputAction* GiveNativeInputActionByTag(const FGameplayTag& InInputTag) const;
};
