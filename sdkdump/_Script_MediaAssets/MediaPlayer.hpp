#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FloatRange.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
namespace _Script_MediaAssets {
struct MediaPlaylist;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_MediaUtils {
struct MediaPlayerOptions;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaPlayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x110]; public:
    void* get_OnEndReached();
    void* get_OnMediaClosed();
    void* get_OnMediaOpened();
    void* get_OnMediaOpenFailed();
    void* get_OnPlaybackResumed();
    void* get_OnPlaybackSuspended();
    void* get_OnSeekCompleted();
    void* get_OnTracksChanged();
    void* get_CacheAhead();
    void* get_CacheBehind();
    void* get_CacheBehindGame();
    bool get_NativeAudioOut();
    void set_NativeAudioOut(bool value);
    bool get_PlayOnOpen();
    void set_PlayOnOpen(bool value);
    bool get_Shuffle();
    void set_Shuffle(bool value);
    bool get_Loop();
    void set_Loop(bool value);
    _Script_MediaAssets::MediaPlaylist*& get_Playlist();
    int32_t& get_PlaylistIndex();
    void* get_TimeDelay();
    float& get_HorizontalFieldOfView();
    float& get_VerticalFieldOfView();
    void* get_ViewRotation();
    void* get_PlayerGuid();
    static _Script_CoreUObject::Class* static_class();
    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    bool SetViewRotation(_Script_CoreUObject::Rotator& Rotation, bool Absolute);
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);
    bool SetTrackFormat(void* TrackType, int32_t TrackIndex, int32_t FormatIndex);
    void SetTimeDelay(_Script_CoreUObject::Timespan TimeDelay);
    bool SetRate(float Rate);
    bool SetNativeVolume(float Volume);
    bool SetLooping(bool Looping);
    void SetDesiredPlayerName(void* PlayerName);
    void SetBlockOnTime(_Script_CoreUObject::Timespan& Time);
    bool SelectTrack(void* TrackType, int32_t TrackIndex);
    bool Seek(_Script_CoreUObject::Timespan& Time);
    bool Rewind();
    bool Reopen();
    bool Previous();
    bool Play();
    bool Pause();
    bool OpenUrl(void* URL);
    bool OpenSourceWithOptions(_Script_MediaAssets::MediaSource* MediaSource, _Script_MediaUtils::MediaPlayerOptions& Options);
    bool OpenSource(_Script_MediaAssets::MediaSource* MediaSource);
    bool OpenPlaylistIndex(_Script_MediaAssets::MediaPlaylist* InPlaylist, int32_t Index);
    bool OpenPlaylist(_Script_MediaAssets::MediaPlaylist* InPlaylist);
    bool OpenFile(void* FilePath);
    bool Next();
    bool IsReady();
    bool IsPreparing();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    bool IsConnecting();
    bool IsBuffering();
    bool HasError();
    _Script_CoreUObject::Rotator GetViewRotation();
    void* GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);
    _Script_CoreUObject::FloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);
    float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);
    _Script_CoreUObject::IntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);
    float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);
    float GetVerticalFieldOfView();
    void* GetUrl();
    void* GetTrackLanguage(void* TrackType, int32_t TrackIndex);
    int32_t GetTrackFormat(void* TrackType, int32_t TrackIndex);
    void* GetTrackDisplayName(void* TrackType, int32_t TrackIndex);
    _Script_CoreUObject::Timespan GetTimeDelay();
    _Script_CoreUObject::Timespan GetTime();
    void GetSupportedRates(void*& OutRates, bool Unthinned);
    int32_t GetSelectedTrack(void* TrackType);
    float GetRate();
    int32_t GetPlaylistIndex();
    _Script_MediaAssets::MediaPlaylist* GetPlaylist();
    void* GetPlayerName();
    int32_t GetNumTracks(void* TrackType);
    int32_t GetNumTrackFormats(void* TrackType, int32_t TrackIndex);
    void* GetMediaName();
    float GetHorizontalFieldOfView();
    _Script_CoreUObject::Timespan GetDuration();
    void* GetDesiredPlayerName();
    void* GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);
    int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);
    int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);
    void Close();
    bool CanPlayUrl(void* URL);
    bool CanPlaySource(_Script_MediaAssets::MediaSource* MediaSource);
    bool CanPause();
}; // Size: 0x138
#pragma pack(pop)
}
