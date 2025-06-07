#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComboBoxStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ComboBoxStyle::get_ComboButtonStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ComboBoxStyle::get_PressedSlateSound() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_SlateCore::ComboBoxStyle::get_SelectionChangeSlateSound() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_CoreUObject::Class* _Script_SlateCore::ComboBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ComboBoxStyle");
    return result;
}
