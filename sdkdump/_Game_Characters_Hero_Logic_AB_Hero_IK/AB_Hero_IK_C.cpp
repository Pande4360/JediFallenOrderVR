#include "..\FUObjectArray.hpp"
#include "AB_Hero_IK_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsIKAnimInstance.hpp"
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_ModifyBone_C45A9BBB45ADA177AA3D2C99F646C39C() {
    return (void*)((uintptr_t)this + 0x798);
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::set_UseOldHand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x14cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_TwoBoneIK_2CF3984E4EC4EA25D4965BB4FF60FDD7() {
    return (void*)((uintptr_t)this + 0x410);
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_01AA110146B4C69A30DCB2AC5C241381() {
    return;
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_ModifyBone_01AA110146B4C69A30DCB2AC5C241381() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_ModifyBone_1DCD1416417136FD970C758377C6E653() {
    return (void*)((uintptr_t)this + 0x8d0);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_SubInput_27B2A4F84C06912D450E21AE0A285471() {
    return (void*)((uintptr_t)this + 0xeb0);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_TwoBoneIK_5508E195476FA20DE0A568B2FD1F6848() {
    return (void*)((uintptr_t)this + 0xa10);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_TwoBoneIK_85F509B44525212919583B98AECDFBE6() {
    return (void*)((uintptr_t)this + 0xc60);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_LocalToComponentSpace_5A3FE2E140054B6B4EEC17AC40FC94F6() {
    return (void*)((uintptr_t)this + 0xf18);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_Root_9E7E52C642DB1BB07A4221AD2F46A5CD() {
    return (void*)((uintptr_t)this + 0xf58);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_ModifyBone_9B006D3C479E3275587082B5F4EDF953() {
    return (void*)((uintptr_t)this + 0xfa0);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_TwoBoneIK_FE64DBCA47596A0AC416AD92387A2F35() {
    return (void*)((uintptr_t)this + 0x10e0);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_ModifyBone_87D7DA9846884BA9737594A207CA2E09() {
    return (void*)((uintptr_t)this + 0x1330);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_AnimGraphNode_ComponentToLocalSpace_BEDD33624A9EC62A0D4F769911418643() {
    return (void*)((uintptr_t)this + 0x1468);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_NAME_l_ankle() {
    return (void*)((uintptr_t)this + 0x14a8);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_NAME_r_ankle() {
    return (void*)((uintptr_t)this + 0x14b0);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_NAME_hip() {
    return (void*)((uintptr_t)this + 0x14b8);
}
void* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_SpineTestRotation() {
    return (void*)((uintptr_t)this + 0x14c0);
}
bool _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::get_UseOldHand() {
    return (*(uint8_t*)((uintptr_t)this + 0x14cc + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Hero/Logic/AB_Hero_IK.AB_Hero_IK_C");
    return result;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_9B006D3C479E3275587082B5F4EDF953() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_FE64DBCA47596A0AC416AD92387A2F35() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_85F509B44525212919583B98AECDFBE6() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_5508E195476FA20DE0A568B2FD1F6848() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_1DCD1416417136FD970C758377C6E653() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_87D7DA9846884BA9737594A207CA2E09() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_C45A9BBB45ADA177AA3D2C99F646C39C() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::BlueprintUpdateAnimation(float DeltaTimeX) {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::BlueprintBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_2CF3984E4EC4EA25D4965BB4FF60FDD7() {
    return;
}
void _Game_Characters_Hero_Logic_AB_Hero_IK::AB_Hero_IK_C::ExecuteUbergraph_AB_Hero_IK(int32_t EntryPoint) {
    return;
}
