#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HyperlinkStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::HyperlinkStyle::get_UnderlineStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::HyperlinkStyle::get_Padding() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Script_SlateCore::HyperlinkStyle::get_TextStyle() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_SlateCore::HyperlinkStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.HyperlinkStyle");
    return result;
}
