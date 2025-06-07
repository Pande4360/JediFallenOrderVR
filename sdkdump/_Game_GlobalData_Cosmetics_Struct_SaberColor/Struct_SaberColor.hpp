#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Cosmetics_Struct_SaberColor {
#pragma pack(push, 1)
struct Struct_SaberColor {
    private: char pad_0[0x68]; public:
    void* get_ColorDisplayName_13_B83DB6FC48B7A460ECD243953C519FB4();
    void* get_BladeColor_4_DDCC7153470671D7EC57A192C0609CB6();
    void* get_BladeGlowColor_5_2493774D4831F0359A8EC58FBF1FF842();
    float& get_RTPC_LightsaberColor_Value_10_061B226E4428FD7AFD4C12812643E0C9();
    void* get_SwatchTexture_16_78DD095F4CA6F1A6329C669F56C001E6();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
