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
struct RootMotionExtractionStep {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimationAsset*& get_AnimAsset();
    float& get_StartPosition();
    float& get_EndPosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
