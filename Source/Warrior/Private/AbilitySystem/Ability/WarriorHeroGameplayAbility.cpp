// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Ability/WarriorHeroGameplayAbility.h"

#include "Character/WarriorHeroCharacter.h"
#include "Controller/WarriorHeroPlayerController.h"

AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
	if (!CachedWarriorHeroCharacter.IsValid())
	{
		CachedWarriorHeroCharacter = Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CachedWarriorHeroCharacter.IsValid() ? CachedWarriorHeroCharacter.Get() : nullptr;
}

AWarriorHeroPlayerController* UWarriorHeroGameplayAbility::GetHeroPlayerControllerFromActorInfo()
{
	if (!CachedWarriorHeroPlayerController.IsValid())
	{
		CachedWarriorHeroPlayerController = Cast<AWarriorHeroPlayerController>(CurrentActorInfo->PlayerController);
	}

	return CachedWarriorHeroPlayerController.IsValid() ? CachedWarriorHeroPlayerController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
