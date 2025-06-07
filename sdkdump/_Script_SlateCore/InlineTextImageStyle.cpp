#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InlineTextImageStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::InlineTextImageStyle::get_Image() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::InlineTextImageStyle::get_Baseline() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_SlateCore::InlineTextImageStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.InlineTextImageStyle");
    return result;
}
