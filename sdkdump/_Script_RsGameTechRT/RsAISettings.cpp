#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsAISettings.hpp"
int32_t& _Script_RsGameTechRT::RsAISettings::get_MaxAISpawnsPerFramePC() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
float& _Script_RsGameTechRT::RsAISettings::get_MinAmbientAwarenessStateChangeLockout() {
    return *(float*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsAISettings::get_CharacterAttributesDataTable() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsAISettings::get_POIDefaultDefinitionAsset() {
    return (void*)((uintptr_t)this + 0x230);
}
float& _Script_RsGameTechRT::RsAISettings::get_TimeToIgnorePlayerAfterTeleport() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsAISettings::get_MaxAmbientAwarenessStateChangeLockout() {
    return *(float*)((uintptr_t)this + 0x7c);
}
int32_t& _Script_RsGameTechRT::RsAISettings::get_MaxAISpawnsPerFramePS() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
int32_t& _Script_RsGameTechRT::RsAISettings::get_MaxAISpawnsPerFrameXB() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsAISettings::get_SoundRanges() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsAISettings::get_MinAlertAwarenessStateChangeLockout() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_RsGameTechRT::RsAISettings::get_MaxAlertAwarenessStateChangeLockout() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_RsGameTechRT::RsAISettings::get_MinAggroAwarenessStateChangeLockout() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_RsGameTechRT::RsAISettings::get_MaxAggroAwarenessStateChangeLockout() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_RsGameTechRT::RsAISettings::get_FightIdleMeleeDelay() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RsAISettings::get_RootBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_RsGameTechRT::RsAISettings::get_WaitBehaviorAsset() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_RsGameTechRT::RsAISettings::get_ScriptedMoveToBehaviorAsset() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsAISettings::get_AmbientIdleBehaviorAsset() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_RsGameTechRT::RsAISettings::get_ConversationBehaviorAsset() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_RsGameTechRT::RsAISettings::get_PatrolBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_RsGameTechRT::RsAISettings::get_ReturnHomeBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_RsGameTechRT::RsAISettings::get_WanderBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_RsGameTechRT::RsAISettings::get_InvestigateBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_RsGameTechRT::RsAISettings::get_AlertToAggroTransitionBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_RsGameTechRT::RsAISettings::get_FightIdleBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_RsGameTechRT::RsAISettings::get_AmbientToAlertTransitionBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_RsGameTechRT::RsAISettings::get_AggroToAlertTransitionBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_RsGameTechRT::RsAISettings::get_CombatReactionBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_RsGameTechRT::RsAISettings::get_AlertToAmbientTransitionBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_RsGameTechRT::RsAISettings::get_POIRootBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_RsGameTechRT::RsAISettings::get_POIDefaultBehaviorAsset() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_RsGameTechRT::RsAISettings::get_GameStateSettings() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISettings");
    return result;
}
