#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct TriggerSphere;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Game_WorldInteracts_EventZones_Interact_BP_AnimSync {
struct BP_AnimSync_C;
}
namespace _Game_Levels_Bogano_BP_Bogling {
struct BP_Bogling_C;
}
namespace _Script_Engine {
struct CameraActor;
}
namespace _Game_Narrative_Interactables_BP_DroidMemory {
struct BP_DroidMemory_C;
}
namespace _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger {
struct LookAt_Trigger_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Levels_Bogano_BOG600_SubLevels_BOG600_Ent {
#pragma pack(push, 1)
struct BOG600_Ent_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0xd8]; public:
    void* get_UberGraphFrame();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG600_BoglingsBouncing_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG600_BoglingTopofWall_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG600_BoglingsScompLinkDoor_Sequence_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_Scomp2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_Scomp1_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& get_BP_Bogling_2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig3_11_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig_2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C*& get_BP_AnimSync_MapTut2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG_VaultReveal_Vista2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::CameraActor*& get_Bog300_SyncCam_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C*& get_BP_AnimSync_Bog300_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Game_Narrative_Interactables_BP_DroidMemory::BP_DroidMemory_C*& get_DroidMemory_Dathomir_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::TriggerSphere*& get_TriggerSphere_DathomirScanEnable_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig4_2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG600_BoglingTopofWall_Continue_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Game_zDoNotShip_Playgrounds_Markk_Kashyyyk_LookAt_Trigger::LookAt_Trigger_C*& get_LookAt_Trigger_2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG900_LizardScatterFirstWallRun_Sequence_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig2_5_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig_2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig3_8_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG600_PopDownOption_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig5_2_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig9_ExecuteUbergraph_BOG600_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG600_BoglingSpiral_ExecuteUbergraph_BOG600_Ent_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__DroidMemory_Dathomir_K2Node_ActorBoundEvent_9_LVL_ScanCompleted__DelegateSignature();
    void BOG_300_CIN_Completed();
    void BndEvt__BP_Door_OneWay_Large_5634_K2Node_ActorBoundEvent_10_LVL_DoorUnlocked__DelegateSignature();
    void BndEvt__TriggerBox_BoglingAttackBograt_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_15_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerBox_RotateBogling_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerBox_RotateBogling2_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere_BoglingsBouncing_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_AnimSyncMapTut2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BOG_VaultReveal_Finished();
    void BndEvt__DroidMemory_Dathomir_K2Node_ActorBoundEvent_4_LVL_ScanStarted__DelegateSignature();
    void Bog300_OnSync();
    void BndEvt__TriggerSphere_DathomirScanEnable_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere2_3_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void Ended();
    void BndEvt__LookAt_Trigger_2_K2Node_ActorBoundEvent_8_LVL_LookingAt__DelegateSignature();
    void BndEvt__T_AnimSyncMapTut3_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_AnimSyncMapTut4_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void LizardScatterWallRunEnd(_Script_Engine::Actor* Actor, void* EndPlayReason);
    void BndEvt__TriggerBox_LizardScatterWallRun_1_K2Node_ActorBoundEvent_21_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__BP_Door_OneWay_Large_5634_K2Node_ActorBoundEvent_9_LVL_DoorOpening__DelegateSignature();
    void DathomirBoglingsEnd();
    void WallBounceBogEnd();
    void ReceiveBeginPlay();
    void BogSpiralFinished();
    void BndEvt__TriggerBox_BoglingsSpiral_K2Node_ActorBoundEvent_20_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere_BoglingsSpiral_K2Node_ActorBoundEvent_22_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BoglingScomplinksFinished();
    void BndEvt__BP_Door_HackDoor_312_K2Node_ActorBoundEvent_24_LVL_DoorOpening__DelegateSignature();
    void ExecuteUbergraph_BOG600_Ent(int32_t EntryPoint);
}; // Size: 0x440
#pragma pack(pop)
}
