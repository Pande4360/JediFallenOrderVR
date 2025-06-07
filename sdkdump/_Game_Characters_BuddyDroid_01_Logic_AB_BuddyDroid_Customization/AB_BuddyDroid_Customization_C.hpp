#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIAnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid_Customization {
#pragma pack(push, 1)
struct AB_BuddyDroid_Customization_C : public _Script_RsGameTechRT::RsAIAnimInstance {
    private: char pad_11f0[0xcd8]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_AEA814CD4D2DA38EA13448A443667C51();
    void* get_AnimGraphNode_TransitionResult_138A77374EEF5F7E455ADCA1AD16B8A8();
    void* get_AnimGraphNode_TransitionResult_E7181D08486BCAAC78DC4B984DAE6A5D();
    void* get_AnimGraphNode_TransitionResult_B15F16C64C2454B530581BAB2401CFA9();
    void* get_AnimGraphNode_TransitionResult_863370C44C7465779E2B2B8AAA56A252();
    void* get_AnimGraphNode_TransitionResult_029B473F466A992F0B6C2BA036DE4110();
    void* get_AnimGraphNode_TransitionResult_D8CC4C234C138788DC7CBDAC4BC89EF5();
    void* get_AnimGraphNode_TransitionResult_F1608BF943698DC653B91D8DB5C7B9E4();
    void* get_AnimGraphNode_TransitionResult_8F1F3E524D0C0B8545F59698D9FA2BAA();
    void* get_AnimGraphNode_TransitionResult_5CE213FF4C96E6727B40D18ECE3879B0();
    void* get_AnimGraphNode_TransitionResult_FF145CFA43D579B11BC259893FA87DCB();
    void* get_AnimGraphNode_TransitionResult_2440F5554804B05FB39597BE820DF58A();
    void* get_AnimGraphNode_SequencePlayer_73B3B9B74A4B5FE7B95B60AEA258C0DA();
    void* get_AnimGraphNode_StateResult_EAB6438C4D6365971238BBB2A57BFF89();
    void* get_AnimGraphNode_SequencePlayer_1273BCFD4FC698CC7F1D75A6C9F7FEBE();
    void* get_AnimGraphNode_StateResult_24F86FBB4F4BAFD04DA306B042D62170();
    void* get_AnimGraphNode_SequencePlayer_7A9EA42A46592D4767D6A0873D69F12E();
    void* get_AnimGraphNode_StateResult_E11E435A4F716B67E121BABD0F433FCA();
    void* get_AnimGraphNode_SequencePlayer_666CA848456CCD3F6ED55C9E9A90FD4A();
    void* get_AnimGraphNode_StateResult_233023E5429F2B01BF2E8AB3AC8C6A2B();
    void* get_AnimGraphNode_SequencePlayer_95FDBB4940397B0835621BB7F8D6D058();
    void* get_AnimGraphNode_StateResult_296CEB8B4C5E8674BFAA5C94EA6EEA6B();
    void* get_AnimGraphNode_SequencePlayer_D8A4A7004CD6F883A68F45901E125312();
    void* get_AnimGraphNode_StateResult_7B1A7AA84C7505A2E697359720E1C262();
    void* get_AnimGraphNode_RandomPlayer_C7A8431840D80BCF420C23893236C0BC();
    void* get_AnimGraphNode_StateResult_1A0129CB4783C8513CD8BCB72A2FC8FB();
    void* get_AnimGraphNode_RandomPlayer_3DBBF62043228E53D0B1AC8AC77F1524();
    void* get_AnimGraphNode_StateResult_BCE9916D4F1D51C4FE8AD19BD135B4FC();
    void* get_AnimGraphNode_RandomPlayer_2F9BBABE471E308345C42AA9DE9A5DA8();
    void* get_AnimGraphNode_StateResult_64A641AB4C2D2FCFC27BC99B52DCAAF5();
    void* get_AnimGraphNode_StateMachine_A2417BC440B22763390E98A4D4B0EDA1();
    void* get_CurrentAttachPoint();
    float& get_Cooldown();
    void* get_AvailableAttachPoints();
    void* get_PreviousAttachPoint();
    float& get_MinCooldown();
    float& get_MaxCooldown();
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_863370C44C7465779E2B2B8AAA56A252();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_029B473F466A992F0B6C2BA036DE4110();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_D8CC4C234C138788DC7CBDAC4BC89EF5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_F1608BF943698DC653B91D8DB5C7B9E4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_8F1F3E524D0C0B8545F59698D9FA2BAA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_B15F16C64C2454B530581BAB2401CFA9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_5CE213FF4C96E6727B40D18ECE3879B0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_FF145CFA43D579B11BC259893FA87DCB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_2440F5554804B05FB39597BE820DF58A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_E7181D08486BCAAC78DC4B984DAE6A5D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BuddyDroid_Customization_AnimGraphNode_TransitionResult_138A77374EEF5F7E455ADCA1AD16B8A8();
    void ClaustrophobiaUpdateFacing(void* ClausAttachPoint);
    void ClaustrophobiaEnd();
    void ClaustrophobiaStart(void* ClausAttachPoint);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_AB_BuddyDroid_Customization(int32_t EntryPoint);
}; // Size: 0x1ec8
#pragma pack(pop)
}
