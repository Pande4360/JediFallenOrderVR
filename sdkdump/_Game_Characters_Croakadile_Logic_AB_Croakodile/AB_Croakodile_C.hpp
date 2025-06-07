#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
namespace _Game_Characters__Shared_Logic_BP_BaseAI {
struct BP_BaseAI_C;
}
namespace _Game_Characters_Croakadile_Logic_BP_Croakodile {
struct BP_Croakodile_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Characters_Croakadile_Logic_AB_Croakodile {
#pragma pack(push, 1)
struct AB_Croakodile_C : public _Script_RsGameTechRT::RsAIAnimInstance {
    private: char pad_11f0[0xb0a8]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_SaveCachedPose_C9F887D84EC8E538F6FBCBB6903F25BF();
    void* get_AnimGraphNode_UseCachedPose_006728AC4A1171EE7B19EE87370483B7();
    void* get_AnimGraphNode_Slot_15183F914B9ED08B92E0689E96D96DB1();
    void* get_AnimGraphNode_Slot_4DE79F504F9CC547CA7F0DBFD06EB214();
    void* get_AnimGraphNode_Slot_BCF3F51A466FBA184F6532920F449875();
    void* get_RsAnimMatcherGraphNode_E3BDC20D4D1B810A005C9FAC6A6AE888();
    void* get_AnimGraphNode_StateResult_38EB4D1F4C6131C17FA1D2BE2AE6C2B7();
    void* get_AnimGraphNode_StateMachine_1634696C4AD69D9FB7C32E8FCCF38F6C();
    void* get_AnimGraphNode_Root_192954914C18CEEAB79F418B2072B749();
    void* get_AnimGraphNode_RotationOffsetBlendSpace_705BB97D43D1F4225C4F159C8E7DF8AD();
    void* get_AnimGraphNode_SaveCachedPose_C8A123CC4BAD9E25F94D36916EF3C22A();
    void* get_AnimGraphNode_UseCachedPose_48AF212A45493A80AE858897476957B9();
    void* get_AnimGraphNode_UseCachedPose_EE5516334C102B66BC40C9AA0C1CC3F9();
    void* get_AnimGraphNode_BlendListByBool_D2CBA98043801059E263CBA9B003666E();
    void* get_AnimGraphNode_BlendListByBool_9AC4F54A411BFAF88C4631AFF5B5AF0D();
    void* get_AnimGraphNode_RotationOffsetBlendSpace_44144A914F3541EE19968F8E2D58FEF4();
    void* get_AnimGraphNode_SaveCachedPose_9456E65A42A35F6EF7CBF2866AC96171();
    void* get_AnimGraphNode_UseCachedPose_22F4A60348B8AB691947118D8A45CEE8();
    void* get_AnimGraphNode_UseCachedPose_82B1B2C44B49D62F03584FB4B8DAD3B5();
    void* get_AnimGraphNode_RotationOffsetBlendSpace_1436723845E8CED39A79778D2DB6C58A();
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_BP_BaseAI_Ref();
    bool get_InAlert();
    void set_InAlert(bool value);
    bool get_InForcePull();
    void set_InForcePull(bool value);
    bool get_HasTongue();
    void set_HasTongue(bool value);
    _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C*& get_BP_Croakodile_Ref();
    float& get_Yaw();
    _Script_Engine::SceneComponent*& get_Tracking_Target();
    bool get_Eye_Tracking_Active();
    void set_Eye_Tracking_Active(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Croakodile_RsAnimMatcherGraphNode_E3BDC20D4D1B810A005C9FAC6A6AE888();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_AB_Croakodile(int32_t EntryPoint);
}; // Size: 0xc298
#pragma pack(pop)
}
