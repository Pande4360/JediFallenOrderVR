#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsSlaveSyncInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSlaveSyncInstance : public _Script_RsGameTechRT::RsSlaveSyncInstance {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
