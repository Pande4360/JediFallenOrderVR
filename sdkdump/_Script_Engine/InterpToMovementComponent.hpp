#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpToMovementComponent : public MovementComponent {
    private: char pad_1b0[0xa0]; public:
    float& get_Duration();
    bool get_bPauseOnImpact();
    void set_bPauseOnImpact(bool value);
    bool get_bSweepOnMove();
    void set_bSweepOnMove(bool value);
    void* get_BehaviourType();
    bool get_bForceSubStepping();
    void set_bForceSubStepping(bool value);
    void* get_OnInterpToReverse();
    void* get_OnInterpToStop();
    void* get_OnWaitBeginDelegate();
    void* get_OnWaitEndDelegate();
    void* get_OnResetDelegate();
    float& get_MaxSimulationTimeStep();
    int32_t& get_MaxSimulationIterations();
    void* get_ControlPoints();
    static _Script_CoreUObject::Class* static_class();
    void StopSimulating(_Script_Engine::HitResult& HitResult);
    void RestartMovement(float InitialDirection);
    void FinaliseControlPoints();
}; // Size: 0x250
#pragma pack(pop)
}
