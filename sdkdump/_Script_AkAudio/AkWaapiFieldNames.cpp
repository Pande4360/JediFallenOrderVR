#include "..\FUObjectArray.hpp"
#include "AkWaapiFieldNames.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkWaapiFieldNames::get_FieldName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWaapiFieldNames::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkWaapiFieldNames");
    return result;
}
