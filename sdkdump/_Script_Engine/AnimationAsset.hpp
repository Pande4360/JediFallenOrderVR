#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationAsset : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    _Script_Engine::Skeleton*& get_Skeleton();
    void* get_MetaData();
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
