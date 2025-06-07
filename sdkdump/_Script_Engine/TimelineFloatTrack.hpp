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
namespace _Script_CoreUObject {
struct FloatProperty;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TimelineFloatTrack {
    private: char pad_0[0x40]; public:
    _Script_Engine::CurveFloat*& get_FloatCurve();
    void* get_InterpFunc();
    void* get_TrackName();
    void* get_FloatPropertyName();
    _Script_CoreUObject::FloatProperty*& get_FloatProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
