#include "..\FUObjectArray.hpp"
#include "AkCallbackInfo.hpp"
#include "AkEventCallbackInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AkAudio::AkEventCallbackInfo::get_PlayingID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_AkAudio::AkEventCallbackInfo::get_EventID() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkEventCallbackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkEventCallbackInfo");
    return result;
}
