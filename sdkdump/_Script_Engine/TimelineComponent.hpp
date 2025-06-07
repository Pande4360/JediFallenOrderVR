#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TimelineComponent : public ActorComponent {
    private: char pad_170[0xa0]; public:
    void* get_TheTimeline();
    bool get_bIgnoreTimeDilation();
    void set_bIgnoreTimeDilation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void SetVectorCurve(_Script_Engine::CurveVector* NewVectorCurve, void* VectorTrackName);
    void SetTimelineLengthMode(void* NewLengthMode);
    void SetTimelineLength(float newLength);
    void SetPlayRate(float NewRate);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    void SetLinearColorCurve(_Script_Engine::CurveLinearColor* NewLinearColorCurve, void* LinearColorTrackName);
    void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
    void SetFloatCurve(_Script_Engine::CurveFloat* NewFloatCurve, void* FloatTrackName);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_Timeline();
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetTimelineLength();
    float GetPlayRate();
    float GetPlaybackPosition();
    bool GetIgnoreTimeDilation();
}; // Size: 0x210
#pragma pack(pop)
}
