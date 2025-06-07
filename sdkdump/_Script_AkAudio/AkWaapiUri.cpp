#include "..\FUObjectArray.hpp"
#include "AkWaapiUri.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkWaapiUri::get_Uri() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWaapiUri::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkWaapiUri");
    return result;
}
