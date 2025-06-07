#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "Slider.hpp"
#include "Widget.hpp"
void* _Script_UMG::Slider::get_Orientation() {
    return (void*)((uintptr_t)this + 0x458);
}
float& _Script_UMG::Slider::get_Value() {
    return *(float*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::Slider::get_ValueDelegate() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::Slider::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::Slider::get_SliderBarColor() {
    return (void*)((uintptr_t)this + 0x45c);
}
void* _Script_UMG::Slider::get_SliderHandleColor() {
    return (void*)((uintptr_t)this + 0x46c);
}
bool _Script_UMG::Slider::get_IndentHandle() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_IndentHandle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::Slider::get_Locked() {
    return (*(uint8_t*)((uintptr_t)this + 0x47d + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_Locked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47d + 0);
    *(uint8_t*)((uintptr_t)this + 0x47d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::Slider::get_MouseUsesStep() {
    return (*(uint8_t*)((uintptr_t)this + 0x47e + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_MouseUsesStep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47e + 0);
    *(uint8_t*)((uintptr_t)this + 0x47e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::Slider::get_RequiresControllerLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x47f + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_RequiresControllerLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47f + 0);
    *(uint8_t*)((uintptr_t)this + 0x47f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::Slider::get_StepSize() {
    return *(float*)((uintptr_t)this + 0x480);
}
bool _Script_UMG::Slider::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::Slider::get_OnMouseCaptureBegin() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_UMG::Slider::get_OnMouseCaptureEnd() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_UMG::Slider::get_OnControllerCaptureBegin() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_UMG::Slider::get_OnControllerCaptureEnd() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_UMG::Slider::get_OnValueChanged() {
    return (void*)((uintptr_t)this + 0x4c8);
}
_Script_CoreUObject::Class* _Script_UMG::Slider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Slider");
    return result;
}
void _Script_UMG::Slider::SetValue(float InValue) {
    return;
}
void _Script_UMG::Slider::SetStepSize(float InValue) {
    return;
}
void _Script_UMG::Slider::SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_UMG::Slider::SetSliderBarColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_UMG::Slider::SetLocked(bool InValue) {
    return;
}
void _Script_UMG::Slider::SetIndentHandle(bool InValue) {
    return;
}
float _Script_UMG::Slider::GetValue() {
    return;
}
