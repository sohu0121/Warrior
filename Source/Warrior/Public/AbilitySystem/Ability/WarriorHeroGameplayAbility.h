// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Ability/WarriorGameplayAbility.h"
#include "WarriorHeroGameplayAbility.generated.h"

class UHeroCombatComponent;
class AWarriorHeroPlayerController;
class AWarriorHeroCharacter;
/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorHeroGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AWarriorHeroCharacter* GetHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AWarriorHeroPlayerController* GetHeroPlayerControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();

private:
	TWeakObjectPtr<AWarriorHeroCharacter> CachedWarriorHeroCharacter;
	TWeakObjectPtr<AWarriorHeroPlayerController> CachedWarriorHeroPlayerController;
};
