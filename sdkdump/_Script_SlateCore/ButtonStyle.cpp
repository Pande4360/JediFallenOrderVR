#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ButtonStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ButtonStyle::get_Normal() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ButtonStyle::get_PressedSlateSound() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_SlateCore::ButtonStyle::get_Hovered() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SlateCore::ButtonStyle::get_Pressed() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_SlateCore::ButtonStyle::get_Disabled() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SlateCore::ButtonStyle::get_NormalPadding() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_SlateCore::ButtonStyle::get_PressedPadding() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_SlateCore::ButtonStyle::get_HoveredSlateSound() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Script_SlateCore::ButtonStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ButtonStyle");
    return result;
}
