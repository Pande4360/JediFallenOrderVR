#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_MantisTerrarium_Struct_Terrarium {
#pragma pack(push, 1)
struct Struct_Terrarium {
    private: char pad_0[0x98]; public:
    void* get_DisplayName_13_775D1D1F40DD33DFEDAFA3A98DEEE927();
    void* get_Stage1_8_B83E6E14420498E8F4CC05AD88128B81();
    void* get_Stage2_11_3A4EB2F34982CE416AA69CA54AA42C0D();
    void* get_Stage3_12_2F02521B4B05B2135198969E70145673();
    void* get_MaterialOpacityParameterName_17_13C2E79C4E238EE5E17C6D97BEC8BAB2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
