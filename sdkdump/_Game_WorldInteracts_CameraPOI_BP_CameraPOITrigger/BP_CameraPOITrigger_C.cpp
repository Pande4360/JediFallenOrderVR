#include "..\FUObjectArray.hpp"
#include "BP_CameraPOITrigger_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x389 + 0);
    *(uint8_t*)((uintptr_t)this + 0x389 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::UserConstructionScript0() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x370);
}
void* _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_IsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x368);
}
void* _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_OnEndPOI() {
    return (void*)((uintptr_t)this + 0x378);
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_IsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x388 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x389 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_EndOnExit() {
    return (*(uint8_t*)((uintptr_t)this + 0x38a + 0)) & 1 != 0;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_EndOnExit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38a + 0);
    *(uint8_t*)((uintptr_t)this + 0x38a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_DisableOnEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x38b + 0)) & 1 != 0;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_DisableOnEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38b + 0);
    *(uint8_t*)((uintptr_t)this + 0x38b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::LVL_SetFocusActor(_Script_Engine::Actor* FocusActor) {
    return;
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_DoOnce_Persistent() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 1 != 0;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_DoOnce_Persistent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_DoOnce_Persistent_SaveImmediately() {
    return (*(uint8_t*)((uintptr_t)this + 0x38d + 0)) & 1 != 0;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_DoOnce_Persistent_SaveImmediately(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38d + 0);
    *(uint8_t*)((uintptr_t)this + 0x38d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_POIVariables() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_OnStartPOI() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_PlayerHeadTrackTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_PlayerHeadTrackTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::get_PlayerFaceTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e1 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::set_PlayerFaceTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/CameraPOI/BP_CameraPOITrigger.BP_CameraPOITrigger_C");
    return result;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::LVL_EnableTrigger(bool Enabled) {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::LVL_ActivatePOI() {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::LVL_DeactivatePOI() {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::OnStartPOI__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::ExecuteUbergraph_BP_CameraPOITrigger(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger::BP_CameraPOITrigger_C::OnEndPOI__DelegateSignature() {
    return;
}
