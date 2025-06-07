#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InlineEditableTextBlockStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::InlineEditableTextBlockStyle::get_EditableTextBoxStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::InlineEditableTextBlockStyle::get_TextStyle() {
    return (void*)((uintptr_t)this + 0x800);
}
_Script_CoreUObject::Class* _Script_SlateCore::InlineEditableTextBlockStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.InlineEditableTextBlockStyle");
    return result;
}
