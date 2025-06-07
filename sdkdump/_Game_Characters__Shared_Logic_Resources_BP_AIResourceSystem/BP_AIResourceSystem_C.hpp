#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIResourceSystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters__Shared_Logic_Resources_BP_AIResourceSystem {
#pragma pack(push, 1)
struct BP_AIResourceSystem_C : public _Script_RsGameTechRT::RsAIResourceSystem {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
