#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
namespace _Game_WorldInteracts_AI_BP_POI {
struct BP_POI_C;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_SwGame {
struct SwStreamingAreaPlayerStart;
}
namespace _Game_WorldInteracts_EventZones_BP_SavePointVOID {
struct BP_SavePointVOID_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia {
struct BP_Claustrophobia_C;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Game_Narrative_Interactables_BP_CinematicTrigger {
struct BP_CinematicTrigger_C;
}
namespace _Script_Engine {
struct TriggerBox;
}
namespace _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire {
struct BP_RewardsChest_StaffAcquire_C;
}
namespace _Game_Narrative_Interactables_BP_RadioCallInObject {
struct BP_RadioCallInObject_C;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_RsGameTechRT {
struct RsZiplinePointActor;
}
namespace _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD {
struct BP_KillPlaneOLD_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsZiplinePointComponent;
}
namespace _Game_Levels_Bogano_BOG_World {
#pragma pack(push, 1)
struct BOG_World_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x178]; public:
    void* get_UberGraphFrame();
    int32_t& get_hackLastLocStampID();
    void* get_CurrentStreamingArea();
    void* get_FlashlightSuccessTime();
    bool get_FlashlightTutorialSuccess();
    void set_FlashlightTutorialSuccess(bool value);
    void* get_binogStartingTransform();
    void* get_binogWallrunTransform();
    bool get_datBinogGone();
    void set_datBinogGone(bool value);
    void* get_binogGoneTransform();
    bool get_TheVaultVOPlayed();
    void set_TheVaultVOPlayed(bool value);
    _Script_SwGame::SwStreamingAreaPlayerStart*& get_1040_BogWallrunAcquire_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia::BP_Claustrophobia_C*& get_BP_Claustrophobia3_1362_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_Cine_BridgeFirstSave_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_SwGame::SwStreamingAreaPlayerStart*& get_2000_BogMidVisit_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_SwGame::SwStreamingAreaPlayerStart*& get_3200_BogTrillaFight_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& get_BOG_030_MeetBD_BP_CinematicTrigger_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& get_GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& get_Save_FirstSavePoint_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& get_Save_WallrunCave_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_SwGame::SwStreamingAreaPlayerStart*& get_z_BOG_110_HealCal_Master_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C*& get_BP_RewardsChest_StaffAcquire_2_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_SwGame::SwStreamingAreaPlayerStart*& get_3100_BogInsideFinalVault2_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C*& get_BP_RadioCallInObject_TheVault_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& get_Save_CordovaWorkshop_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_POI_WallrunExit_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Binog_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_RsGameTechRT::RsZiplinePointActor*& get_RsZiplinePointActor1_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C*& get_BP_KillPlane5_ExecuteUbergraph_BOG_World_RefProperty();
    _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& get_Save_AncientVault_ExecuteUbergraph_BOG_World_RefProperty();
    _Script_Engine::TriggerBox*& get_T_FlashlightMSG_ExecuteUbergraph_BOG_World_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__T_LocationStampFracturedPlains1_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampFracturedPlains2_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampAbandonedWorkshop_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampGreatDivide_K2Node_ActorBoundEvent_20_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampGreatDivide2_K2Node_ActorBoundEvent_27_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampAncientVault_K2Node_ActorBoundEvent_28_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampFracturedPlains4_K2Node_ActorBoundEvent_53_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampSubterrainianOasis_K2Node_ActorBoundEvent_97_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay();
    void RE_BogWallrunAcquireSave();
    void BndEvt__Zone_LoadVault_K2Node_ActorBoundEvent_24_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Exterior_K2Node_ActorBoundEvent_42_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Exterior5_K2Node_ActorBoundEvent_103_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Exterior3_K2Node_ActorBoundEvent_118_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Exterior2_K2Node_ActorBoundEvent_135_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Exterior4_K2Node_ActorBoundEvent_152_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_EnableZeffoCoordinates();
    void RE_VaultDoorOpened();
    void BndEvt__T_FlashlightMSG_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FlashlightMSGCroak_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_Bog_ExitDarkZone();
    void BindFlashlightEvents();
    void FlashlightOn();
    void FlashlightOff();
    void FlashlightSuccess();
    void PlanetHopConfirmed();
    void BndEvt__BP_HackPanel_Empire_2_K2Node_ActorBoundEvent_11_LVL_PanelHacked__DelegateSignature();
    void RE_MantisSavePoint();
    void BndEvt__T_LocStampAbandonedWorkshop_0_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampAbandonedWorkshop_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampGreatDivide3_K2Node_ActorBoundEvent_14_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampFracturedPlain6_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_LocStampSubterranianRefuge2_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_LoadVoidVault();
    void RE_BackToReality();
    void RE_TrillaDefeated();
    void BndEvt__Load_BogGauntlet_K2Node_ActorBoundEvent_22_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_CordovaHome_K2Node_ActorBoundEvent_23_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_UpperRockTower_K2Node_ActorBoundEvent_25_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_BoglingCity_K2Node_ActorBoundEvent_26_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_WallrunCave_K2Node_ActorBoundEvent_33_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_LandingPad2_K2Node_ActorBoundEvent_35_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_VaultExterior_K2Node_ActorBoundEvent_36_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_LowerRockTower3_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_LandingPad3_K2Node_ActorBoundEvent_29_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Save_FirstSavePoint_K2Node_ActorBoundEvent_37_LVL_saveDone__DelegateSignature();
    void BndEvt__Load_BoglingCity2_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_CordovaHome2_K2Node_ActorBoundEvent_21_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_LowerRockTower4_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_CompleteMissionObjective_Vault();
    void BndEvt__T_ReheatMissionObjectiveVault_K2Node_ActorBoundEvent_38_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_OpenVaultObjective_K2Node_ActorBoundEvent_39_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void CineFinished_Bridge();
    void BndEvt__WallRunAcquire_LoadAreaNEW_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_StreamOutWallAcquire();
    void RE_StreamInWallRunAcquireGym();
    void BndEvt__GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_K2Node_ActorBoundEvent_41_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip);
    void SE_HeroSecondBladeOn();
    void SE_HeroFirstBladeOn();
    void SE_HeroFirstBladeOff();
    void SE_HeroSecondBladeOff();
    void SE_HeroBladeSheathe();
    void UpdateSaveTransform();
    void HeroHasWallRun(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags);
    void RE_DroidAcquireSave();
    void BndEvt__Load_LowerRockTower5_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_UpperRockTower2_K2Node_ActorBoundEvent_43_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_StreamInWallRunVoid();
    void BndEvt__z_BOG_400_PullSaber_Thru_TrillaTorture_K2Node_ActorBoundEvent_44_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void BndEvt__z_BOG_410_ToFortress_Master_K2Node_ActorBoundEvent_45_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void BndEvt__z_BOG_350_PreludeToVault_Master_1_K2Node_ActorBoundEvent_46_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void BndEvt__z_BOG_390_TrillaArrives_Master_K2Node_ActorBoundEvent_47_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void BndEvt__z_BOG_010_DroppedOff_Master_K2Node_ActorBoundEvent_48_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void BndEvt__3200_BogTrillaFight_K2Node_ActorBoundEvent_55_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void RE_PostTrillaSaveToPlayerStart();
    void BndEvt__GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_K2Node_ActorBoundEvent_51_LVL_CinematicTriggerCompleted__DelegateSignature(bool UsedSkip);
    void SE_UpgradeBlade();
    void BndEvt__GEN_200_DoubleBladeUpgrade_BP_CinematicTrigger_K2Node_ActorBoundEvent_52_LVL_CinematicSkipInitiated__DelegateSignature();
    void BndEvt__BP_RewardsChest_StaffAcquire_2_K2Node_ActorBoundEvent_40_LVL_PlayCinematic__DelegateSignature();
    void BndEvt__3100_BogInsideFinalVault2_K2Node_ActorBoundEvent_49_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void CIN_410_ToFortressDone();
    void BndEvt__BP_HackPanel_Bridge_K2Node_ActorBoundEvent_50_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void BndEvt__BP_Claustrophobia3_1362_K2Node_ActorBoundEvent_8_LVL_EnteredForward__DelegateSignature();
    void BndEvt__Load_UpperRockTower4_K2Node_ActorBoundEvent_54_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_CordovaHome3_K2Node_ActorBoundEvent_56_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ReorientSavePointSpawn();
    void BndEvt__BOG_030_MeetBD_BP_CinematicTrigger_K2Node_ActorBoundEvent_57_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip);
    void RE_FakeHackPanel();
    void RE_StreamInWallRunNoVoid();
    void SE_GEN_200_CalDetachSaber();
    void BndEvt__Save_CordovaWorkshop_K2Node_ActorBoundEvent_58_LVL_saveInteract__DelegateSignature();
    void BndEvt__Save_CordovaWorkshop_K2Node_ActorBoundEvent_59_LVL_saveDone__DelegateSignature();
    void BndEvt__T_DisablePOI_K2Node_ActorBoundEvent_60_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_EnableWallrunPOI_K2Node_ActorBoundEvent_61_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_DisableWallPoi_K2Node_ActorBoundEvent_62_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_DisableWallPoi2_K2Node_ActorBoundEvent_63_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__BP_RewardsChest_StaffAcquire_2_K2Node_ActorBoundEvent_2_LVL_SkinUnlocked__DelegateSignature();
    void RE_TurnOffBinog();
    void StartCeilingSpinning();
    void BndEvt__Load_LandingPad4_K2Node_ActorBoundEvent_64_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_VaultLODs_K2Node_ActorBoundEvent_65_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Unload_VaultLODs_K2Node_ActorBoundEvent_66_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_WallrunLODs_K2Node_ActorBoundEvent_67_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_BogGauntlet3_K2Node_ActorBoundEvent_68_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_BogGauntlet4_K2Node_ActorBoundEvent_69_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_FirstSidePath_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_OneWayDoorSave3_K2Node_ActorBoundEvent_19_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_UpperRockTower5_K2Node_ActorBoundEvent_31_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_LowerRockTower6_K2Node_ActorBoundEvent_70_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_SpiralPool_K2Node_ActorBoundEvent_71_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_SpiralPool2_K2Node_ActorBoundEvent_72_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_TerribleMiddleHell3_K2Node_ActorBoundEvent_32_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Load_CordovaHome2_K2Node_ActorBoundEvent_34_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_UnloadLODsForCines();
    void RE_RestoreVaultLODs();
    void BndEvt__T_BinogBackInPlace_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_BinogLookingIn_K2Node_ActorBoundEvent_73_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_BinogLook();
    void BndEvt__BP_RadioCallInObject_TheVault_K2Node_ActorBoundEvent_74_LVL_VO_Playing__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue);
    void BndEvt__WallRunAcquireUNSTREAM_LoadAreaNEW_K2Node_ActorBoundEvent_75_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_LoadVault2_K2Node_ActorBoundEvent_76_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FadeToBlack_K2Node_ActorBoundEvent_76_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FadeToBlack_K2Node_ActorBoundEvent_77_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Exterior6_K2Node_ActorBoundEvent_79_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void AttachToBigZipline(_Script_Engine::Actor* AttachActor, _Script_RsGameTechRT::RsZiplinePointComponent* ZiplinePoint);
    void DetatchFromBigZipline(_Script_Engine::Actor* AttachActor, _Script_RsGameTechRT::RsZiplinePointComponent* ZiplinePoint);
    void InitializeZiplineLogic();
    void BndEvt__Load_OneWayDoorSave2_K2Node_ActorBoundEvent_80_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_PostZeffoUnlockSave();
    void BndEvt__Load_TripleCroak_K2Node_ActorBoundEvent_81_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__1026_BogSpiralSave_K2Node_ActorBoundEvent_82_RsOnStartAtPlayerStartDelegate__DelegateSignature(void* LoadType);
    void RE_BogWorkshopLightsOn();
    void RE_BogWorkshopLightsOff();
    void ExecuteUbergraph_BOG_World(int32_t EntryPoint);
}; // Size: 0x4e0
#pragma pack(pop)
}
