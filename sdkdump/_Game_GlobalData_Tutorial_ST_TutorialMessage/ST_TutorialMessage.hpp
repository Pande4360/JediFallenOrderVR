#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Tutorial_ST_TutorialMessage {
#pragma pack(push, 1)
struct ST_TutorialMessage {
    private: char pad_0[0x40]; public:
    void* get_Verb_3_F6E6DBDB4B2D3BEA3253E19AB9E7FBBD();
    void* get_Input_7_0E3A0BE1453DFC82F222A698486E5349();
    void* get_Text_8_5A8340564E35BFB929ED1B934F12C36D();
    void* get_VerbAnimation_11_7CA598D44352A2DE4E53C1A6073473C8();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
