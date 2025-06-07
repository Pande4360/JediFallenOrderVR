#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Economy_ST_RewardDefinition {
#pragma pack(push, 1)
struct ST_RewardDefinition {
    private: char pad_0[0x30]; public:
    float& get_XP_Min_5_DB31609348712144BAFBAAB1D5187CE5();
    float& get_XP_Max_7_EAD614134B6A52CC5B3AD29643B7795C();
    float& get_Credits_Min_8_3F1E42E242A3684227805290A4076F6D();
    float& get_Credits_Max_10_0B0E217B443E110466BB858C68AD9107();
    float& get_ForcePoints_Min_17_DD22A6534FB9A5CFADD341B4A1BDBE02();
    float& get_ForcePoints_Max_19_367ACF3B41CB0D62BE4F7D9EA747E874();
    float& get_HealthCanisters_21_B7330679428ABCDE024154A28CB40F72();
    float& get_ReviveCanisters_24_A8A658D54CDBAAE159CC27AF3CD9A79B();
    void* get_Artifact_13_4FF91ED5415EC01B3CE8359949B5A34D();
    void* get_LooseRewardType_27_F024E4994C122850132F55A888938099();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
