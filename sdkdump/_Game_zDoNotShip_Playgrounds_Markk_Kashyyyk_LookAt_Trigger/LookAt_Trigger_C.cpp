#include "..\FUObjectArray.hpp"
#include "LookAt_Trigger_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TargetPoint.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
void* _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_LVL_LookingAt() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_Engine::TextRenderComponent*& _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_Debug_Text() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x368);
}
void* _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_LVL_UnLookAt() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::set_TriggerOnce_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x391 + 0);
    *(uint8_t*)((uintptr_t)this + 0x391 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_Active_() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::set_Active_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_TriggerOnce_() {
    return (*(uint8_t*)((uintptr_t)this + 0x391 + 0)) & 1 != 0;
}
float& _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_Range() {
    return *(float*)((uintptr_t)this + 0x394);
}
bool _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_looking() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::set_looking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::get_Debug() {
    return (*(uint8_t*)((uintptr_t)this + 0x399 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::set_Debug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x399 + 0);
    *(uint8_t*)((uintptr_t)this + 0x399 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/zDoNotShip/Playgrounds/Markk/Kashyyyk/LookAt_Trigger.LookAt_Trigger_C");
    return result;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::UserConstructionScript() {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::LVL_SetActive(bool Active_) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::ExecuteUbergraph_LookAt_Trigger(int32_t EntryPoint) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::LVL_UnLookAt__DelegateSignature() {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C::LVL_LookingAt__DelegateSignature() {
    return;
}
