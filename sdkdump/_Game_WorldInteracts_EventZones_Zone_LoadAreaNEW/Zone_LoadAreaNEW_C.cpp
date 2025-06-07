#include "..\FUObjectArray.hpp"
#include "Zone_LoadAreaNEW_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_RsTechRT\RsVolumeBlueprintBase.hpp"
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_LoadTokens() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x398);
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_isFailSafeZone_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d9 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_PlayerMustBeGrounded_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x433 + 0);
    *(uint8_t*)((uintptr_t)this + 0x433 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x3a0);
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_LoadingArea() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_Load_Order() {
    return (void*)((uintptr_t)this + 0x3c8);
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_TriggerVolume_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::LVL_Load_Started__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_TriggerVolume_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_isFailSafeZone_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_FailSafeSingleLevel() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_DisableDuringCines_() {
    return (*(uint8_t*)((uintptr_t)this + 0x432 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_WaitForNonVisibleLevels_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_WaitForNonVisibleLevels_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_LVL_Load_Started() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::getLoadingArea(void*& LoadingArea) {
    return;
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_LVL_Load_Completed() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_FailSafe_Zones() {
    return (void*)((uintptr_t)this + 0x410);
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::LVL_Deactivate_Volume() {
    return;
}
void* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_Exit_Zones() {
    return (void*)((uintptr_t)this + 0x420);
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_DidFullyLoad_() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_DidFullyLoad_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_isLinked_() {
    return (*(uint8_t*)((uintptr_t)this + 0x431 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_isLinked_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x431 + 0);
    *(uint8_t*)((uintptr_t)this + 0x431 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::set_DisableDuringCines_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x432 + 0);
    *(uint8_t*)((uintptr_t)this + 0x432 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::UserConstructionScript() {
    return;
}
bool _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::get_PlayerMustBeGrounded_() {
    return (*(uint8_t*)((uintptr_t)this + 0x433 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Zone_LoadAreaNEW.Zone_LoadAreaNEW_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::shouldShow_(bool& Show_) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::getLoadTokens(void*& Load_Tokens) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::SetupText() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::LVL_Trigger_Load() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::LVL_Activate_Volume() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::LoadZoneShow(bool Show_) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::Exiting_Zone() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::ExecuteUbergraph_Zone_LoadAreaNEW(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW::Zone_LoadAreaNEW_C::LVL_Load_Completed__DelegateSignature() {
    return;
}
