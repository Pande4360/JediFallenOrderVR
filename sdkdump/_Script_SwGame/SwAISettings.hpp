#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAISettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAISettings : public _Script_RsGameTechRT::RsAISettings {
    private: char pad_260[0x10]; public:
    int32_t& get_PlayerFightPoints();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
