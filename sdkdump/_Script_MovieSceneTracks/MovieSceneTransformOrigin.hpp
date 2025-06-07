#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneTransformOrigin : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Transform BP_GetTransformOrigin();
}; // Size: 0x28
#pragma pack(pop)
}
