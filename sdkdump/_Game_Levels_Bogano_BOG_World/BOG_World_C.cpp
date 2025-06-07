#include "..\FUObjectArray.hpp"
#include "BOG_World_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_CinematicTrigger\BP_CinematicTrigger_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_RadioCallInObject\BP_RadioCallInObject_C.hpp"
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "..\_Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia\BP_Claustrophobia_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_BP_SavePointVOID\BP_SavePointVOID_C.hpp"
#include "..\_Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire\BP_RewardsChest_StaffAcquire_C.hpp"
#include "..\_Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD\BP_KillPlaneOLD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_Engine\TriggerBox.hpp"
#include "..\_Script_LevelSequence\LevelSequenceActor.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsZiplinePointActor.hpp"
#include "..\_Script_RsGameTechRT\RsZiplinePointComponent.hpp"
#include "..\_Script_SwGame\SwStreamingAreaPlayerStart.hpp"
void* _Game_Levels_Bogano_BOG_World::BOG_World_C::get_FlashlightSuccessTime() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_Levels_Bogano_BOG_World::BOG_World_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampAbandonedWorkshop_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_GEN_200_CalDetachSaber() {
    return;
}
void* _Game_Levels_Bogano_BOG_World::BOG_World_C::get_binogStartingTransform() {
    return (void*)((uintptr_t)this + 0x390);
}
bool _Game_Levels_Bogano_BOG_World::BOG_World_C::get_FlashlightTutorialSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x388 + 0)) & 1 != 0;
}
int32_t& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_hackLastLocStampID() {
    return *(int32_t*)((uintptr_t)this + 0x370);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampFracturedPlains2_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_CordovaHome3_K2Node_ActorBoundEvent_56_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void* _Game_Levels_Bogano_BOG_World::BOG_World_C::get_CurrentStreamingArea() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_OpenVaultObjective_K2Node_ActorBoundEvent_39_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::set_FlashlightTutorialSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BindFlashlightEvents() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_Exterior3_K2Node_ActorBoundEvent_118_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void* _Game_Levels_Bogano_BOG_World::BOG_World_C::get_binogWallrunTransform() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampSubterrainianOasis_K2Node_ActorBoundEvent_97_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
bool _Game_Levels_Bogano_BOG_World::BOG_World_C::get_datBinogGone() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_UpperRockTower5_K2Node_ActorBoundEvent_31_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::HeroHasWallRun(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::set_datBinogGone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_Bogano_BOG_World::BOG_World_C::get_binogGoneTransform() {
    return (void*)((uintptr_t)this + 0x400);
}
bool _Game_Levels_Bogano_BOG_World::BOG_World_C::get_TheVaultVOPlayed() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::set_TheVaultVOPlayed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SwGame::SwStreamingAreaPlayerStart*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_1040_BogWallrunAcquire_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_SwGame::SwStreamingAreaPlayerStart**)((uintptr_t)this + 0x438);
}
_Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_BP_Claustrophobia3_1362_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C**)((uintptr_t)this + 0x440);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_Cine_BridgeFirstSave_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x448);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_Exterior4_K2Node_ActorBoundEvent_152_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Script_SwGame::SwStreamingAreaPlayerStart*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_2000_BogMidVisit_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_SwGame::SwStreamingAreaPlayerStart**)((uintptr_t)this + 0x450);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BP_HackPanel_Empire_2_K2Node_ActorBoundEvent_11_LVL_PanelHacked__DelegateSignature() {
    return;
}
_Script_SwGame::SwStreamingAreaPlayerStart*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_3200_BogTrillaFight_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_SwGame::SwStreamingAreaPlayerStart**)((uintptr_t)this + 0x458);
}
_Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_BOG_030_MeetBD_BP_CinematicTrigger_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C**)((uintptr_t)this + 0x460);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_MantisSavePoint() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_FlashlightMSGCroak_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__z_BOG_390_TrillaArrives_Master_K2Node_ActorBoundEvent_47_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
_Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C**)((uintptr_t)this + 0x468);
}
_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_Save_FirstSavePoint_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C**)((uintptr_t)this + 0x470);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_VaultDoorOpened() {
    return;
}
_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_Save_WallrunCave_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C**)((uintptr_t)this + 0x478);
}
_Script_SwGame::SwStreamingAreaPlayerStart*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_z_BOG_110_HealCal_Master_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_SwGame::SwStreamingAreaPlayerStart**)((uintptr_t)this + 0x480);
}
_Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_BP_RewardsChest_StaffAcquire_2_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C**)((uintptr_t)this + 0x488);
}
_Script_SwGame::SwStreamingAreaPlayerStart*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_3100_BogInsideFinalVault2_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_SwGame::SwStreamingAreaPlayerStart**)((uintptr_t)this + 0x490);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::FlashlightOn() {
    return;
}
_Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_BP_RadioCallInObject_TheVault_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C**)((uintptr_t)this + 0x498);
}
_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_Save_CordovaWorkshop_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C**)((uintptr_t)this + 0x4a0);
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_POI_WallrunExit_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x4a8);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_Binog_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x4b0);
}
_Script_RsGameTechRT::RsZiplinePointActor*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_RsZiplinePointActor1_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_RsGameTechRT::RsZiplinePointActor**)((uintptr_t)this + 0x4b8);
}
_Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_BP_KillPlane5_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C**)((uintptr_t)this + 0x4c0);
}
_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_Save_AncientVault_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C**)((uintptr_t)this + 0x4c8);
}
_Script_Engine::TriggerBox*& _Game_Levels_Bogano_BOG_World::BOG_World_C::get_T_FlashlightMSG_ExecuteUbergraph_BOG_World_RefProperty() {
    return *(_Script_Engine::TriggerBox**)((uintptr_t)this + 0x4d0);
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_UnloadLODsForCines() {
    return;
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG_World::BOG_World_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG_World.BOG_World_C");
    return result;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocationStampFracturedPlains1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::PlanetHopConfirmed() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampAbandonedWorkshop_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_K2Node_ActorBoundEvent_51_LVL_CinematicTriggerCompleted__DelegateSignature(bool UsedSkip) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampGreatDivide_K2Node_ActorBoundEvent_20_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampAncientVault_K2Node_ActorBoundEvent_28_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampGreatDivide2_K2Node_ActorBoundEvent_27_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampFracturedPlains4_K2Node_ActorBoundEvent_53_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_WallrunLODs_K2Node_ActorBoundEvent_67_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_Exterior6_K2Node_ActorBoundEvent_79_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_BogWallrunAcquireSave() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_LoadVault_K2Node_ActorBoundEvent_24_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_Exterior_K2Node_ActorBoundEvent_42_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_Exterior5_K2Node_ActorBoundEvent_103_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_Exterior2_K2Node_ActorBoundEvent_135_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Unload_VaultLODs_K2Node_ActorBoundEvent_66_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_EnableZeffoCoordinates() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_FlashlightMSG_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_Bog_ExitDarkZone() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::FlashlightOff() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::FlashlightSuccess() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_WallrunCave_K2Node_ActorBoundEvent_33_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampAbandonedWorkshop_0_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampGreatDivide3_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampFracturedPlain6_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_LocStampSubterranianRefuge2_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_LoadVoidVault() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__1026_BogSpiralSave_K2Node_ActorBoundEvent_82_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_BackToReality() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_TrillaDefeated() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_FadeToBlack_K2Node_ActorBoundEvent_76_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_BogGauntlet_K2Node_ActorBoundEvent_22_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_CordovaHome_K2Node_ActorBoundEvent_23_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_ReheatMissionObjectiveVault_K2Node_ActorBoundEvent_38_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_UpperRockTower_K2Node_ActorBoundEvent_25_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::DetatchFromBigZipline(_Script_Engine::Actor* AttachActor, _Script_RsGameTechRT::RsZiplinePointComponent* ZiplinePoint) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_BoglingCity_K2Node_ActorBoundEvent_26_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_BogWorkshopLightsOn() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LandingPad2_K2Node_ActorBoundEvent_35_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_BinogBackInPlace_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_VaultExterior_K2Node_ActorBoundEvent_36_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LowerRockTower3_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LandingPad3_K2Node_ActorBoundEvent_29_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Save_FirstSavePoint_K2Node_ActorBoundEvent_37_LVL_saveDone__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_BoglingCity2_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_CordovaHome2_K2Node_ActorBoundEvent_21_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LowerRockTower4_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Save_CordovaWorkshop_K2Node_ActorBoundEvent_58_LVL_saveInteract__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_CompleteMissionObjective_Vault() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::CineFinished_Bridge() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__WallRunAcquire_LoadAreaNEW_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_StreamOutWallAcquire() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_StreamInWallRunAcquireGym() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_K2Node_ActorBoundEvent_41_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_HeroSecondBladeOn() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_HeroFirstBladeOn() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_BogGauntlet4_K2Node_ActorBoundEvent_69_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_HeroFirstBladeOff() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_HeroSecondBladeOff() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_HeroBladeSheathe() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::UpdateSaveTransform() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_DroidAcquireSave() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LowerRockTower5_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_UpperRockTower2_K2Node_ActorBoundEvent_43_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_StreamInWallRunVoid() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__z_BOG_400_PullSaber_Thru_TrillaTorture_K2Node_ActorBoundEvent_44_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__z_BOG_410_ToFortress_Master_K2Node_ActorBoundEvent_45_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__z_BOG_350_PreludeToVault_Master_1_K2Node_ActorBoundEvent_46_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__z_BOG_010_DroppedOff_Master_K2Node_ActorBoundEvent_48_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__3200_BogTrillaFight_K2Node_ActorBoundEvent_55_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_PostTrillaSaveToPlayerStart() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::SE_UpgradeBlade() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_BogGauntlet3_K2Node_ActorBoundEvent_68_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_K2Node_ActorBoundEvent_52_LVL_CinematicSkipInitiated__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BP_RewardsChest_StaffAcquire_2_K2Node_ActorBoundEvent_40_LVL_PlayCinematic__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__3100_BogInsideFinalVault2_K2Node_ActorBoundEvent_49_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::CIN_410_ToFortressDone() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BP_HackPanel_Bridge_K2Node_ActorBoundEvent_50_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BP_Claustrophobia3_1362_K2Node_ActorBoundEvent_8_LVL_EnteredForward__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_UpperRockTower4_K2Node_ActorBoundEvent_54_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::ReorientSavePointSpawn() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BOG_030_MeetBD_BP_CinematicTrigger_K2Node_ActorBoundEvent_57_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_FakeHackPanel() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_StreamInWallRunNoVoid() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Save_CordovaWorkshop_K2Node_ActorBoundEvent_59_LVL_saveDone__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_DisablePOI_K2Node_ActorBoundEvent_60_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_EnableWallrunPOI_K2Node_ActorBoundEvent_61_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_DisableWallPoi_K2Node_ActorBoundEvent_62_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_DisableWallPoi2_K2Node_ActorBoundEvent_63_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BP_RewardsChest_StaffAcquire_2_K2Node_ActorBoundEvent_2_LVL_SkinUnlocked__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_TurnOffBinog() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::StartCeilingSpinning() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LandingPad4_K2Node_ActorBoundEvent_64_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_VaultLODs_K2Node_ActorBoundEvent_65_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_FirstSidePath_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_OneWayDoorSave3_K2Node_ActorBoundEvent_19_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_LowerRockTower6_K2Node_ActorBoundEvent_70_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_SpiralPool_K2Node_ActorBoundEvent_71_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_SpiralPool2_K2Node_ActorBoundEvent_72_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_TerribleMiddleHell3_K2Node_ActorBoundEvent_32_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_CordovaHome2_K2Node_ActorBoundEvent_34_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_RestoreVaultLODs() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_BinogLookingIn_K2Node_ActorBoundEvent_73_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_BinogLook() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__BP_RadioCallInObject_TheVault_K2Node_ActorBoundEvent_74_LVL_VO_Playing__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__WallRunAcquireUNSTREAM_LoadAreaNEW_K2Node_ActorBoundEvent_75_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Zone_LoadVault2_K2Node_ActorBoundEvent_76_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__T_FadeToBlack_K2Node_ActorBoundEvent_77_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::AttachToBigZipline(_Script_Engine::Actor* AttachActor, _Script_RsGameTechRT::RsZiplinePointComponent* ZiplinePoint) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::InitializeZiplineLogic() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_OneWayDoorSave2_K2Node_ActorBoundEvent_80_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_PostZeffoUnlockSave() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::BndEvt__Load_TripleCroak_K2Node_ActorBoundEvent_81_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::RE_BogWorkshopLightsOff() {
    return;
}
void _Game_Levels_Bogano_BOG_World::BOG_World_C::ExecuteUbergraph_BOG_World(int32_t EntryPoint) {
    return;
}
