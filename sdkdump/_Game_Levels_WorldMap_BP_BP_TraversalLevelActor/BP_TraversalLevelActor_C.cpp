#include "..\FUObjectArray.hpp"
#include "BP_TraversalLevelActor_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsBoxDistanceTriggerComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_IsScannable_() {
    return (*(uint8_t*)((uintptr_t)this + 0x387 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_ForceFlip_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x381 + 0);
    *(uint8_t*)((uintptr_t)this + 0x381 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x368);
}
_Script_RsGameTechRT::RsBoxDistanceTriggerComponent*& _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_OneWayTrigger() {
    return *(_Script_RsGameTechRT::RsBoxDistanceTriggerComponent**)((uintptr_t)this + 0x370);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_WallRun_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_WallRun_() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_ForceFlip_() {
    return (*(uint8_t*)((uintptr_t)this + 0x381 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_Rope_() {
    return (*(uint8_t*)((uintptr_t)this + 0x382 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_ForcePull_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_Rope_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x382 + 0);
    *(uint8_t*)((uintptr_t)this + 0x382 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_ForcePull_() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_IsOptional_() {
    return (*(uint8_t*)((uintptr_t)this + 0x383 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_IsOptional_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x383 + 0);
    *(uint8_t*)((uintptr_t)this + 0x383 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::ExecuteUbergraph_BP_TraversalLevelActor(int32_t EntryPoint) {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_ForcePush_() {
    return (*(uint8_t*)((uintptr_t)this + 0x385 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_Dive_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_ForcePush_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x385 + 0);
    *(uint8_t*)((uintptr_t)this + 0x385 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_TraversalLevelActor.BP_TraversalLevelActor_C");
    return result;
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_Lightsaber_() {
    return (*(uint8_t*)((uintptr_t)this + 0x386 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_Lightsaber_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x386 + 0);
    *(uint8_t*)((uintptr_t)this + 0x386 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_IsScannable_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x387 + 0);
    *(uint8_t*)((uintptr_t)this + 0x387 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_ScanIdentifier() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_DroidHack_() {
    return (*(uint8_t*)((uintptr_t)this + 0x389 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_DroidHack_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x389 + 0);
    *(uint8_t*)((uintptr_t)this + 0x389 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_Overcharge_() {
    return (*(uint8_t*)((uintptr_t)this + 0x38a + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_Overcharge_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38a + 0);
    *(uint8_t*)((uintptr_t)this + 0x38a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_ClimbingClaws_() {
    return (*(uint8_t*)((uintptr_t)this + 0x38b + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_ClimbingClaws_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38b + 0);
    *(uint8_t*)((uintptr_t)this + 0x38b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_Dive_() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::get_TK_() {
    return (*(uint8_t*)((uintptr_t)this + 0x38d + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::set_TK_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38d + 0);
    *(uint8_t*)((uintptr_t)this + 0x38d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::BndEvt__OneWayTrigger_K2Node_ComponentBoundEvent_1_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_TraversalLevelActor::BP_TraversalLevelActor_C::SetOptional(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Loadout, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags SecondaryLoadout) {
    return;
}
