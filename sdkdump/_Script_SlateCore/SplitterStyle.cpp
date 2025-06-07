#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "SplitterStyle.hpp"
void* _Script_SlateCore::SplitterStyle::get_HandleNormalBrush() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SplitterStyle::get_HandleHighlightBrush() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_SlateCore::SplitterStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SplitterStyle");
    return result;
}
