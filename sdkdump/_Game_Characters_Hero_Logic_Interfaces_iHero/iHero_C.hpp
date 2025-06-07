#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Game_Characters_Hero_Logic_Interfaces_iHero {
#pragma pack(push, 1)
struct iHero_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void AmIYoungCal(bool& Result);
    void NewGamePlus_SwapToNormalCal();
    void NewGamePlus_SwapToInquisitorCal();
    void AddedDatabankEntry(_Script_GameplayTags::GameplayTagContainer AddedTag);
    void SetEyeTransparency(bool Transparent);
    void GetCurrentUnlockingDoor(_Script_Engine::Actor*& Door);
    void SetCalFaceDirty(bool IsDirty);
    void HideScarGlow();
    void ShowScarGlow(float EmissiveStrength);
    void SetClimbingClawsVisible(bool IsVisible);
    void SetBuddyButtonEnabled(bool NewEnabled);
    void GetAndRemoveCurrentUnlockingDoor(_Script_Engine::Actor*& CurrentDoor);
    void SetCurrentUnlockingDoor(_Script_Engine::Actor* Door);
    void SetAchievementProgress(void* Achievement, int32_t Amount);
    void GetBDHintTrigger(_Script_Engine::Actor*& Trigger);
    void SetBDHintTrigger(_Script_Engine::Actor* HintTrigger);
    void GetHeroRig(_Script_Engine::SkeletalMeshComponent*& HeroRig);
    void VerifyAndAddHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime, float Duration);
    void SetPonchoStyle(_Script_Engine::SkeletalMesh* PonchoStyle);
    void QuickRecoverTutorial();
    void AddAchievementProgress(void* Achievement, int32_t Amount);
    void UpgradeLightsaberDamage();
    void PauseMenuInitialization();
    void PauseMenuCleanup();
    void GetPoncho(_Script_Engine::SkeletalMeshComponent*& Poncho);
    void SetDemoMode();
    void HealSuccess();
    void UseHealthPot(bool& Result);
    void SetPonchoHoodMaterial(_Script_Engine::MaterialInstance* HoodMaterial);
    void SetPonchoMaterial(_Script_Engine::MaterialInstance* PonchoMaterial);
    void InitializeUpgrades();
    void ConstrainedControlEnd();
    void ConstrainedControlStart(_Script_Engine::Actor* ConstrainedControlActor);
    void CaptureHero();
    void SetPonchoVisibility(bool IsVisible, bool hoodIsUp);
    void RemoveInteractZone(_Script_Engine::Actor* Interact);
    void GetBestCurrentInteract(_Script_Engine::Actor*& BestInteract, void*& Type);
    void IsMotionParmActive(void* MotionTweaks, bool& Active);
    void RefillHealthPots();
    void PurchaseSkillUpgrade(int32_t ForcePoints, void* UpgradeFlag);
    void cheat_CheckMaxStamina(bool& Result);
    void cheat_CheckMaxForce(bool& Result);
    void cheat_ToggleMaxStamina(bool& NewMaxStamina);
    void cheat_ToggleMaxForce(bool& NewMaxForce);
    void ResetDoubleJump();
    void cheat_ToggleAudioDebug();
    void TogglePauseMenu();
    void cheat_CheckGodMode(bool& Result);
    void cheat_ToggleGodMode(bool& NewGodMode);
    void cheat_CheckHideHUD(bool& Result);
    void cheat_ToggleHideHUD();
    void cheat_CheckSlowMotion(bool& Result);
    void cheat_ToggleSlowMotion();
    void cheat_KillAI();
    void setForceMeter();
    void popInteractEnemy();
    void pushInteractEnemy();
    void UpdateCurrentInteractZone(_Script_Engine::Actor* zone, void* Type);
    void Heal(void* Amount);
    void HUDvis(bool On);
    void EnvDeath();
    void PopMotionParm(void* MotionParm, float Blend);
    void PushMotionParm(void* MotionParm, float Blend);
    void popStack(void* Name);
    void pushStack(void* Name);
}; // Size: 0x28
#pragma pack(pop)
}
