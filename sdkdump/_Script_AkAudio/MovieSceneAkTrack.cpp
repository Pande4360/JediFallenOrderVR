#include "..\FUObjectArray.hpp"
#include "MovieSceneAkTrack.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrack.hpp"
void* _Script_AkAudio::MovieSceneAkTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_AkAudio::MovieSceneAkTrack::get_bIsAMasterTrack() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_AkAudio::MovieSceneAkTrack::set_bIsAMasterTrack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.MovieSceneAkTrack");
    return result;
}
