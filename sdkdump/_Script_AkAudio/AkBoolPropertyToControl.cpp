#include "..\FUObjectArray.hpp"
#include "AkBoolPropertyToControl.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkBoolPropertyToControl::get_ItemProperty() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkBoolPropertyToControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkBoolPropertyToControl");
    return result;
}
