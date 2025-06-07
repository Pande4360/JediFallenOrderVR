#include "..\FUObjectArray.hpp"
#include "AKWaapiJsonObject.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AKWaapiJsonObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AKWaapiJsonObject");
    return result;
}
