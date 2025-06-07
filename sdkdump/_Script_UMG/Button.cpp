#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_SlateCore\ButtonStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "Button.hpp"
#include "ContentWidget.hpp"
bool _Script_UMG::Button::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3bb + 0)) & 1 != 0;
}
void* _Script_UMG::Button::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::Button::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x118);
}
void _Script_UMG::Button::SetBackgroundColor(_Script_CoreUObject::LinearColor InBackgroundColor) {
    return;
}
void* _Script_UMG::Button::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::Button::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_UMG::Button::get_ClickMethod() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Script_UMG::Button::get_PressMethod() {
    return (void*)((uintptr_t)this + 0x3ba);
}
void* _Script_UMG::Button::get_TouchMethod() {
    return (void*)((uintptr_t)this + 0x3b9);
}
void _Script_UMG::Button::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3bb + 0);
    *(uint8_t*)((uintptr_t)this + 0x3bb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::Button::get_OnClicked() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_UMG::Button::get_OnPressed() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_UMG::Button::get_OnReleased() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void* _Script_UMG::Button::get_OnHovered() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_UMG::Button::get_OnUnhovered() {
    return (void*)((uintptr_t)this + 0x400);
}
_Script_CoreUObject::Class* _Script_UMG::Button::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Button");
    return result;
}
void _Script_UMG::Button::SetTouchMethod(void* InTouchMethod) {
    return;
}
void _Script_UMG::Button::SetStyle(_Script_SlateCore::ButtonStyle& InStyle) {
    return;
}
void _Script_UMG::Button::SetPressMethod(void* InPressMethod) {
    return;
}
void _Script_UMG::Button::SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity) {
    return;
}
void _Script_UMG::Button::SetClickMethod(void* InClickMethod) {
    return;
}
bool _Script_UMG::Button::IsPressed() {
    return;
}
