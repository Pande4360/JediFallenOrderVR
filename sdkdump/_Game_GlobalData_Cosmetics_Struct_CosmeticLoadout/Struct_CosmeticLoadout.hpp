#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout {
#pragma pack(push, 1)
struct Struct_CosmeticLoadout {
    private: char pad_0[0xc]; public:
    bool get_IsPonchoVisible_3_2966EED242E18483BF3541BC5EF929B0();
    void set_IsPonchoVisible_3_2966EED242E18483BF3541BC5EF929B0(bool value);
    void* get_Current_Emitter_12_812E82C04963CCCB3A17F598A6CFB99C();
    void* get_Current_Switch_13_CC3DB2ED429F2463155AC0975C5663EC();
    void* get_Current_Sleeve_21_2E3DE1B9415C7688357651B491EF840C();
    void* get_Current_BD1Skin_14_ED9570F344A1A9ACCEB342A5C86D046C();
    void* get_Current_MantisSkin_15_5D05E4134808E7BC03B5328D5988864C();
    void* get_Current_PonchoSkin_17_4B21B6654E7C0C78069D94A7ACF8C184();
    void* get_Current_SaberColor_27_65A2AA6C48A03A83199B41ADD7DF3ECB();
    void* get_Current_SaberMetal_32_5CA358454A2D8254D8E638B6739A7285();
    void* get_Current_CereSaber_35_0323CA9045FDB494C0C46CBA1F766222();
    void* get_Current_Outfit_38_F3A4D217490D7FB8462340B520BB207D();
    bool get_InquisitorCalActive_40_D3D80A8644D864CE9EDB0380FCABDDF4();
    void set_InquisitorCalActive_40_D3D80A8644D864CE9EDB0380FCABDDF4(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
