#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid\AB_BuddyDroid_C.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid\BP_BuddyDroid_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "BP_HackPanel_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroidController.hpp"
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_LVL_PanelInteracted() {
    return (void*)((uintptr_t)this + 0x668);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_Zone_Interact() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x5e0);
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x5a8);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::OnConversationFinishedEvent_Event_1(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_SecondarySyncLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x5b0);
}
_Script_Engine::PointLightComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x5b8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_HackPanel_rig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x5c0);
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_lastKnownAssociates() {
    return (void*)((uintptr_t)this + 0x628);
}
_Script_Engine::SphereComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_TutorialMessageTrigger() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x5c8);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x5d0);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::set_LoopHackingUntilSignaled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64a + 0);
    *(uint8_t*)((uintptr_t)this + 0x64a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_Ak() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x5d8);
}
_Script_Engine::SphereComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_OverlapZone() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x5e8);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::OnAIGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* Manager, void* PreviousState, void* NewState) {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_LightBlinking_PulseLightIntensity_245DF2D14BB1AECA57092983F81762D7() {
    return *(float*)((uintptr_t)this + 0x5f0);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::ArrivedAtHackPanel(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_LightBlinking__Direction_245DF2D14BB1AECA57092983F81762D7() {
    return (void*)((uintptr_t)this + 0x5f4);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_LightBlinking() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x5f8);
}
bool _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_Powered() {
    return (*(uint8_t*)((uintptr_t)this + 0x649 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_LVL_PanelHacked() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_AssociatedPanels() {
    return (void*)((uintptr_t)this + 0x610);
}
int32_t& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_lastArrayLength() {
    return *(int32_t*)((uintptr_t)this + 0x620);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::PoweredOff(bool BeginPlay) {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_HackPanelState() {
    return (void*)((uintptr_t)this + 0x638);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_Interact() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C**)((uintptr_t)this + 0x640);
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_PreviousHackState() {
    return (void*)((uintptr_t)this + 0x648);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::set_Powered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x649 + 0);
    *(uint8_t*)((uintptr_t)this + 0x649 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_LoopHackingUntilSignaled() {
    return (*(uint8_t*)((uintptr_t)this + 0x64a + 0)) & 1 != 0;
}
float& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_MaxLightIntensity() {
    return *(float*)((uintptr_t)this + 0x64c);
}
_Script_SwGame::SwAIBuddyDroidController*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_REF_BuddyDroid_Controller() {
    return *(_Script_SwGame::SwAIBuddyDroidController**)((uintptr_t)this + 0x650);
}
_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_REF_BuddyDroid_AnimBP() {
    return *(_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C**)((uintptr_t)this + 0x658);
}
_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_REF_BuddyDroid_BP() {
    return *(_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C**)((uintptr_t)this + 0x660);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_HackPanelBeep() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x678);
}
bool _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_HackComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x680 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::PoweredOn(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::set_HackComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x680 + 0);
    *(uint8_t*)((uintptr_t)this + 0x680 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_OnlyOnceNowDeactivated() {
    return (*(uint8_t*)((uintptr_t)this + 0x683 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_WaitForButtonPress() {
    return (*(uint8_t*)((uintptr_t)this + 0x681 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::set_WaitForButtonPress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x681 + 0);
    *(uint8_t*)((uintptr_t)this + 0x681 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_OnlyOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x682 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::set_OnlyOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x682 + 0);
    *(uint8_t*)((uintptr_t)this + 0x682 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::set_OnlyOnceNowDeactivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x683 + 0);
    *(uint8_t*)((uintptr_t)this + 0x683 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::get_TutorialWidget() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x688);
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LeavingHackPanel(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_HackPanel.BP_HackPanel_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::ShouldLoopHackingUntilSignaled(bool& bLoopHacking) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LVL_SetPowered(bool NewPowered) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LVL_SetHackState(void* NewState) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::On_POI_Operated(_Script_RsGameTechRT::RsAIPOI* POI) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::UpdateUsability() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LightBlinking__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LightBlinking__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LightBlinking__PlaySound__EventFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::StartHackPanelAnim() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LVL_EnablePanel() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::HackPanelInteracted() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::ToggleLight(bool LightActive) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::BndEvt__OverlapZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::ApproachHackPanel(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::OnConversationFinishedEvent_Event_0(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::BndEvt__TutorialMessageTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::BndEvt__TutorialMessageTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::ExecuteUbergraph_BP_HackPanel(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LVL_PanelInteracted__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C::LVL_PanelHacked__DelegateSignature() {
    return;
}
