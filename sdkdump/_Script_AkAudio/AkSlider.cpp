#include "..\FUObjectArray.hpp"
#include "AkSlider.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\Widget.hpp"
bool _Script_AkAudio::AkSlider::get_IndentHandle() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 1 != 0;
}
void* _Script_AkAudio::AkSlider::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x118);
}
float& _Script_AkAudio::AkSlider::get_Value() {
    return *(float*)((uintptr_t)this + 0x100);
}
void* _Script_AkAudio::AkSlider::get_ValueDelegate() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_AkAudio::AkSlider::set_IndentHandle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::AkSlider::get_SliderHandleColor() {
    return (void*)((uintptr_t)this + 0x46c);
}
void* _Script_AkAudio::AkSlider::get_Orientation() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_AkAudio::AkSlider::get_SliderBarColor() {
    return (void*)((uintptr_t)this + 0x45c);
}
bool _Script_AkAudio::AkSlider::get_Locked() {
    return (*(uint8_t*)((uintptr_t)this + 0x47d + 0)) & 1 != 0;
}
void _Script_AkAudio::AkSlider::set_Locked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47d + 0);
    *(uint8_t*)((uintptr_t)this + 0x47d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AkAudio::AkSlider::get_StepSize() {
    return *(float*)((uintptr_t)this + 0x480);
}
bool _Script_AkAudio::AkSlider::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkSlider::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::AkSlider::get_ThePropertyToControl() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_AkAudio::AkSlider::get_ItemToControl() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_AkAudio::AkSlider::get_OnValueChanged() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_AkAudio::AkSlider::get_OnItemDropped() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Script_AkAudio::AkSlider::get_OnPropertyDropped() {
    return (void*)((uintptr_t)this + 0x4f8);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSlider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkSlider");
    return result;
}
void _Script_AkAudio::AkSlider::SetValue(float InValue) {
    return;
}
void _Script_AkAudio::AkSlider::SetAkSliderItemProperty(void* ItemProperty) {
    return;
}
void _Script_AkAudio::AkSlider::SetStepSize(float InValue) {
    return;
}
void _Script_AkAudio::AkSlider::SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_AkAudio::AkSlider::SetSliderBarColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_AkAudio::AkSlider::SetLocked(bool InValue) {
    return;
}
void _Script_AkAudio::AkSlider::SetIndentHandle(bool InValue) {
    return;
}
void _Script_AkAudio::AkSlider::SetAkSliderItemId(_Script_CoreUObject::Guid& ItemId) {
    return;
}
float _Script_AkAudio::AkSlider::GetValue() {
    return;
}
void* _Script_AkAudio::AkSlider::GetAkSliderItemProperty() {
    return;
}
_Script_CoreUObject::Guid _Script_AkAudio::AkSlider::GetAkSliderItemId() {
    return;
}
