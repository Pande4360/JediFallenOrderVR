#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings {
#pragma pack(push, 1)
struct ST_BD1_BackPanelSettings {
    private: char pad_0[0x2c]; public:
    void* get_MaterialColor_10_DC358CC84FCCC1A8787D888F9DCD38F9();
    float& get_MaterialBrightness_11_708CB6624EDE87B80181608222639384();
    float& get_MaterialAnimSpeed_12_32EA73454003A6D566A514993EDE3B96();
    void* get_LightColor_13_153B9EC444EFBE9837E8AD84510F4ADD();
    float& get_LightIntensity_14_EB76209B48DF16BF7867B194A2685DDF();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
