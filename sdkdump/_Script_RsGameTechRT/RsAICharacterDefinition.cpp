#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BlackboardData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAwarenessStateDefinition_Aggro.hpp"
#include "RsAIAwarenessStateDefinition_Ambient.hpp"
#include "RsAICharacterDefinition.hpp"
#include "RsAIVODefinition.hpp"
#include "RsCharacterDefinition.hpp"
#include "..\_Script_RsTechRT\RsActorTweaksBook.hpp"
_Script_AIModule::BlackboardData*& _Script_RsGameTechRT::RsAICharacterDefinition::get_Blackboard() {
    return *(_Script_AIModule::BlackboardData**)((uintptr_t)this + 0x258);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_AIClass() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_TweakFile() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_RsTechRT::RsActorTweaksBook*& _Script_RsGameTechRT::RsAICharacterDefinition::get_Tweaks() {
    return *(_Script_RsTechRT::RsActorTweaksBook**)((uintptr_t)this + 0x210);
}
_Script_RsGameTechRT::RsAIVODefinition*& _Script_RsGameTechRT::RsAICharacterDefinition::get_VODefinition() {
    return *(_Script_RsGameTechRT::RsAIVODefinition**)((uintptr_t)this + 0x218);
}
float& _Script_RsGameTechRT::RsAICharacterDefinition::get_TargetProjectionHeight() {
    return *(float*)((uintptr_t)this + 0x260);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_Behaviors() {
    return (void*)((uintptr_t)this + 0x220);
}
bool _Script_RsGameTechRT::RsAICharacterDefinition::get_bRequiresPathToTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x264 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAICharacterDefinition::set_bRequiresPathToTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x264 + 0);
    *(uint8_t*)((uintptr_t)this + 0x264 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAICharacterDefinition::get_bCanReturnHome() {
    return (*(uint8_t*)((uintptr_t)this + 0x264 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsAICharacterDefinition::set_bCanReturnHome(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x264 + 0);
    *(uint8_t*)((uintptr_t)this + 0x264 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient*& _Script_RsGameTechRT::RsAICharacterDefinition::get_AmbientStateDefinition() {
    return *(_Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient**)((uintptr_t)this + 0x268);
}
_Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro*& _Script_RsGameTechRT::RsAICharacterDefinition::get_AggroStateDefinition() {
    return *(_Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro**)((uintptr_t)this + 0x270);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_AwarenessReactions() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_AwarenessEvaluators() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_Taunts() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_CombatReactions() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_ZTargetCameraMode() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Script_RsGameTechRT::RsAICharacterDefinition::get_ZTargetFocusSocket() {
    return (void*)((uintptr_t)this + 0x2f8);
}
float& _Script_RsGameTechRT::RsAICharacterDefinition::get_ZTargetMaxDist() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Script_RsGameTechRT::RsAICharacterDefinition::get_NoPathToAttackTargetTimeOut() {
    return *(float*)((uintptr_t)this + 0x304);
}
bool _Script_RsGameTechRT::RsAICharacterDefinition::get_bUseNoPathToAttackTargetTimeOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x308 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAICharacterDefinition::set_bUseNoPathToAttackTargetTimeOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x308 + 0);
    *(uint8_t*)((uintptr_t)this + 0x308 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAICharacterDefinition");
    return result;
}
