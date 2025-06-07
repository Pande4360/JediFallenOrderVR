#include "..\FUObjectArray.hpp"
#include "BPFX_Void_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::LeadIn__FinishedFunc() {
    return;
}
void* _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_LeadIn__Direction_5FDA744A4A3CC9684087AA99A503085B() {
    return (void*)((uintptr_t)this + 0x384);
}
_Script_Engine::PostProcessComponent*& _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_PPV_Void() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x368);
}
float& _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_LeadOut_PPIn_E0E9526B4D9EC1B5EBC2B4BB4AFA35F5() {
    return *(float*)((uintptr_t)this + 0x370);
}
void* _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_LeadOut__Direction_E0E9526B4D9EC1B5EBC2B4BB4AFA35F5() {
    return (void*)((uintptr_t)this + 0x374);
}
float& _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_LeadIn_PPIn_5FDA744A4A3CC9684087AA99A503085B() {
    return *(float*)((uintptr_t)this + 0x380);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_LeadOut() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_LeadIn() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x388);
}
bool _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::get_Fade_To_White_() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::set_Fade_To_White_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Blueprints/BPFX_Void.BPFX_Void_C");
    return result;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::UpdateBrightness(bool IsWhite_) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::LeadIn__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::LeadOut__FinishedFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::LeadOut__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::LVL_FadeToVoid(bool IsWhite_, float Duration) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::LVL_FadeFromVoid(bool IsWhite_, float Duration) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::PauseMenuToggled(bool PauseMenuOpened) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C::ExecuteUbergraph_BPFX_Void(int32_t EntryPoint) {
    return;
}
