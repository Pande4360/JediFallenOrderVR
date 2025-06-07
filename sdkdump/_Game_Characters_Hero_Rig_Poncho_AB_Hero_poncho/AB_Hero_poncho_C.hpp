#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_Characters_Hero_Logic_AB_Hero {
struct AB_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho {
#pragma pack(push, 1)
struct AB_Hero_poncho_C : public _Script_RsTechRT::rsAnimInstance {
    private: char pad_7a0[0x10b0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_SaveCachedPose_4D8F86B1410EB06CD03C01AFCBC8B13B();
    void* get_AnimGraphNode_UseCachedPose_F4CA1DA14A7D8F1C2A15DCACB2EF3C89();
    void* get_AnimGraphNode_PoseDriver_F41F0618425053CB0D94C9AD999B1C0D();
    void* get_RsLayeredBlendGraphNode_420A7E724043D1F2428AD4A72CF0EA3C();
    void* get_AnimGraphNode_PoseDriver_4DFF6D9D4232B307DF93699F1603C1A4();
    void* get_AnimGraphNode_PoseDriver_C2B0D0324A2B0443D684D593DC750F46();
    void* get_AnimGraphNode_PoseDriver_9B3F3D0C405D0C1A9ECECCAF78B57CD9();
    void* get_AnimGraphNode_SequenceEvaluator_20D22FEF493CD6AB8E3101BAA1D91C7E();
    void* get_RsLayeredBlendGraphNode_7704998E44E3E9C5E084D8B7E7FBFE3D();
    void* get_AnimGraphNode_AnimDynamics_43DB1D874BB1238CBC3BFF93059BBA2C();
    void* get_AnimGraphNode_LocalToComponentSpace_A90D3A024614CDB1BE6351B96D0B68C8();
    void* get_AnimGraphNode_ComponentToLocalSpace_A7A742DB4D9D0ABF928DA795323FE3DD();
    void* get_AnimGraphNode_SequenceEvaluator_92600EF64ACE7138F1A894B62D493226();
    void* get_AnimGraphNode_SequenceEvaluator_6FA00F714043213A1FE7D29CC9F2AF6A();
    void* get_AnimGraphNode_Slot_C799043F49B3B5EF6DA750B1A36C1240();
    void* get_AnimGraphNode_CopyPoseFromMesh_BD86CC8844F67084ED0389B5F033D025();
    void* get_AnimGraphNode_Root_3916223E465ACB0E4B74EC8BA5AB7C17();
    void* get_AnimGraphNode_SequenceEvaluator_496AF84B4DB15451D5F5E09D5314C20C();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_HeroCharBP();
    void* get_HeroStateQueries();
    bool get_isLedge();
    void set_isLedge(bool value);
    bool get_isClimb();
    void set_isClimb(bool value);
    bool get_isAir();
    void set_isAir(bool value);
    bool get_isSteepSlope();
    void set_isSteepSlope(bool value);
    bool get_IsCocooned();
    void set_IsCocooned(bool value);
    void* get_Stairs();
    _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& get_AB_HeroREF();
    bool get_debugBoolean();
    void set_debugBoolean(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Hero_poncho_RsLayeredBlendGraphNode_420A7E724043D1F2428AD4A72CF0EA3C();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_AB_Hero_poncho(int32_t EntryPoint);
}; // Size: 0x1850
#pragma pack(pop)
}
