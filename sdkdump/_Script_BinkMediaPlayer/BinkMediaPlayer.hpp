#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BinkMediaPlayer {
struct SRTSubtitle;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_BinkMediaPlayer {
#pragma pack(push, 1)
struct BinkMediaPlayer : public _Script_CoreUObject::Object {
    private: char pad_28[0xd0]; public:
    void* get_OnMediaClosed();
    void* get_OnMediaOpened();
    void* get_OnMediaReachedEnd();
    bool get_Looping();
    void set_Looping(bool value);
    bool get_StartImmediately();
    void set_StartImmediately(bool value);
    bool get_DelayedOpen();
    void set_DelayedOpen(bool value);
    void* get_BinkDestinationUpperLeft();
    void* get_BinkDestinationLowerRight();
    void* get_URL();
    void* get_BinkBufferMode();
    void* get_BinkSoundTrack();
    int32_t& get_BinkSoundTrackStart();
    void* get_BinkDrawStyle();
    int32_t& get_BinkLayerDepth();
    int32_t& get_AdditionalFileOffset();
    static _Script_CoreUObject::Class* static_class();
    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    bool SetRate(float Rate);
    bool SetLooping(bool InLooping);
    bool Seek(_Script_CoreUObject::Timespan& InTime);
    bool Rewind();
    bool Play();
    bool Pause();
    bool OpenUrl(void* NewUrl);
    bool OpenDefaultUrl();
    void LoadSRTFile(void* Path, bool& Success, void*& Subtitles);
    bool IsStopped();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    void* GetUrl();
    _Script_CoreUObject::Timespan GetTime();
    float GetRate();
    _Script_CoreUObject::Timespan GetDuration();
    void FindSubtitleForTime(void*& Subtitles, _Script_CoreUObject::Timespan& Time, bool& Found, _Script_BinkMediaPlayer::SRTSubtitle& Subtitle);
    void Draw(_Script_Engine::Texture* Texture, bool tonemap, int32_t out_nits, float Alpha);
    void CloseUrl();
    bool CanPlay();
    bool CanPause();
}; // Size: 0xf8
#pragma pack(pop)
}
