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
struct AnimParentNodeAssetOverride {
    private: char pad_0[0x18]; public:
    _Script_Engine::AnimationAsset*& get_NewAsset();
    void* get_ParentNodeGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
