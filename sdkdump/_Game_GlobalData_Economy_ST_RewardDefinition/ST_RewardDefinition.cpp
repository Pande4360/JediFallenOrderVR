#include "..\FUObjectArray.hpp"
#include "ST_RewardDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_XP_Min_5_DB31609348712144BAFBAAB1D5187CE5() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_Credits_Max_10_0B0E217B443E110466BB858C68AD9107() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_XP_Max_7_EAD614134B6A52CC5B3AD29643B7795C() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_Credits_Min_8_3F1E42E242A3684227805290A4076F6D() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_ForcePoints_Min_17_DD22A6534FB9A5CFADD341B4A1BDBE02() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_ForcePoints_Max_19_367ACF3B41CB0D62BE4F7D9EA747E874() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_HealthCanisters_21_B7330679428ABCDE024154A28CB40F72() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_ReviveCanisters_24_A8A658D54CDBAAE159CC27AF3CD9A79B() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_Artifact_13_4FF91ED5415EC01B3CE8359949B5A34D() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::get_LooseRewardType_27_F024E4994C122850132F55A888938099() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Game_GlobalData_Economy_ST_RewardDefinition::ST_RewardDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Economy/ST_RewardDefinition.ST_RewardDefinition");
    return result;
}
