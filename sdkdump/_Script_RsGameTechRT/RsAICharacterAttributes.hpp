#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICharacterAttributes : public _Script_Engine::TableRowBase {
    private: char pad_8[0x10]; public:
    void* get_Class();
    int32_t& get_FightPoints();
    float& get_Strength();
    float& get_FleeDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
