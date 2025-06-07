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
struct AssetMapping {
    private: char pad_0[0x10]; public:
    _Script_Engine::AnimationAsset*& get_SourceAsset();
    _Script_Engine::AnimationAsset*& get_TargetAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
