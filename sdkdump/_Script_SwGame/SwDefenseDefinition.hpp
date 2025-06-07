#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsDefenseDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwDefenseDefinition : public _Script_RsGameTechRT::RsDefenseDefinition {
    private: char pad_30[0x50]; public:
    void* get_DefenseDataContainer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
