#include "..\FUObjectArray.hpp"
#include "AkCallbackInfo.hpp"
#include "AkMusicSyncCallbackInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AkAudio::AkMusicSyncCallbackInfo::get_PlayingID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_AkAudio::AkMusicSyncCallbackInfo::get_SegmentInfo() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_AkAudio::AkMusicSyncCallbackInfo::get_MusicSyncType() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AkAudio::AkMusicSyncCallbackInfo::get_UserCueName() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkMusicSyncCallbackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkMusicSyncCallbackInfo");
    return result;
}
