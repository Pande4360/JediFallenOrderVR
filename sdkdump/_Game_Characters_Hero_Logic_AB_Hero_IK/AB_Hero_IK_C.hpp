#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsIKAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_AB_Hero_IK {
#pragma pack(push, 1)
struct AB_Hero_IK_C : public _Script_RsGameTechRT::RsIKAnimInstance {
    private: char pad_400[0x10d0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_TwoBoneIK_2CF3984E4EC4EA25D4965BB4FF60FDD7();
    void* get_AnimGraphNode_ModifyBone_01AA110146B4C69A30DCB2AC5C241381();
    void* get_AnimGraphNode_ModifyBone_C45A9BBB45ADA177AA3D2C99F646C39C();
    void* get_AnimGraphNode_ModifyBone_1DCD1416417136FD970C758377C6E653();
    void* get_AnimGraphNode_TwoBoneIK_5508E195476FA20DE0A568B2FD1F6848();
    void* get_AnimGraphNode_TwoBoneIK_85F509B44525212919583B98AECDFBE6();
    void* get_AnimGraphNode_SubInput_27B2A4F84C06912D450E21AE0A285471();
    void* get_AnimGraphNode_LocalToComponentSpace_5A3FE2E140054B6B4EEC17AC40FC94F6();
    void* get_AnimGraphNode_Root_9E7E52C642DB1BB07A4221AD2F46A5CD();
    void* get_AnimGraphNode_ModifyBone_9B006D3C479E3275587082B5F4EDF953();
    void* get_AnimGraphNode_TwoBoneIK_FE64DBCA47596A0AC416AD92387A2F35();
    void* get_AnimGraphNode_ModifyBone_87D7DA9846884BA9737594A207CA2E09();
    void* get_AnimGraphNode_ComponentToLocalSpace_BEDD33624A9EC62A0D4F769911418643();
    void* get_NAME_l_ankle();
    void* get_NAME_r_ankle();
    void* get_NAME_hip();
    void* get_SpineTestRotation();
    bool get_UseOldHand();
    void set_UseOldHand(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_9B006D3C479E3275587082B5F4EDF953();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_FE64DBCA47596A0AC416AD92387A2F35();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_85F509B44525212919583B98AECDFBE6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_5508E195476FA20DE0A568B2FD1F6848();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_1DCD1416417136FD970C758377C6E653();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_87D7DA9846884BA9737594A207CA2E09();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_C45A9BBB45ADA177AA3D2C99F646C39C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_ModifyBone_01AA110146B4C69A30DCB2AC5C241381();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_IK_AnimGraphNode_TwoBoneIK_2CF3984E4EC4EA25D4965BB4FF60FDD7();
    void ExecuteUbergraph_AB_Hero_IK(int32_t EntryPoint);
}; // Size: 0x14d0
#pragma pack(pop)
}
