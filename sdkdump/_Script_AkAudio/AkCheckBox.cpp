#include "..\FUObjectArray.hpp"
#include "AkCheckBox.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_UMG\ContentWidget.hpp"
void* _Script_AkAudio::AkCheckBox::get_CheckedState() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_AkAudio::AkCheckBox::get_ItemToControl() {
    return (void*)((uintptr_t)this + 0x9a0);
}
void* _Script_AkAudio::AkCheckBox::get_CheckedStateDelegate() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void* _Script_AkAudio::AkCheckBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x408);
}
void _Script_AkAudio::AkCheckBox::SetIsChecked(bool InIsChecked) {
    return;
}
void* _Script_AkAudio::AkCheckBox::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x988);
}
bool _Script_AkAudio::AkCheckBox::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x989 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkCheckBox::SetAkBoolProperty(void* ItemProperty) {
    return;
}
void _Script_AkAudio::AkCheckBox::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x989 + 0);
    *(uint8_t*)((uintptr_t)this + 0x989 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::AkCheckBox::get_ThePropertyToControl() {
    return (void*)((uintptr_t)this + 0x990);
}
void* _Script_AkAudio::AkCheckBox::get_AkOnCheckStateChanged() {
    return (void*)((uintptr_t)this + 0x9e0);
}
void* _Script_AkAudio::AkCheckBox::get_OnItemDropped() {
    return (void*)((uintptr_t)this + 0x9f0);
}
void* _Script_AkAudio::AkCheckBox::get_OnPropertyDropped() {
    return (void*)((uintptr_t)this + 0xa00);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkCheckBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkCheckBox");
    return result;
}
void _Script_AkAudio::AkCheckBox::SetCheckedState(void* InCheckedState) {
    return;
}
void _Script_AkAudio::AkCheckBox::SetAkItemId(_Script_CoreUObject::Guid& ItemId) {
    return;
}
bool _Script_AkAudio::AkCheckBox::IsPressed() {
    return;
}
bool _Script_AkAudio::AkCheckBox::IsChecked() {
    return;
}
void* _Script_AkAudio::AkCheckBox::GetCheckedState() {
    return;
}
void* _Script_AkAudio::AkCheckBox::GetAkProperty() {
    return;
}
_Script_CoreUObject::Guid _Script_AkAudio::AkCheckBox::GetAkItemId() {
    return;
}
