#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FloatRange.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "MediaPlayer.hpp"
#include "MediaPlaylist.hpp"
#include "MediaSource.hpp"
#include "..\_Script_MediaUtils\MediaPlayerOptions.hpp"
void* _Script_MediaAssets::MediaPlayer::get_OnEndReached() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_MediaAssets::MediaPlayer::get_VerticalFieldOfView() {
    return *(float*)((uintptr_t)this + 0xe4);
}
void* _Script_MediaAssets::MediaPlayer::get_OnPlaybackSuspended() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_MediaAssets::MediaPlayer::GetTrackLanguage(void* TrackType, int32_t TrackIndex) {
    return;
}
void* _Script_MediaAssets::MediaPlayer::get_OnMediaClosed() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_MediaAssets::MediaPlayer::get_OnMediaOpened() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaPlayer");
    return result;
}
void* _Script_MediaAssets::MediaPlayer::get_OnTracksChanged() {
    return (void*)((uintptr_t)this + 0x98);
}
float _Script_MediaAssets::MediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
void* _Script_MediaAssets::MediaPlayer::get_OnMediaOpenFailed() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_MediaAssets::MediaPlayer::get_OnPlaybackResumed() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Rotator _Script_MediaAssets::MediaPlayer::GetViewRotation() {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetTrackFormat(void* TrackType, int32_t TrackIndex) {
    return;
}
void* _Script_MediaAssets::MediaPlayer::get_OnSeekCompleted() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_MediaAssets::MediaPlayer::get_CacheAhead() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_MediaAssets::MediaPlayer::get_CacheBehind() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_MediaAssets::MediaPlayer::IsPaused() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::get_CacheBehindGame() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_MediaAssets::MediaPlayer::get_NativeAudioOut() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_MediaAssets::MediaPlayer::set_NativeAudioOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaAssets::MediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::get_PlayOnOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Timespan _Script_MediaAssets::MediaPlayer::GetTime() {
    return;
}
void _Script_MediaAssets::MediaPlayer::set_PlayOnOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaAssets::MediaPlayer::IsReady() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::get_Shuffle() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
void _Script_MediaAssets::MediaPlayer::set_Shuffle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MediaAssets::MediaPlayer::IsPlaying() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::get_Loop() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 2 != 0;
}
void _Script_MediaAssets::MediaPlayer::set_Loop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_MediaAssets::MediaPlaylist*& _Script_MediaAssets::MediaPlayer::get_Playlist() {
    return *(_Script_MediaAssets::MediaPlaylist**)((uintptr_t)this + 0xc8);
}
void _Script_MediaAssets::MediaPlayer::SetTimeDelay(_Script_CoreUObject::Timespan TimeDelay) {
    return;
}
int32_t& _Script_MediaAssets::MediaPlayer::get_PlaylistIndex() {
    return *(int32_t*)((uintptr_t)this + 0xd0);
}
void* _Script_MediaAssets::MediaPlayer::get_TimeDelay() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_MediaAssets::MediaPlayer::get_HorizontalFieldOfView() {
    return *(float*)((uintptr_t)this + 0xe0);
}
bool _Script_MediaAssets::MediaPlayer::SupportsSeeking() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::get_ViewRotation() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_MediaAssets::MediaPlayer::get_PlayerGuid() {
    return (void*)((uintptr_t)this + 0x120);
}
bool _Script_MediaAssets::MediaPlayer::SupportsScrubbing() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetNativeVolume(float Volume) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SupportsRate(float Rate, bool Unthinned) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetViewRotation(_Script_CoreUObject::Rotator& Rotation, bool Absolute) {
    return;
}
float _Script_MediaAssets::MediaPlayer::GetRate() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::OpenPlaylistIndex(_Script_MediaAssets::MediaPlaylist* InPlaylist, int32_t Index) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetTrackFormat(void* TrackType, int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetRate(float Rate) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SetLooping(bool Looping) {
    return;
}
void _Script_MediaAssets::MediaPlayer::SetDesiredPlayerName(void* PlayerName) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::SelectTrack(void* TrackType, int32_t TrackIndex) {
    return;
}
void _Script_MediaAssets::MediaPlayer::SetBlockOnTime(_Script_CoreUObject::Timespan& Time) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Seek(_Script_CoreUObject::Timespan& Time) {
    return;
}
_Script_CoreUObject::Timespan _Script_MediaAssets::MediaPlayer::GetDuration() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Rewind() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Previous() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Reopen() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::OpenFile(void* FilePath) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Play() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Pause() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::CanPlayUrl(void* URL) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::OpenUrl(void* URL) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::OpenSourceWithOptions(_Script_MediaAssets::MediaSource* MediaSource, _Script_MediaUtils::MediaPlayerOptions& Options) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::CanPause() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::OpenSource(_Script_MediaAssets::MediaSource* MediaSource) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::OpenPlaylist(_Script_MediaAssets::MediaPlaylist* InPlaylist) {
    return;
}
bool _Script_MediaAssets::MediaPlayer::Next() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::IsPreparing() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::IsLooping() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::IsConnecting() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::IsBuffering() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::HasError() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
_Script_CoreUObject::FloatRange _Script_MediaAssets::MediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
float _Script_MediaAssets::MediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
_Script_CoreUObject::IntPoint _Script_MediaAssets::MediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
float _Script_MediaAssets::MediaPlayer::GetVerticalFieldOfView() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::GetUrl() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::GetTrackDisplayName(void* TrackType, int32_t TrackIndex) {
    return;
}
_Script_CoreUObject::Timespan _Script_MediaAssets::MediaPlayer::GetTimeDelay() {
    return;
}
void _Script_MediaAssets::MediaPlayer::GetSupportedRates(void*& OutRates, bool Unthinned) {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetSelectedTrack(void* TrackType) {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetPlaylistIndex() {
    return;
}
_Script_MediaAssets::MediaPlaylist* _Script_MediaAssets::MediaPlayer::GetPlaylist() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::GetPlayerName() {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetNumTracks(void* TrackType) {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetNumTrackFormats(void* TrackType, int32_t TrackIndex) {
    return;
}
void* _Script_MediaAssets::MediaPlayer::GetMediaName() {
    return;
}
float _Script_MediaAssets::MediaPlayer::GetHorizontalFieldOfView() {
    return;
}
void* _Script_MediaAssets::MediaPlayer::GetDesiredPlayerName() {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
int32_t _Script_MediaAssets::MediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex) {
    return;
}
void _Script_MediaAssets::MediaPlayer::Close() {
    return;
}
bool _Script_MediaAssets::MediaPlayer::CanPlaySource(_Script_MediaAssets::MediaSource* MediaSource) {
    return;
}
