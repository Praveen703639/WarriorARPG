// pravin's patashala all rights reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarriorWeaponBase.generated.h"


class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class WARRIRORARPG_API AWarriorWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	AWarriorWeaponBase();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	UBoxComponent* WeaponCollisionBox;

	

public:
	FORCEINLINE UStaticMeshComponent* GetWeaponMesh() const { return WeaponMesh; }



};
