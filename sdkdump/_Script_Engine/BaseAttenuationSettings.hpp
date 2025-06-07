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
struct BaseAttenuationSettings {
    private: char pad_0[0xa0]; public:
    void* get_DistanceAlgorithm();
    void* get_AttenuationShape();
    float& get_dBAttenuationAtMax();
    void* get_AttenuationShapeExtents();
    float& get_ConeOffset();
    float& get_FalloffDistance();
    void* get_CustomAttenuationCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
