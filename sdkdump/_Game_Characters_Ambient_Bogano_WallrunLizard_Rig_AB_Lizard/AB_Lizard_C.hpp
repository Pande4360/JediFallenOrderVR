#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsGameAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Ambient_Bogano_WallrunLizard_Rig_AB_Lizard {
#pragma pack(push, 1)
struct AB_Lizard_C : public _Script_RsGameTechRT::RsGameAnimInstance {
    private: char pad_1110[0x3a8]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_F0DF854B41ED450AA3CBF0A52917DA67();
    void* get_AnimGraphNode_TransitionResult_25886A6540857371A7C0F9BCFA63D463();
    void* get_AnimGraphNode_TransitionResult_171DB632462846579D6286BDE384CA31();
    void* get_AnimGraphNode_SequencePlayer_1FFD45A0453E4F2BE9752B80AC39B90C();
    void* get_AnimGraphNode_StateResult_7DAAA6964930A6C82D2B779DCA2DEA58();
    void* get_AnimGraphNode_SequencePlayer_A247BDBE43045D78EB91F18D99309E8D();
    void* get_AnimGraphNode_StateResult_25D5C8BC44138AE711FB3D83E30B9B66();
    void* get_AnimGraphNode_StateMachine_02B89ABF44BC7C418AC7AABCCE2A153C();
    void* get_animDirection();
    float& get_Playrate();
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Lizard_AnimGraphNode_TransitionResult_25886A6540857371A7C0F9BCFA63D463();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Lizard_AnimGraphNode_TransitionResult_171DB632462846579D6286BDE384CA31();
    void BlueprintBeginPlay();
    void RerollRandoms();
    void ExecuteUbergraph_AB_Lizard(int32_t EntryPoint);
}; // Size: 0x14b8
#pragma pack(pop)
}
