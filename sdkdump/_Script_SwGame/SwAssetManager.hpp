#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AssetManager.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAssetManager : public _Script_Engine::AssetManager {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d8
#pragma pack(pop)
}
