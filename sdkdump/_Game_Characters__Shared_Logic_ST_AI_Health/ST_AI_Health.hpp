#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters__Shared_Logic_ST_AI_Health {
#pragma pack(push, 1)
struct ST_AI_Health {
    private: char pad_0[0x4]; public:
    float& get_EnemyHealth_2_824C272C42C7558019AD7DB023B30EF3();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
