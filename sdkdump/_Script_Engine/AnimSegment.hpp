#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimSegment {
    private: char pad_0[0x20]; public:
    _Script_Engine::AnimationAsset*& get_AnimReference();
    float& get_StartPos();
    float& get_AnimStartTime();
    float& get_AnimEndTime();
    float& get_AnimPlayRate();
    int32_t& get_LoopingCount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
