#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSectionParameters {
    private: char pad_0[0x18]; public:
    void* get_StartFrameOffset();
    float& get_TimeScale();
    int32_t& get_HierarchicalBias();
    float& get_StartOffset();
    float& get_PrerollTime();
    float& get_PostrollTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
