#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableTextStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::EditableTextStyle::get_Font() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::EditableTextStyle::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SlateCore::EditableTextStyle::get_CaretImage() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_SlateCore::EditableTextStyle::get_BackgroundImageSelected() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SlateCore::EditableTextStyle::get_BackgroundImageComposing() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_SlateCore::EditableTextStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.EditableTextStyle");
    return result;
}
