#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings {
#pragma pack(push, 1)
struct ST_BD1_FlashlightSettings {
    private: char pad_0[0x3c]; public:
    float& get_Intensity_2_195437174BD83E65BFBFD3A6E6EE5C85();
    void* get_LightColor_7_F3A25798465C08C697B4119F3CF13109();
    float& get_AttenuationRadius_10_7C69884C4DF3A164EC03C7B103391211();
    float& get_InnerConeAngle_12_560C4D3F4863BEAE866A17AF2799B54A();
    float& get_OuterConeAngle_14_B82F340E4D6C750C0B163B9AA14DD561();
    float& get_TruncationDistance_16_CDB5A65E4F3B07FAD46A0D999B7C5714();
    float& get_TransitionLength_19_445AA2E0405F47DAF49EA7B76A468B31();
    float& get_SourceRadius_21_DE226E8B4AB8F7860C2829B4E3692FE9();
    float& get_SoftSourceRadius_23_653DD730473769C799299E9F3B207649();
    bool get_CastShadows_26_F2E8DE684965C70B5374C88D6EF05637();
    void set_CastShadows_26_F2E8DE684965C70B5374C88D6EF05637(bool value);
    float& get_VolumetricScatteringIntensity_34_D8AF5B8F4E6C346624BBAB92D110B170();
    float& get_PointLightIntensity_32_A3131E2B461E62C159E58B86F17BA8B4();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}
