#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "SpinBox.hpp"
#include "Widget.hpp"
void _Script_UMG::SpinBox::SetMaxSliderValue(float NewValue) {
    return;
}
float& _Script_UMG::SpinBox::get_Value() {
    return *(float*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::SpinBox::get_ValueDelegate() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::SpinBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x118);
}
float _Script_UMG::SpinBox::GetMinValue() {
    return;
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::SpinBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x400);
}
float& _Script_UMG::SpinBox::get_Delta() {
    return *(float*)((uintptr_t)this + 0x408);
}
float _Script_UMG::SpinBox::GetMaxValue() {
    return;
}
void* _Script_UMG::SpinBox::get_Font() {
    return (void*)((uintptr_t)this + 0x410);
}
float& _Script_UMG::SpinBox::get_SliderExponent() {
    return *(float*)((uintptr_t)this + 0x40c);
}
void* _Script_UMG::SpinBox::get_Justification() {
    return (void*)((uintptr_t)this + 0x468);
}
void _Script_UMG::SpinBox::SetValue(float NewValue) {
    return;
}
float& _Script_UMG::SpinBox::get_MinDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x46c);
}
bool _Script_UMG::SpinBox::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x470 + 0)) & 1 != 0;
}
void _Script_UMG::SpinBox::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x470 + 0);
    *(uint8_t*)((uintptr_t)this + 0x470 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::SpinBox::get_SelectAllTextOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x471 + 0)) & 1 != 0;
}
float& _Script_UMG::SpinBox::get_MaxSliderValue() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
bool _Script_UMG::SpinBox::get_bOverride_MaxSliderValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 8 != 0;
}
void _Script_UMG::SpinBox::set_SelectAllTextOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x471 + 0);
    *(uint8_t*)((uintptr_t)this + 0x471 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::SpinBox::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x478);
}
void _Script_UMG::SpinBox::ClearMaxValue() {
    return;
}
void* _Script_UMG::SpinBox::get_OnValueChanged() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Script_UMG::SpinBox::get_OnValueCommitted() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Script_UMG::SpinBox::get_OnBeginSliderMovement() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Script_UMG::SpinBox::get_OnEndSliderMovement() {
    return (void*)((uintptr_t)this + 0x4d0);
}
bool _Script_UMG::SpinBox::get_bOverride_MinValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 1 != 0;
}
void _Script_UMG::SpinBox::set_bOverride_MinValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::SpinBox::get_bOverride_MaxValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 2 != 0;
}
void _Script_UMG::SpinBox::set_bOverride_MaxValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_UMG::SpinBox::get_bOverride_MinSliderValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 4 != 0;
}
void _Script_UMG::SpinBox::set_bOverride_MinSliderValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_UMG::SpinBox::set_bOverride_MaxSliderValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_UMG::SpinBox::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
float& _Script_UMG::SpinBox::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0x4e8);
}
float& _Script_UMG::SpinBox::get_MinSliderValue() {
    return *(float*)((uintptr_t)this + 0x4ec);
}
_Script_CoreUObject::Class* _Script_UMG::SpinBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SpinBox");
    return result;
}
void _Script_UMG::SpinBox::SetMinValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMinSliderValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMaxValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetForegroundColor(_Script_SlateCore::SlateColor InForegroundColor) {
    return;
}
float _Script_UMG::SpinBox::GetValue() {
    return;
}
float _Script_UMG::SpinBox::GetMinSliderValue() {
    return;
}
float _Script_UMG::SpinBox::GetMaxSliderValue() {
    return;
}
void _Script_UMG::SpinBox::ClearMinValue() {
    return;
}
void _Script_UMG::SpinBox::ClearMinSliderValue() {
    return;
}
void _Script_UMG::SpinBox::ClearMaxSliderValue() {
    return;
}
