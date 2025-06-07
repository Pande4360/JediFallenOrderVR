#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
struct rsActor;
}
namespace _Script_RsTechRT {
struct RsScriptVariable;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct rsAnimInstance : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x3f0]; public:
    float& get_CinematicBlendInterp();
    bool get_bIsOnLeftFoot();
    void set_bIsOnLeftFoot(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_RsTechRT::rsActor* TryGetRsActorOwner();
    void SetIsSyncing(bool IsSyncing);
    bool MotionSampleIsLessThan(void* motionSample, float V);
    bool MotionSampleIsInRange(void* motionSample, float RangeMin, float RangeMax);
    bool MotionSampleIsGreaterThan(void* motionSample, float V);
    void LockMotionSample(void* motionSample, bool Lock);
    bool IsSyncing();
    bool IsSlotActive(void* SlotName);
    bool IgnoreMotionSampleOrIsLessThan(void* motionSample, float V, float ignoreValue, bool ignoredReturn);
    bool IgnoreMotionSampleOrIsInRange(void* motionSample, float RangeMin, float RangeMax, float ignoreValue, bool ignoredReturn);
    bool IgnoreMotionSampleOrIsGreaterThan(void* motionSample, float V, float ignoreValue, bool ignoredReturn);
    bool GetVariableAsInteger(int32_t& Value, _Script_RsTechRT::RsScriptVariable& Variable);
    bool GetVariableAsFloat(float& Value, _Script_RsTechRT::RsScriptVariable& Variable);
    bool GetVariableAsBool(bool& Value, _Script_RsTechRT::RsScriptVariable& Variable);
    _Script_CoreUObject::Transform GetRootMotionTransform();
    _Script_CoreUObject::Rotator GetRootMotionRotation();
    void* GetRootMotionMode();
    float GetMotionSample(void* motionSample);
    void* GetAnimNamePlayingInSlot(void* SlotName);
    bool FindVariable(_Script_RsTechRT::RsScriptVariable& Variable, void* VariableName);
}; // Size: 0x7a0
#pragma pack(pop)
}
