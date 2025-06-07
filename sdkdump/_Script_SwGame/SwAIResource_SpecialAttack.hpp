#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIResource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIResource_SpecialAttack : public _Script_RsGameTechRT::RsAIResource {
    private: char pad_108[0x1a8]; public:
    int32_t& get_RequiredAttackPoints();
    float& get_Cooldown();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2b0
#pragma pack(pop)
}
