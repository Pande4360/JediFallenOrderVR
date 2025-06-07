#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PredictProjectilePathParams {
    private: char pad_0[0x60]; public:
    void* get_StartLocation();
    void* get_LaunchVelocity();
    bool get_bTraceWithCollision();
    void set_bTraceWithCollision(bool value);
    float& get_ProjectileRadius();
    float& get_MaxSimTime();
    bool get_bTraceWithChannel();
    void set_bTraceWithChannel(bool value);
    void* get_TraceChannel();
    void* get_ObjectTypes();
    void* get_ActorsToIgnore();
    float& get_SimFrequency();
    float& get_OverrideGravityZ();
    void* get_DrawDebugType();
    float& get_DrawDebugTime();
    bool get_bTraceComplex();
    void set_bTraceComplex(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
