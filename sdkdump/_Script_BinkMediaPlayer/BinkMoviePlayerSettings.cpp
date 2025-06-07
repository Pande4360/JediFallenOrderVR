#include "..\FUObjectArray.hpp"
#include "BinkMoviePlayerSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_BinkMediaPlayer::BinkMoviePlayerSettings::get_BinkBufferMode() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_BinkMediaPlayer::BinkMoviePlayerSettings::get_BinkSoundTrack() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_BinkMediaPlayer::BinkMoviePlayerSettings::get_BinkDestinationLowerRight() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_BinkMediaPlayer::BinkMoviePlayerSettings::get_BinkSoundTrackStart() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_BinkMediaPlayer::BinkMoviePlayerSettings::get_BinkDestinationUpperLeft() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_BinkMediaPlayer::BinkMoviePlayerSettings::get_BinkPixelFormat() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_BinkMediaPlayer::BinkMoviePlayerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/BinkMediaPlayer.BinkMoviePlayerSettings");
    return result;
}
