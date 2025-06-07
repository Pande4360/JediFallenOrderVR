#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "EditableText.hpp"
#include "Widget.hpp"
void* _Script_UMG::EditableText::get_Text() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::EditableText::get_TextDelegate() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::EditableText::get_HintTextDelegate() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_UMG::EditableText::get_HintText() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::EditableText::get_BackgroundImageComposing() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x380);
}
void* _Script_UMG::EditableText::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x150);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::EditableText::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x370);
}
void _Script_UMG::EditableText::set_IsCaretMovedWhenGainFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::EditableText::get_BackgroundImageSelected() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x378);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::EditableText::get_CaretImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x388);
}
void* _Script_UMG::EditableText::get_Font() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_UMG::EditableText::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x3e8);
}
bool _Script_UMG::EditableText::get_IsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x410 + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_IsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x410 + 0);
    *(uint8_t*)((uintptr_t)this + 0x410 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableText::get_IsPassword() {
    return (*(uint8_t*)((uintptr_t)this + 0x411 + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_IsPassword(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x411 + 0);
    *(uint8_t*)((uintptr_t)this + 0x411 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::EditableText::get_MinimumDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x414);
}
bool _Script_UMG::EditableText::get_IsCaretMovedWhenGainFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
bool _Script_UMG::EditableText::get_SelectAllTextWhenFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x419 + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_SelectAllTextWhenFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x419 + 0);
    *(uint8_t*)((uintptr_t)this + 0x419 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableText::get_RevertTextOnEscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x41a + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_RevertTextOnEscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41a + 0);
    *(uint8_t*)((uintptr_t)this + 0x41a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableText::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x41b + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41b + 0);
    *(uint8_t*)((uintptr_t)this + 0x41b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableText::get_SelectAllTextOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x41c + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_SelectAllTextOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41c + 0);
    *(uint8_t*)((uintptr_t)this + 0x41c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableText::get_AllowContextMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x41d + 0)) & 1 != 0;
}
void _Script_UMG::EditableText::set_AllowContextMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41d + 0);
    *(uint8_t*)((uintptr_t)this + 0x41d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::EditableText::get_KeyboardType() {
    return (void*)((uintptr_t)this + 0x41e);
}
void* _Script_UMG::EditableText::get_VirtualKeyboardOptions() {
    return (void*)((uintptr_t)this + 0x41f);
}
void* _Script_UMG::EditableText::get_VirtualKeyboardDismissAction() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Script_UMG::EditableText::get_Justification() {
    return (void*)((uintptr_t)this + 0x421);
}
void* _Script_UMG::EditableText::get_ShapedTextOptions() {
    return (void*)((uintptr_t)this + 0x422);
}
void* _Script_UMG::EditableText::get_OnTextChanged() {
    return (void*)((uintptr_t)this + 0x428);
}
void* _Script_UMG::EditableText::get_OnTextCommitted() {
    return (void*)((uintptr_t)this + 0x438);
}
_Script_CoreUObject::Class* _Script_UMG::EditableText::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.EditableText");
    return result;
}
void _Script_UMG::EditableText::SetText(void* InText) {
    return;
}
void _Script_UMG::EditableText::SetIsReadOnly(bool InbIsReadyOnly) {
    return;
}
void _Script_UMG::EditableText::SetIsPassword(bool InbIsPassword) {
    return;
}
void _Script_UMG::EditableText::SetHintText(void* InHintText) {
    return;
}
void* _Script_UMG::EditableText::GetText() {
    return;
}
