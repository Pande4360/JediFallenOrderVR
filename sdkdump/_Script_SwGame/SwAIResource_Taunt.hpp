#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIResource_Taunt : public _Script_RsGameTechRT::RsAIResource_Timer {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
