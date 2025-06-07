#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Cosmetics_Struct_Cosmetics {
#pragma pack(push, 1)
struct Struct_Cosmetics {
    private: char pad_0[0x158]; public:
    void* get_DisplayName_32_877AFE5745EFBF0E9ECE40ADF8A6AA57();
    void* get_CosmeticType_31_8A3273704C29DB66B0878892D36E0C1F();
    void* get_LightsaberMesh_20_C879021E407ECF6DC66384957029886F();
    void* get_Material0_40_B6C6B71945BA68FB39CDC69CB23D6F06();
    void* get_Material1_39_259E394E404A6E465B8D2A94DECC5BC2();
    float& get_MetalRoughness_49_307520274DEEACC9A7323EAEB354967A();
    void* get_MetalTint_50_87B6E1FC45A1C4B8684A86A712DBA864();
    void* get_SwatchTexture_51_59FEBBEB46CDA3FFE63B39ABB04DA3CE();
    float& get_EmitterBladeOffset_54_0B1225D0404BD47C746B1FBBD1FD10F4();
    void* get_PonchoStyle_57_9696B3CC4F3F59FDD07461B44A35B49F();
    void* get_Material2_60_F2C89DE447FDB32FE68FFC894398F1BA();
    void* get_Material3_63_4B542F1945D52DB8D0B73FB9546270EA();
    void* get_Material4_64_FD001A4C47D744DE8B629AB4944935E7();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
