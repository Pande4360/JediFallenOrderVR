#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateColor.hpp"
void* _Script_SlateCore::SlateColor::get_SpecifiedColor() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SlateCore::SlateColor::get_ColorUseRule() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SlateCore::SlateColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SlateColor");
    return result;
}
