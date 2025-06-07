#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimInstance.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimSingleNodeInstance : public AnimInstance {
    private: char pad_3b0[0x10]; public:
    _Script_Engine::AnimationAsset*& get_CurrentAsset();
    void* get_PostEvaluateAnimEvent();
    static _Script_CoreUObject::Class* static_class();
    void StopAnim();
    void SetReverse(bool bInReverse);
    void SetPreviewCurveOverride(void*& PoseName, float Value, bool bRemoveIfZero);
    void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
    void SetPosition(float InPosition, bool bFireNotifies);
    void SetPlayRate(float InPlayRate);
    void SetPlaying(bool bIsPlaying);
    void SetLooping(bool bIsLooping);
    void SetBlendSpaceInput(_Script_CoreUObject::Vector& InBlendInput);
    void SetAnimationAsset(_Script_Engine::AnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    float GetLength();
    _Script_Engine::AnimationAsset* GetAnimationAsset();
}; // Size: 0x3c0
#pragma pack(pop)
}
