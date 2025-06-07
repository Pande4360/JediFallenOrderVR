#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "MultiLineEditableTextBox.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::MultiLineEditableTextBox::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::MultiLineEditableTextBox::get_HintText() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_UMG::MultiLineEditableTextBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_UMG::MultiLineEditableTextBox::get_HintTextDelegate() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_UMG::MultiLineEditableTextBox::get_TextStyle() {
    return (void*)((uintptr_t)this + 0x960);
}
bool _Script_UMG::MultiLineEditableTextBox::get_bIsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xb50 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableTextBox::set_bIsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb50 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableTextBox::get_AllowContextMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0xb51 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableTextBox::set_AllowContextMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb51 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::MultiLineEditableTextBox::get_VirtualKeyboardOptions() {
    return (void*)((uintptr_t)this + 0xb52);
}
void* _Script_UMG::MultiLineEditableTextBox::get_VirtualKeyboardDismissAction() {
    return (void*)((uintptr_t)this + 0xb53);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::MultiLineEditableTextBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0xb58);
}
void* _Script_UMG::MultiLineEditableTextBox::get_Font() {
    return (void*)((uintptr_t)this + 0xb60);
}
void* _Script_UMG::MultiLineEditableTextBox::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0xbb8);
}
void* _Script_UMG::MultiLineEditableTextBox::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0xbc8);
}
void* _Script_UMG::MultiLineEditableTextBox::GetText() {
    return;
}
void* _Script_UMG::MultiLineEditableTextBox::get_ReadOnlyForegroundColor() {
    return (void*)((uintptr_t)this + 0xbd8);
}
void* _Script_UMG::MultiLineEditableTextBox::get_OnTextChanged() {
    return (void*)((uintptr_t)this + 0xbe8);
}
void* _Script_UMG::MultiLineEditableTextBox::get_OnTextCommitted() {
    return (void*)((uintptr_t)this + 0xbf8);
}
_Script_CoreUObject::Class* _Script_UMG::MultiLineEditableTextBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MultiLineEditableTextBox");
    return result;
}
void _Script_UMG::MultiLineEditableTextBox::SetText(void* InText) {
    return;
}
void _Script_UMG::MultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly) {
    return;
}
void _Script_UMG::MultiLineEditableTextBox::SetError(void* InError) {
    return;
}
