#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BoganoSnake_Animation_AB_Binog {
#pragma pack(push, 1)
struct AB_Binog_C : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x1460]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_0136A4854F77294740DA0FBA204987CA();
    void* get_AnimGraphNode_TransitionResult_9ADF06F44C0033DACE1E7BA7C61CB1F8();
    void* get_AnimGraphNode_TransitionResult_D42CE0A34ACE298DD2061D9702A0E188();
    void* get_AnimGraphNode_TransitionResult_3B77F3AE402D7986AC3892A0D2815FC6();
    void* get_AnimGraphNode_TransitionResult_CBAB682F49D738D93AA3B79427C4350C();
    void* get_AnimGraphNode_TransitionResult_EC0BEBD94A0DE992F8071EB922EC739E();
    void* get_AnimGraphNode_TransitionResult_37764BF3414168EC4039D48B5935C796();
    void* get_AnimGraphNode_TransitionResult_A8888EB446D492BED96A688E3BC523B2();
    void* get_AnimGraphNode_TransitionResult_ED07ABC84F50FDA9279A1CA5A87C17EF();
    void* get_AnimGraphNode_TransitionResult_FA5260124FA6868D0C2918AE2D1966D0();
    void* get_AnimGraphNode_TransitionResult_65F07F984841F7B764BC4F89D980DEDB();
    void* get_AnimGraphNode_TransitionResult_A00669C84F80AF768C4CFA84F5F9A7B6();
    void* get_AnimGraphNode_TransitionResult_4E33D1E342680FBBC36E7C9F50D50169();
    void* get_AnimGraphNode_TransitionResult_209ED95B4C9A21BAEF25B38AAC59D56C();
    void* get_AnimGraphNode_TransitionResult_E0C04E4C48F152C0481715A67B55F741();
    void* get_AnimGraphNode_TransitionResult_484043A2472BFBFFDF32D983A383DB7E();
    void* get_AnimGraphNode_TransitionResult_AE1D74F648B46575891F0DBBAEB93349();
    void* get_AnimGraphNode_TransitionResult_7C51842841F58AE7949D129BBBE32AC7();
    void* get_AnimGraphNode_TransitionResult_18FCB05F4A735D2EFFC38CA4875A2450();
    void* get_AnimGraphNode_TransitionResult_9E777AB344F98068ED7D049B6CFAD694();
    void* get_AnimGraphNode_TransitionResult_9D51C6A446C9A03357A3F5A912F8D03E();
    void* get_AnimGraphNode_TransitionResult_A4BA7663460A996C23CDDEBED752901C();
    void* get_AnimGraphNode_TransitionResult_34FA900F4D80BF08F979AE85A5FE5E68();
    void* get_AnimGraphNode_SequencePlayer_17D4981F416EDCA12C938D8B9C9D0724();
    void* get_AnimGraphNode_StateResult_9E41DA4C4BF97E5339D875862E070F38();
    void* get_AnimGraphNode_SequencePlayer_32CC24A744D6B8FD9A09FAB58F51DE91();
    void* get_AnimGraphNode_StateResult_A884071344E9FE8DE27F31B77943661A();
    void* get_AnimGraphNode_SequencePlayer_BD6DEF5341DAB58C54642EBBA9BC54C1();
    void* get_AnimGraphNode_StateResult_728AB68B4720B9A7E4257781195CFFF6();
    void* get_AnimGraphNode_SequencePlayer_A2E55CD4481309EE96C5D096649723C9();
    void* get_AnimGraphNode_StateResult_94546C6042B3762FA68AADB97D9788C3();
    void* get_AnimGraphNode_SequencePlayer_992D26B84B5CA9388124C398B0F245F7();
    void* get_AnimGraphNode_StateResult_B0BDB9444217B7FB0B49C2AA8F78CD18();
    void* get_AnimGraphNode_SequencePlayer_ED6E4C064E460C7D321C0F84365BEE34();
    void* get_AnimGraphNode_StateResult_15D1BBEC4E434586031FE9952D1A26C5();
    void* get_AnimGraphNode_SequencePlayer_C4A49AEE42504EEC7F6E6ABB1C871C85();
    void* get_AnimGraphNode_StateResult_29D472C748BBAA999608C1ABAAEFB40B();
    void* get_AnimGraphNode_SequencePlayer_2678D6FB4706FD129C717C9C47DD6916();
    void* get_AnimGraphNode_StateResult_249EC5C941B6A967C8DD3AB5D72F8D4A();
    void* get_AnimGraphNode_SequencePlayer_E6FB46954206A4326BC0478042393237();
    void* get_AnimGraphNode_StateResult_319B29DF4525DA6273A40DB28E21B5AE();
    void* get_AnimGraphNode_SequencePlayer_3B69332E4FD363A6DCFCDDB4ED5B1DD1();
    void* get_AnimGraphNode_StateResult_00D51C45402FDCEFF156ECB4880D2BCE();
    void* get_AnimGraphNode_SequencePlayer_B8CB0CB648F12D582D86248DFF19446C();
    void* get_AnimGraphNode_StateResult_26BFCDDD4CA443EACFFAB1919D97B57A();
    void* get_AnimGraphNode_SequencePlayer_BA56AD624D3F88881188068DA6653A6F();
    void* get_AnimGraphNode_StateResult_FFD404434A9D66DBA09BD6AA8A76DC83();
    void* get_AnimGraphNode_StateMachine_E511386A43632C44832580831CCF9D74();
    void* get_RsLayeredBlendGraphNode_D7B233484779C24DFE184F858E2FA392();
    void* get_AnimGraphNode_SequencePlayer_D0090EC14212BF24CAA64F938C5781DA();
    void* get_SnakeState();
    float& get_MinShiftTime();
    float& get_MaxShiftTime();
    int32_t& get_numSnakeStates();
    void* get_StateChangeTimer();
    void* get_BinogVariationBase();
    float& get_minTwitchTime();
    float& get_maxTwitchTime();
    void* get_TwitchTimer();
    int32_t& get_numBaseTwitches();
    void* get_curlTransitionType();
    void* get_LastSnakeState();
    bool get_PlayerAtWallrun();
    void set_PlayerAtWallrun(bool value);
    bool get_ForcedPose();
    void set_ForcedPose(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_ED07ABC84F50FDA9279A1CA5A87C17EF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_EC0BEBD94A0DE992F8071EB922EC739E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_FA5260124FA6868D0C2918AE2D1966D0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_65F07F984841F7B764BC4F89D980DEDB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_A00669C84F80AF768C4CFA84F5F9A7B6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_4E33D1E342680FBBC36E7C9F50D50169();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_CBAB682F49D738D93AA3B79427C4350C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_209ED95B4C9A21BAEF25B38AAC59D56C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_A8888EB446D492BED96A688E3BC523B2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_484043A2472BFBFFDF32D983A383DB7E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_AE1D74F648B46575891F0DBBAEB93349();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_7C51842841F58AE7949D129BBBE32AC7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_9E777AB344F98068ED7D049B6CFAD694();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_3B77F3AE402D7986AC3892A0D2815FC6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_9D51C6A446C9A03357A3F5A912F8D03E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_A4BA7663460A996C23CDDEBED752901C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_34FA900F4D80BF08F979AE85A5FE5E68();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_D42CE0A34ACE298DD2061D9702A0E188();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_9ADF06F44C0033DACE1E7BA7C61CB1F8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Binog_AnimGraphNode_TransitionResult_37764BF3414168EC4039D48B5935C796();
    void BlueprintBeginPlay0();
    void PickNewPose();
    void RestartStateChangeTimer();
    void PickNewTwitch();
    void AnimNotify_BinogResetTwitch();
    void BinogForceTwitch(void* TWITCH);
    void ClearTimers();
    void ExecuteUbergraph_AB_Binog(int32_t EntryPoint);
}; // Size: 0x1810
#pragma pack(pop)
}
