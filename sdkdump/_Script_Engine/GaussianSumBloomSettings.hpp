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
struct GaussianSumBloomSettings {
    private: char pad_0[0x8c]; public:
    float& get_Intensity();
    float& get_Threshold();
    float& get_SizeScale();
    float& get_Shape();
    float& get_Stretch();
    float& get_Filter1Size();
    float& get_Filter2Size();
    float& get_Filter3Size();
    float& get_Filter4Size();
    float& get_Filter5Size();
    float& get_Filter6Size();
    void* get_Filter1Tint();
    void* get_Filter2Tint();
    void* get_Filter3Tint();
    void* get_Filter4Tint();
    void* get_Filter5Tint();
    void* get_Filter6Tint();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8c
#pragma pack(pop)
}
