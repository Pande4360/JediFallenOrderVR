#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Progression_ST_Achievements {
#pragma pack(push, 1)
struct ST_Achievements {
    private: char pad_0[0x4]; public:
    int32_t& get_TotalProgressRequired_4_F7CA77514DEC7559CD3C05A046C8C16F();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
