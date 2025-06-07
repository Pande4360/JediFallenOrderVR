#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsLightEventData {
    private: char pad_0[0x40]; public:
    void* get_Event();
    _Script_Engine::CurveFloat*& get_IntensityCurve();
    bool get_bOverrideLightColor();
    void set_bOverrideLightColor(bool value);
    void* get_LightColor();
    bool get_bResetLightColor();
    void set_bResetLightColor(bool value);
    float& get_AnimSpeed();
    float& get_StartDelay();
    bool get_bStartDelayRandomize();
    void set_bStartDelayRandomize(bool value);
    float& get_StartDelayRandomRange();
    bool get_bLoop();
    void set_bLoop(bool value);
    bool get_bLoopDelayRandomize();
    void set_bLoopDelayRandomize(bool value);
    float& get_LoopDelay();
    void* get_NextEvent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
