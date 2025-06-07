#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComboBoxString.hpp"
#include "Widget.hpp"
void* _Script_UMG::ComboBoxString::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::ComboBoxString::get_DefaultOptions() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_UMG::ComboBoxString::get_MaxListHeight() {
    return *(float*)((uintptr_t)this + 0xbc0);
}
void* _Script_UMG::ComboBoxString::get_SelectedOption() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_UMG::ComboBoxString::get_ContentPadding() {
    return (void*)((uintptr_t)this + 0xbb0);
}
void* _Script_UMG::ComboBoxString::get_ItemStyle() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void _Script_UMG::ComboBoxString::set_HasDownArrow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ComboBoxString::get_HasDownArrow() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc4 + 0)) & 1 != 0;
}
bool _Script_UMG::ComboBoxString::get_EnableGamepadNavigationMode() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc5 + 0)) & 1 != 0;
}
void _Script_UMG::ComboBoxString::set_EnableGamepadNavigationMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ComboBoxString::get_Font() {
    return (void*)((uintptr_t)this + 0xbc8);
}
void* _Script_UMG::ComboBoxString::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0xc20);
}
bool _Script_UMG::ComboBoxString::get_bIsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0xc48 + 0)) & 1 != 0;
}
void _Script_UMG::ComboBoxString::set_bIsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc48 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ComboBoxString::get_OnGenerateWidgetEvent() {
    return (void*)((uintptr_t)this + 0xc50);
}
void* _Script_UMG::ComboBoxString::get_OnSelectionChanged() {
    return (void*)((uintptr_t)this + 0xc60);
}
void* _Script_UMG::ComboBoxString::get_OnOpening() {
    return (void*)((uintptr_t)this + 0xc70);
}
void _Script_UMG::ComboBoxString::RefreshOptions() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::ComboBoxString::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ComboBoxString");
    return result;
}
void _Script_UMG::ComboBoxString::SetSelectedOption(void* Option) {
    return;
}
bool _Script_UMG::ComboBoxString::RemoveOption(void* Option) {
    return;
}
void* _Script_UMG::ComboBoxString::GetSelectedOption() {
    return;
}
int32_t _Script_UMG::ComboBoxString::GetOptionCount() {
    return;
}
void* _Script_UMG::ComboBoxString::GetOptionAtIndex(int32_t Index) {
    return;
}
int32_t _Script_UMG::ComboBoxString::FindOptionIndex(void* Option) {
    return;
}
void _Script_UMG::ComboBoxString::ClearSelection() {
    return;
}
void _Script_UMG::ComboBoxString::ClearOptions() {
    return;
}
void _Script_UMG::ComboBoxString::AddOption(void* Option) {
    return;
}
