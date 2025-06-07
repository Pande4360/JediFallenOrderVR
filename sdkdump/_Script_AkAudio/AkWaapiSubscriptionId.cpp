#include "..\FUObjectArray.hpp"
#include "AkWaapiSubscriptionId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkWaapiSubscriptionId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkWaapiSubscriptionId");
    return result;
}
