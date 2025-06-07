#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Kashyyyk_Empire_Refinery_Breakable_KAS_Push_Bridge_KAS_Push_Bridge_Anim_BP {
#pragma pack(push, 1)
struct KAS_Push_Bridge_Anim_BP_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x6c8]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_TransitionResult_E2F70B8F442895DAAA5CFD971A539639();
    void* get_AnimGraphNode_TransitionResult_42C10D1D4518FE0228D4289DCAAEA564();
    void* get_AnimGraphNode_TransitionResult_6D833E0B43CBEB18E0F8CA8ED5828CE9();
    void* get_AnimGraphNode_SequenceEvaluator_07570A35423C48C2CBED4EB7D745785F();
    void* get_AnimGraphNode_StateResult_DB8B1F2D42C21505A6BEC1AF70435D8C();
    void* get_AnimGraphNode_SequencePlayer_A1D149F14CA3BC25815A878E5D65D8D6();
    void* get_AnimGraphNode_StateResult_C5836A46400891C85106629C39F7C3FF();
    void* get_AnimGraphNode_SequencePlayer_873E972E49345A3B274EDAA6B5920411();
    void* get_AnimGraphNode_StateResult_34EE8E3B4A6E5F463D72FA90F5956ED3();
    void* get_AnimGraphNode_SequenceEvaluator_1A71E4504E526489A698F9AEF19DDAA6();
    void* get_AnimGraphNode_StateResult_0B6BEBB44BF700A276175F87E6CAE190();
    void* get_AnimGraphNode_StateMachine_520D73184839A7344358E7A858CBA928();
    void* get_AnimGraphNode_Root_D4C95A634FA75369E893CC93F577FC0D();
    void* get_AnimGraphNode_SequenceEvaluator_C79A8803442A40C493BF7B8BA79A9C00();
    void* get_AnimGraphNode_LayeredBoneBlend_988B030147AD092A7A3C0FBA99D86EE9();
    bool get_Pushed_();
    void set_Pushed_(bool value);
    float& get_OpenAmount();
    float& get_StartPosition();
    bool get_Initialized();
    void set_Initialized(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_KAS_Push_Bridge_Anim_BP_AnimGraphNode_TransitionResult_6D833E0B43CBEB18E0F8CA8ED5828CE9();
    void ExecuteUbergraph_KAS_Push_Bridge_Anim_BP(int32_t EntryPoint);
}; // Size: 0xa78
#pragma pack(pop)
}
