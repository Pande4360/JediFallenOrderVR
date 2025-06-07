#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
namespace _Game_Characters__Shared_Logic_BP_BaseAI {
struct BP_BaseAI_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BoganoFodder_Logic_AB_BoganoFodder1 {
#pragma pack(push, 1)
struct AB_BoganoFodder1_C : public _Script_RsGameTechRT::RsAIAnimInstance {
    private: char pad_11f0[0xaff8]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_673B4D8C4F9AD58FEF2132BF85AC2EDB();
    void* get_AnimGraphNode_BlendListByBool_F805AF41406CE15FE7C4478851C2CE38();
    void* get_AnimGraphNode_SequencePlayer_C09D64D64387755FCF55C7AA647FBA09();
    void* get_RsAnimMatcherGraphNode_17C3E6FF4B98AA01282E2B9AB0238F84();
    void* get_AnimGraphNode_StateResult_5B4057A14B9DBCB8530E229A38E06542();
    void* get_AnimGraphNode_StateMachine_60773A9E49A2FB2B347B52939401AA17();
    void* get_AnimGraphNode_Slot_24D0301C48DFC5E845F0A6975FF1F002();
    void* get_AnimGraphNode_Slot_FD834CB34B472F59682D99AFFCD70CE0();
    void* get_AnimGraphNode_SaveCachedPose_5CED395C4F0FB47584C8B388402792D1();
    void* get_AnimGraphNode_UseCachedPose_3BCA78A34B4ACCB3DD6377B372AB5610();
    void* get_AnimGraphNode_UseCachedPose_6320D439469D92A1BD913D80F12EB5F6();
    void* get_AnimGraphNode_LayeredBoneBlend_8D614605436785F193633AB7E56E1A50();
    void* get_AnimGraphNode_Slot_5FDAF98F4201251DFCD9509FF8369A62();
    void* get_AnimGraphNode_UseCachedPose_83C7CCCA44509457936000B63325EC85();
    void* get_AnimGraphNode_UseCachedPose_7221889F4B8F9E3965F6E59B48922D95();
    void* get_RsLayeredBlendGraphNode_0B00166E4E8896498C0F7FB9557A115F();
    void* get_AnimGraphNode_SaveCachedPose_1B1D73FB4602B4914C5EE2BD17522BAD();
    void* get_AnimGraphNode_RotationOffsetBlendSpace_57C8565F4188F0F3AF9F349CADF431A3();
    void* get_AnimGraphNode_Slot_DADB7F4C48927FF7B3DBAEB6DAB60629();
    void* get_AnimGraphNode_TwoWayBlend_DB22C05A4ACB9443F50FA7BF5BF5111C();
    void* get_AnimGraphNode_SaveCachedPose_EC00A8A641F78A53058BC6B4CF893C9A();
    void* get_AnimGraphNode_UseCachedPose_FAE287BB4469E4D309B4A29356C13A5F();
    void* get_AnimGraphNode_UseCachedPose_F687A6FC4A50D86DA3B588A89604E14A();
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_BP_BaseAI_Ref();
    void* get_CurrRole();
    bool get_IsSprinting();
    void set_IsSprinting(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoganoFodder1_RsLayeredBlendGraphNode_0B00166E4E8896498C0F7FB9557A115F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BoganoFodder1_RsAnimMatcherGraphNode_17C3E6FF4B98AA01282E2B9AB0238F84();
    void BlueprintInitializeAnimation();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AB_BoganoFodder1(int32_t EntryPoint);
}; // Size: 0xc1e8
#pragma pack(pop)
}
