#include "..\FUObjectArray.hpp"
#include "BinkMediaPlayer.hpp"
#include "SRTSubtitle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_Engine\Texture.hpp"
bool _Script_BinkMediaPlayer::BinkMediaPlayer::Pause() {
    return;
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_OnMediaReachedEnd() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_OnMediaClosed() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::set_StartImmediately(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::set_Looping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::get_Looping() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::Seek(_Script_CoreUObject::Timespan& InTime) {
    return;
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_OnMediaOpened() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::get_StartImmediately() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 2 != 0;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::get_DelayedOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 4 != 0;
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::set_DelayedOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::CloseUrl() {
    return;
}
int32_t& _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkSoundTrackStart() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkDestinationUpperLeft() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkDestinationLowerRight() {
    return (void*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Timespan _Script_BinkMediaPlayer::BinkMediaPlayer::GetTime() {
    return;
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_URL() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::Draw(_Script_Engine::Texture* Texture, bool tonemap, int32_t out_nits, float Alpha) {
    return;
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkBufferMode() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkSoundTrack() {
    return (void*)((uintptr_t)this + 0x91);
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkDrawStyle() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::CanPlay() {
    return;
}
int32_t& _Script_BinkMediaPlayer::BinkMediaPlayer::get_BinkLayerDepth() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
int32_t& _Script_BinkMediaPlayer::BinkMediaPlayer::get_AdditionalFileOffset() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_BinkMediaPlayer::BinkMediaPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/BinkMediaPlayer.BinkMediaPlayer");
    return result;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::SupportsSeeking() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::SupportsScrubbing() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::SupportsRate(float Rate, bool Unthinned) {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::SetRate(float Rate) {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::SetLooping(bool InLooping) {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::Rewind() {
    return;
}
_Script_CoreUObject::Timespan _Script_BinkMediaPlayer::BinkMediaPlayer::GetDuration() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::Play() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::OpenUrl(void* NewUrl) {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::OpenDefaultUrl() {
    return;
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::LoadSRTFile(void* Path, bool& Success, void*& Subtitles) {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::IsStopped() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::IsPlaying() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::IsPaused() {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::IsLooping() {
    return;
}
void* _Script_BinkMediaPlayer::BinkMediaPlayer::GetUrl() {
    return;
}
float _Script_BinkMediaPlayer::BinkMediaPlayer::GetRate() {
    return;
}
void _Script_BinkMediaPlayer::BinkMediaPlayer::FindSubtitleForTime(void*& Subtitles, _Script_CoreUObject::Timespan& Time, bool& Found, _Script_BinkMediaPlayer::SRTSubtitle& Subtitle) {
    return;
}
bool _Script_BinkMediaPlayer::BinkMediaPlayer::CanPause() {
    return;
}
