#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Credits_ST_UI_Credits {
#pragma pack(push, 1)
struct ST_UI_Credits {
    private: char pad_0[0x48]; public:
    void* get_CreditsFormat_14_2C5E9E1B4DC75E5758918F8F89E121E9();
    void* get_CreditsTitle_5_733B276248A174D0D27B7A93E314DB62();
    void* get_CreditsName_9_78288F464A5849D22EA78394426D6C91();
    void* get_SubstituteTitle_15_4A02F1204AF14ADCBA962783FBFA2D5E();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
