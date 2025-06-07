#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsBoneMask : public _Script_Engine::DataAsset {
    private: char pad_30[0x78]; public:
    _Script_Engine::Skeleton*& get_Skeleton();
    void* get_BoneValues();
    void* get_CachedBoneValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
