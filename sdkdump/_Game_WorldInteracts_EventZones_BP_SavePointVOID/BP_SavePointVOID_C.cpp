#include "..\FUObjectArray.hpp"
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
#include "..\_Game_UI_UI_SavePointShell\UI_SavePointShell_C.hpp"
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "BP_SavePointVOID_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\DecalComponent.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsDistanceTriggerComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
#include "..\_Script_SwGame\SwStreamingAreaPlayerStart.hpp"
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_FadeUp__Direction_67D122B14B7894BFA5A775AF146A238D() {
    return (void*)((uintptr_t)this + 0x44c);
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3d8);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_SpawnTransform() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x408);
}
_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Comp_SW_Amb_Overlap() {
    return *(_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C**)((uintptr_t)this + 0x3e0);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_AltSpawnTransform() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x3f8);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x3e8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_HandLocation() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x410);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3f0);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::set_lanternOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Trigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x400);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x418);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Post_Save_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x500);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::set_UseAlternateSpawnTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x560 + 0);
    *(uint8_t*)((uintptr_t)this + 0x560 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_BD_1_POI() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x420);
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_BD_1_POI_Actor() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x4b0);
}
_Script_Engine::DecalComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Decal_Save() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x428);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_P_Save_Smoulder() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x430);
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_LVL_TeleportBD1() {
    return (void*)((uintptr_t)this + 0x570);
}
float& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_FadeUp_NewTrack_0_67D122B14B7894BFA5A775AF146A238D() {
    return *(float*)((uintptr_t)this + 0x448);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_P_SavePoint_Glow() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x438);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Sound_Idle_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x568);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::set_IsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x561 + 0);
    *(uint8_t*)((uintptr_t)this + 0x561 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Interact() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x440);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::EndSave() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Pre_Save_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4f8);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Music_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4c8);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_FadeUp() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x450);
}
float& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_1_FadeOff_DDB1590D4CBAB649B48D1F9B8EB78EBD() {
    return *(float*)((uintptr_t)this + 0x458);
}
float& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_1_Pulse_DDB1590D4CBAB649B48D1F9B8EB78EBD() {
    return *(float*)((uintptr_t)this + 0x45c);
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_1__Direction_DDB1590D4CBAB649B48D1F9B8EB78EBD() {
    return (void*)((uintptr_t)this + 0x460);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::set_mantisSave(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x468);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::OnOverlapHeroBegin_Event_1() {
    return;
}
float& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_0_Reveal_51B10C92491D556ABA4AF39F3C212879() {
    return *(float*)((uintptr_t)this + 0x470);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::UpdateBeaconFX(float Brightness, float Height) {
    return;
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_0__Direction_51B10C92491D556ABA4AF39F3C212879() {
    return (void*)((uintptr_t)this + 0x474);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Sound_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4d8);
}
bool _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_DisableLeaveVoidFX() {
    return (*(uint8_t*)((uintptr_t)this + 0x562 + 0)) & 1 != 0;
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x478);
}
bool _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_lanternOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_LVL_saveInteract() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_LVL_saveDone() {
    return (void*)((uintptr_t)this + 0x498);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_MID_Decal() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x4a8);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_InteractZone() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C**)((uintptr_t)this + 0x4b8);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/BP_SavePointVOID.BP_SavePointVOID_C");
    return result;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Music_Start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4c0);
}
bool _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_IsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x561 + 0)) & 1 != 0;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Ceremony_Start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4d0);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Ambient_Begin_Overlap() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4e0);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::OnUnhideSavePoint() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Ceremony_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x508);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::FadeUp__UpdateFunc() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_Ambient_End_Overlap() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x4e8);
}
bool _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_mantisSave() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f0 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_SkyLights() {
    return (void*)((uintptr_t)this + 0x520);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Audio_SaveStone_Complete() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x510);
}
_Game_UI_UI_SavePointShell::UI_SavePointShell_C*& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_SaveUI() {
    return *(_Game_UI_UI_SavePointShell::UI_SavePointShell_C**)((uintptr_t)this + 0x518);
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_DirectionalLights() {
    return (void*)((uintptr_t)this + 0x530);
}
bool _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_SupressAutoReenabling() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::set_SupressAutoReenabling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::set_DisableLeaveVoidFX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x562 + 0);
    *(uint8_t*)((uintptr_t)this + 0x562 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_LVL_LandingPadSave() {
    return (void*)((uintptr_t)this + 0x548);
}
float& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Beacon_FX_Brightness() {
    return *(float*)((uintptr_t)this + 0x558);
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_TeleportBD1__DelegateSignature() {
    return;
}
float& _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_Beacon_FX_Height() {
    return *(float*)((uintptr_t)this + 0x55c);
}
bool _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::get_UseAlternateSpawnTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x560 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::TeleportHero() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::EnterAudioEvents() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ExitAudioEvents() {
    return;
}
_Script_CoreUObject::Transform _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::GetSpawnTransform() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::FadeUp__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::FXlogic() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::OpenSaveUI() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::HideAllLights() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::EnterVoidFX() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::SaveLogic() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::SetLanternOnInstant() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_Enable() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_Disable() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::AnimComplete() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ScriptedAnimNotify(void* NotifyName) {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ScriptedAnimEnd() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor) {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::EnterVoidTear() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LeaveVoidFX() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ReturnFromVoidTear() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::Rest() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::OnHideSavePoint() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::SwitchToAltSpawnTransform() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::EnterSaveAnimationStart() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::InVoidAnimSetup() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::SaveGame_Interaction() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::VoidExitSequence() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::OnStartAtPlayerStart_Event_0(void* LoadType) {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_FadeUp() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_FadeDown() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::OnOverlapHeroEnd_Event_0() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::ExecuteUbergraph_BP_SavePointVOID(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_LandingPadSave__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_saveDone__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C::LVL_saveInteract__DelegateSignature() {
    return;
}
