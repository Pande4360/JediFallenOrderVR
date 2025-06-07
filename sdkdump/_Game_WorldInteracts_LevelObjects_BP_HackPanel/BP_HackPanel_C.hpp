#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
struct Zone_Interact_C;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Script_SwGame {
struct SwAIBuddyDroidController;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid {
struct AB_BuddyDroid_C;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid {
struct BP_BuddyDroid_C;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Game_WorldInteracts_LevelObjects_BP_HackPanel {
#pragma pack(push, 1)
struct BP_HackPanel_C : public _Game_WorldInteracts_AI_BP_POI::BP_POI_C {
    private: char pad_5a8[0xe8]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ArrowComponent*& get_SecondarySyncLocation();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::SkeletalMeshComponent*& get_HackPanel_rig();
    _Script_Engine::SphereComponent*& get_TutorialMessageTrigger();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_AkAudio::AkComponent*& get_Ak();
    _Script_Engine::ChildActorComponent*& get_Zone_Interact();
    _Script_Engine::SphereComponent*& get_OverlapZone();
    float& get_LightBlinking_PulseLightIntensity_245DF2D14BB1AECA57092983F81762D7();
    void* get_LightBlinking__Direction_245DF2D14BB1AECA57092983F81762D7();
    _Script_Engine::TimelineComponent*& get_LightBlinking();
    void* get_LVL_PanelHacked();
    void* get_AssociatedPanels();
    int32_t& get_lastArrayLength();
    void* get_lastKnownAssociates();
    void* get_HackPanelState();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& get_Interact();
    void* get_PreviousHackState();
    bool get_Powered();
    void set_Powered(bool value);
    bool get_LoopHackingUntilSignaled();
    void set_LoopHackingUntilSignaled(bool value);
    float& get_MaxLightIntensity();
    _Script_SwGame::SwAIBuddyDroidController*& get_REF_BuddyDroid_Controller();
    _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& get_REF_BuddyDroid_AnimBP();
    _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& get_REF_BuddyDroid_BP();
    void* get_LVL_PanelInteracted();
    _Script_AkAudio::AkAudioEvent*& get_HackPanelBeep();
    bool get_HackComplete();
    void set_HackComplete(bool value);
    bool get_WaitForButtonPress();
    void set_WaitForButtonPress(bool value);
    bool get_OnlyOnce();
    void set_OnlyOnce(bool value);
    bool get_OnlyOnceNowDeactivated();
    void set_OnlyOnceNowDeactivated(bool value);
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_TutorialWidget();
    static _Script_CoreUObject::Class* static_class();
    void ShouldLoopHackingUntilSignaled(bool& bLoopHacking);
    void OnAIGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* Manager, void* PreviousState, void* NewState);
    void LVL_SetPowered(bool NewPowered);
    void LVL_SetHackState(void* NewState);
    void UpdateUsability();
    void UserConstructionScript0();
    void LightBlinking__FinishedFunc();
    void LightBlinking__UpdateFunc();
    void LightBlinking__PlaySound__EventFunc();
    void LVL_EnablePanel();
    void ReceiveBeginPlay0();
    void HackPanelInteracted();
    void On_POI_Operated(_Script_RsGameTechRT::RsAIPOI* POI);
    void ToggleLight(bool LightActive);
    void PoweredOff(bool BeginPlay);
    void PoweredOn(bool BeginPlay);
    void BndEvt__OverlapZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ApproachHackPanel(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void LeavingHackPanel(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void OnConversationFinishedEvent_Event_0(_Script_RsGameTechRT::RsConversation* Conversation);
    void OnConversationFinishedEvent_Event_1(_Script_RsGameTechRT::RsConversation* Conversation);
    void BndEvt__TutorialMessageTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__TutorialMessageTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void StartHackPanelAnim();
    void ArrivedAtHackPanel(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void ExecuteUbergraph_BP_HackPanel(int32_t EntryPoint);
    void LVL_PanelInteracted__DelegateSignature();
    void LVL_PanelHacked__DelegateSignature();
}; // Size: 0x690
#pragma pack(pop)
}
