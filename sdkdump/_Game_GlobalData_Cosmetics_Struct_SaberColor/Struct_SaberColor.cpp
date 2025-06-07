#include "..\FUObjectArray.hpp"
#include "Struct_SaberColor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_GlobalData_Cosmetics_Struct_SaberColor::Struct_SaberColor::get_RTPC_LightsaberColor_Value_10_061B226E4428FD7AFD4C12812643E0C9() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Game_GlobalData_Cosmetics_Struct_SaberColor::Struct_SaberColor::get_ColorDisplayName_13_B83DB6FC48B7A460ECD243953C519FB4() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_GlobalData_Cosmetics_Struct_SaberColor::Struct_SaberColor::get_BladeColor_4_DDCC7153470671D7EC57A192C0609CB6() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Game_GlobalData_Cosmetics_Struct_SaberColor::Struct_SaberColor::get_BladeGlowColor_5_2493774D4831F0359A8EC58FBF1FF842() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Game_GlobalData_Cosmetics_Struct_SaberColor::Struct_SaberColor::get_SwatchTexture_16_78DD095F4CA6F1A6329C669F56C001E6() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Game_GlobalData_Cosmetics_Struct_SaberColor::Struct_SaberColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Cosmetics/Struct_SaberColor.Struct_SaberColor");
    return result;
}
