#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Bogling_Logic_AB_Bogling {
#pragma pack(push, 1)
struct AB_Bogling_C : public _Script_RsGameTechRT::RsAIAnimInstance {
    private: char pad_11f0[0xee0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_51D77BFC47EB7F7EFB7BBEAE64950145();
    void* get_AnimGraphNode_TransitionResult_0812596944F01F323A7433B80792560B();
    void* get_AnimGraphNode_TransitionResult_BD4D2DF34FE0515D6BA9A98C0734B5B6();
    void* get_AnimGraphNode_TransitionResult_48E0971047270C9FCC0EB0AEDC567F1E();
    void* get_AnimGraphNode_TransitionResult_014A9FCB4712360EDAEC79AB80F64EC5();
    void* get_AnimGraphNode_TransitionResult_FE901DEE4CCCEA1F3A223D99CA14F2F1();
    void* get_AnimGraphNode_RandomPlayer_A91EAD0545A32C15B54DCA9642896B0C();
    void* get_AnimGraphNode_StateResult_AFB800804E5E66D3D67D2EAF32957AF4();
    void* get_AnimGraphNode_SequencePlayer_4C8A0D484037CBB985A1D98E13724D63();
    void* get_AnimGraphNode_StateResult_91DC2BB7480AF7AE4F07C3A535B689D4();
    void* get_AnimGraphNode_SequencePlayer_0E755211416A21C22B34AA869BD8D591();
    void* get_AnimGraphNode_StateResult_B611E597450F022895A29A8E7BA113AA();
    void* get_AnimGraphNode_StateMachine_A4F831BB4FC8C9B442E6FA87D66FC4A1();
    void* get_AnimGraphNode_BlendListByBool_FDCB6C6045F96A65342181A6EAC0B40A();
    void* get_AnimGraphNode_TransitionResult_9B6DE56D46115F80C665F88CEE0385FB();
    void* get_AnimGraphNode_TransitionResult_F67E7C274E66375908D65FA5148AF9BE();
    void* get_AnimGraphNode_TransitionResult_3AF2A4F7446421D39BABF691586CDF92();
    void* get_AnimGraphNode_TransitionResult_95408D004682CBC16F5E0AAEAFF853A8();
    void* get_AnimGraphNode_SequencePlayer_A73152544EEDC6F88EE8FD92B646897E();
    void* get_AnimGraphNode_StateResult_B98656144D6E7D6865467E941543D8F2();
    void* get_AnimGraphNode_RandomPlayer_D3212F5940AD92CA3D3101B9136DCD66();
    void* get_AnimGraphNode_StateResult_926C50D04D0A749B042A2EAE1B687F99();
    void* get_AnimGraphNode_SequencePlayer_22B411F74EF4DA6FD58E55B5DBB7DDD5();
    void* get_AnimGraphNode_StateResult_0AD0D31843BFC5170F3F8C9A1BCAFAE0();
    void* get_AnimGraphNode_SequencePlayer_6116B8F54E4037172F1E93AEE6F0290B();
    void* get_AnimGraphNode_StateResult_049EB9EF420D826C5B26BC880A9386A0();
    void* get_AnimGraphNode_StateMachine_FA89C5AD4268D2F80105CA9FD8386EEE();
    void* get_AnimGraphNode_SaveCachedPose_4775541E4F711F48DE24008FB2F4F69F();
    void* get_AnimGraphNode_UseCachedPose_8448F2374E45820EBA8A1D9AFD679BEA();
    void* get_AnimGraphNode_UseCachedPose_A536DA51413A1790311F148A634B34CA();
    void* get_AnimGraphNode_TwoWayBlend_7F91844144BAF4620F21938CD9681E87();
    void* get_AnimGraphNode_Slot_58B28AF34D28157299A86BA9682C1249();
    bool get_InBoglingHole();
    void set_InBoglingHole(bool value);
    bool get_IsUp();
    void set_IsUp(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_014A9FCB4712360EDAEC79AB80F64EC5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_F67E7C274E66375908D65FA5148AF9BE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_3AF2A4F7446421D39BABF691586CDF92();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_48E0971047270C9FCC0EB0AEDC567F1E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_BD4D2DF34FE0515D6BA9A98C0734B5B6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bogling_AnimGraphNode_TransitionResult_0812596944F01F323A7433B80792560B();
    void ExecuteUbergraph_AB_Bogling(int32_t EntryPoint);
}; // Size: 0x20d0
#pragma pack(pop)
}
