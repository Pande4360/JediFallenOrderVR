#include "..\FUObjectArray.hpp"
#include "ST_BD1_FlashlightSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_TransitionLength_19_445AA2E0405F47DAF49EA7B76A468B31() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_Intensity_2_195437174BD83E65BFBFD3A6E6EE5C85() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_AttenuationRadius_10_7C69884C4DF3A164EC03C7B103391211() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_LightColor_7_F3A25798465C08C697B4119F3CF13109() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_SourceRadius_21_DE226E8B4AB8F7860C2829B4E3692FE9() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_OuterConeAngle_14_B82F340E4D6C750C0B163B9AA14DD561() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_InnerConeAngle_12_560C4D3F4863BEAE866A17AF2799B54A() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_TruncationDistance_16_CDB5A65E4F3B07FAD46A0D999B7C5714() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_SoftSourceRadius_23_653DD730473769C799299E9F3B207649() {
    return *(float*)((uintptr_t)this + 0x2c);
}
bool _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_CastShadows_26_F2E8DE684965C70B5374C88D6EF05637() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::set_CastShadows_26_F2E8DE684965C70B5374C88D6EF05637(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_VolumetricScatteringIntensity_34_D8AF5B8F4E6C346624BBAB92D110B170() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::get_PointLightIntensity_32_A3131E2B461E62C159E58B86F17BA8B4() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Characters/BuddyDroid_01/Logic/Structs/ST_BD1_FlashlightSettings.ST_BD1_FlashlightSettings");
    return result;
}
