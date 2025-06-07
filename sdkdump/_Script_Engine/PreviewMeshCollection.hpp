#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DataAsset.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PreviewMeshCollection : public DataAsset {
    private: char pad_30[0x20]; public:
    _Script_Engine::Skeleton*& get_Skeleton();
    void* get_SkeletalMeshes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
