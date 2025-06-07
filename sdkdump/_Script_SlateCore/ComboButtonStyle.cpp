#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComboButtonStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ComboButtonStyle::get_ButtonStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ComboButtonStyle::get_DownArrowImage() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_SlateCore::ComboButtonStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ComboButtonStyle");
    return result;
}
void* _Script_SlateCore::ComboButtonStyle::get_MenuBorderPadding() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_SlateCore::ComboButtonStyle::get_MenuBorderBrush() {
    return (void*)((uintptr_t)this + 0x308);
}
