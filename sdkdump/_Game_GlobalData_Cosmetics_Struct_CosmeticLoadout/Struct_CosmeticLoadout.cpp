#include "..\FUObjectArray.hpp"
#include "Struct_CosmeticLoadout.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_IsPonchoVisible_3_2966EED242E18483BF3541BC5EF929B0() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_BD1Skin_14_ED9570F344A1A9ACCEB342A5C86D046C() {
    return (void*)((uintptr_t)this + 0x4);
}
void _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::set_IsPonchoVisible_3_2966EED242E18483BF3541BC5EF929B0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_Switch_13_CC3DB2ED429F2463155AC0975C5663EC() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_Emitter_12_812E82C04963CCCB3A17F598A6CFB99C() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_PonchoSkin_17_4B21B6654E7C0C78069D94A7ACF8C184() {
    return (void*)((uintptr_t)this + 0x6);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_Sleeve_21_2E3DE1B9415C7688357651B491EF840C() {
    return (void*)((uintptr_t)this + 0x3);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_MantisSkin_15_5D05E4134808E7BC03B5328D5988864C() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_SaberColor_27_65A2AA6C48A03A83199B41ADD7DF3ECB() {
    return (void*)((uintptr_t)this + 0x7);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_SaberMetal_32_5CA358454A2D8254D8E638B6739A7285() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_CereSaber_35_0323CA9045FDB494C0C46CBA1F766222() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_Current_Outfit_38_F3A4D217490D7FB8462340B520BB207D() {
    return (void*)((uintptr_t)this + 0xa);
}
_Script_CoreUObject::Class* _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Cosmetics/Struct_CosmeticLoadout.Struct_CosmeticLoadout");
    return result;
}
bool _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::get_InquisitorCalActive_40_D3D80A8644D864CE9EDB0380FCABDDF4() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
void _Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout::set_InquisitorCalActive_40_D3D80A8644D864CE9EDB0380FCABDDF4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
