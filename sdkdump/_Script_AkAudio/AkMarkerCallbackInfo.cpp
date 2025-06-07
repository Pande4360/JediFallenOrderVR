#include "..\FUObjectArray.hpp"
#include "AkEventCallbackInfo.hpp"
#include "AkMarkerCallbackInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AkAudio::AkMarkerCallbackInfo::get_Identifier() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_AkAudio::AkMarkerCallbackInfo::get_Position() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_AkAudio::AkMarkerCallbackInfo::get_Label() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMarkerCallbackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkMarkerCallbackInfo");
    return result;
}
