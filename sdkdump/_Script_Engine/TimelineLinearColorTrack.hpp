#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_CoreUObject {
struct StructProperty;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TimelineLinearColorTrack {
    private: char pad_0[0x40]; public:
    _Script_Engine::CurveLinearColor*& get_LinearColorCurve();
    void* get_InterpFunc();
    void* get_TrackName();
    void* get_LinearColorPropertyName();
    _Script_CoreUObject::StructProperty*& get_LinearColorProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
