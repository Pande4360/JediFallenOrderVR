#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "SwAbilitySystemLibrary.hpp"
int32_t _Script_SwGame::SwAbilitySystemLibrary::GetEffectCountActiveOnVictim(void* EffectType, _Script_Engine::Actor* Target) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwAbilitySystemLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAbilitySystemLibrary");
    return result;
}
void _Script_SwGame::SwAbilitySystemLibrary::TriggerAbilityWithHighestAcquiredUpgrade(_Script_Engine::Actor* Target, void* AbilityType, bool bIsHeld) {
    return;
}
void _Script_SwGame::SwAbilitySystemLibrary::TriggerAbility(_Script_Engine::Actor* Target, void* AbilityType, void* UpgradeLevel, bool bIsHeld) {
    return;
}
void _Script_SwGame::SwAbilitySystemLibrary::SetZTargetForAbilities(_Script_Engine::Actor* WorldContextObject, _Script_Engine::Actor* ZTargetActor) {
    return;
}
bool _Script_SwGame::SwAbilitySystemLibrary::IsAbilityTriggered(_Script_Engine::Actor* Actor, void* AbilityType) {
    return;
}
bool _Script_SwGame::SwAbilitySystemLibrary::IsEffectActiveOnVictim(void* EffectType, _Script_Engine::Actor* Target) {
    return;
}
void* _Script_SwGame::SwAbilitySystemLibrary::GetAbilityUpgradeLevel(_Script_Engine::Actor* Target, void* AbilityType) {
    return;
}
int32_t _Script_SwGame::SwAbilitySystemLibrary::DeactivateEffectFromVictim(void* EffectType, _Script_Engine::Actor* Target) {
    return;
}
int32_t _Script_SwGame::SwAbilitySystemLibrary::DeactivateAllEffectsInWorld(_Script_Engine::Actor* WorldContextObject) {
    return;
}
void _Script_SwGame::SwAbilitySystemLibrary::DeactivateAbilityFromTarget(void* AbilityType, _Script_Engine::Actor* Target) {
    return;
}
void _Script_SwGame::SwAbilitySystemLibrary::ApplyForcePushEffectOnVictim(void* EffectType, _Script_Engine::Actor* Victim, _Script_CoreUObject::Vector DirectionVector, float Strength, float DurationMultiplier) {
    return;
}
