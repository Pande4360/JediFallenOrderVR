#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableTextBoxStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::EditableTextBoxStyle::get_BackgroundImageHovered() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_BackgroundImageNormal() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_BackgroundImageFocused() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_BackgroundImageReadOnly() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_Padding() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_Font() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_ReadOnlyForegroundColor() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_HScrollBarPadding() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_VScrollBarPadding() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_SlateCore::EditableTextBoxStyle::get_ScrollBarStyle() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Script_SlateCore::EditableTextBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.EditableTextBoxStyle");
    return result;
}
