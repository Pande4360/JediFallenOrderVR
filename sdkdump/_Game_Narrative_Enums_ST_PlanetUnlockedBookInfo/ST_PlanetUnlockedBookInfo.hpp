#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_PlanetUnlockedBookInfo {
#pragma pack(push, 1)
struct ST_PlanetUnlockedBookInfo {
    private: char pad_0[0x20]; public:
    void* get_BookName_2_2A6B76F64202D4918A6D1888E39B4109();
    int32_t& get_BookUnlockedStoryCount_6_AA28CE2C4E427F8D1F9AFE99E721650E();
    int32_t& get_BookTotalStoryCount_8_38F1F1374574DF7EA7798D9A3086F10A();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
