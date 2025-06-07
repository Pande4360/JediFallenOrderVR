#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScrollBorderStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ScrollBorderStyle::get_TopShadowBrush() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SlateCore::ScrollBorderStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ScrollBorderStyle");
    return result;
}
void* _Script_SlateCore::ScrollBorderStyle::get_BottomShadowBrush() {
    return (void*)((uintptr_t)this + 0x90);
}
