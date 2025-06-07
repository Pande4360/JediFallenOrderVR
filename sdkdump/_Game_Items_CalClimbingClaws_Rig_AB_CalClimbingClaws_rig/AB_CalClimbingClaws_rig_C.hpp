#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig {
#pragma pack(push, 1)
struct AB_CalClimbingClaws_rig_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x540]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_CopyPoseFromMesh_C15B728149608A147AFEA69C3F7B7B74();
    void* get_RsLayeredBlendGraphNode_29DE8BE146FE9A31195DC6BA381E8C10();
    void* get_AnimGraphNode_Root_FC3EA8AF46701A1AC190DC95D41635E7();
    void* get_AnimGraphNode_Slot_7EEA5C71497B67BEFA4BB58E105221CA();
    void* get_AnimGraphNode_TransitionResult_45E1DD2C413057B810A57C870D3BF473();
    void* get_AnimGraphNode_TransitionResult_0E2C4DEE4926901E29BE229261AC737C();
    void* get_AnimGraphNode_SequencePlayer_7F79191A45A2AB53305DC1AA23D334FF();
    void* get_AnimGraphNode_StateResult_DEC622094A5BFE7663136590F82E0448();
    void* get_AnimGraphNode_StateResult_FE8ABB5D4912347222D031A91465DCB9();
    void* get_AnimGraphNode_StateMachine_56F053E94F9E7EC8F698EBA0257B8429();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_HeroREF();
    bool get_IsClimbingWithClaws();
    void set_IsClimbingWithClaws(bool value);
    static _Script_CoreUObject::Class* static_class();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void BlueprintInitializeAnimation0();
    void ExecuteUbergraph_AB_CalClimbingClaws_rig(int32_t EntryPoint);
}; // Size: 0x8f0
#pragma pack(pop)
}
