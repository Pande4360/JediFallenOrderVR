#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "MovieSceneObjectBindingID.hpp"
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequencePlayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x7b0]; public:
    void* get_OnPlay();
    void* get_OnPlayReverse();
    void* get_OnStop();
    void* get_OnPause();
    void* get_OnFinished();
    void* get_Status();
    bool get_bReversePlayback();
    void set_bReversePlayback(bool value);
    _Script_MovieScene::MovieSceneSequence*& get_Sequence();
    void* get_StartTime();
    int32_t& get_DurationFrames();
    int32_t& get_CurrentNumLoops();
    void* get_PlaybackSettings();
    void* get_RootTemplateInstance();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float Playrate);
    void SetPlaybackRange(float NewStartTime, float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition, bool bForceEvaluation);
    void SetFrameRate(_Script_CoreUObject::FrameRate FrameRate);
    void SetFrameRange(int32_t StartFrame, int32_t Duration, bool bForceEvaluation);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    void ScrubToFrame(_Script_CoreUObject::FrameTime NewPosition);
    void Scrub();
    void PlayToSeconds(float TimeInSeconds);
    void PlayToFrame(_Script_CoreUObject::FrameTime NewPosition);
    void PlayReverse();
    void PlayLooping(int32_t NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds, bool bForceEvaluate);
    void JumpToPosition(float NewPlaybackPosition);
    void JumpToFrame(_Script_CoreUObject::FrameTime NewPosition, bool bForceEvaluate);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    _Script_CoreUObject::QualifiedFrameTime GetStartTime();
    float GetPlayRate();
    float GetPlaybackStart();
    float GetPlaybackPosition();
    float GetPlaybackEnd();
    void* GetObjectBindings(_Script_CoreUObject::Object* InObject);
    float GetLength();
    _Script_CoreUObject::FrameRate GetFrameRate();
    int32_t GetFrameDuration();
    _Script_CoreUObject::QualifiedFrameTime GetEndTime();
    _Script_CoreUObject::QualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    _Script_CoreUObject::QualifiedFrameTime GetCurrentTime();
    void* GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x7d8
#pragma pack(pop)
}
