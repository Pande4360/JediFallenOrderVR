#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCaptureComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BoxReflectionCaptureComponent : public ReflectionCaptureComponent {
    private: char pad_340[0x20]; public:
    void* get_BoxDimensions();
    void* get_TransitionDistanceNegative();
    void* get_TransitionDistancePositive();
    float& get_BoxTransitionDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x360
#pragma pack(pop)
}
