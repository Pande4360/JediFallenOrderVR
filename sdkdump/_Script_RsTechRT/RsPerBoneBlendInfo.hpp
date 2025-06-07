#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsTechRT {
struct RsBoneMask;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsPerBoneBlendInfo {
    private: char pad_0[0x20]; public:
    float& get_BaseBlendTime();
    _Script_RsTechRT::RsBoneMask*& get_PerBoneBlendTimeMultipliers();
    void* get_BlendOption();
    _Script_Engine::CurveFloat*& get_BlendCustomCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
