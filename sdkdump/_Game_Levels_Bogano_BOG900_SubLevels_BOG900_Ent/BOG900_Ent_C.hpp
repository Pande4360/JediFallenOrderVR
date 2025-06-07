#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated {
struct Zone_Interact_Animated_C;
}
namespace _Script_Engine {
struct TriggerBox;
}
namespace _Game_Narrative_Interactables_BP_CinematicTrigger {
struct BP_CinematicTrigger_C;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead {
struct BP_BuddyDroid_MoveAhead_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent {
#pragma pack(push, 1)
struct BOG900_Ent_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x68]; public:
    void* get_UberGraphFrame();
    float& get_TL_VaultOpening_progress_CCE1AFC54A0468D7BFB1558A67043399();
    void* get_TL_VaultOpening__Direction_CCE1AFC54A0468D7BFB1558A67043399();
    _Script_Engine::TimelineComponent*& get_TL_VaultOpening();
    void* get_DoorStartingLoc();
    bool get_slidePrimed();
    void set_slidePrimed(bool value);
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C*& get_Zone_Interact_Animated_Vault_230_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Script_Engine::TriggerBox*& get_T_DroidOffBack_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Script_Engine::StaticMeshActor*& get_VaultDoor_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& get_BOG_230_VaultEnter_BP_CinematicTrigger_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BigOlSlide_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BigOlNoSlide_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C*& get_BP_BuddyDroid_MoveAhead_Vault_ExecuteUbergraph_BOG900_Ent_RefProperty();
    _Script_Engine::StaticMeshActor*& get_VaultDoor_EdGraph_0_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void UpdateVaultDoorOpenProgress(float TimelinePercentage);
    void TL_VaultOpening__FinishedFunc();
    void TL_VaultOpening__UpdateFunc();
    void BndEvt__T_DroidOffBack_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_DroidOffBack_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_CompleteMissionObjectiveWallrun();
    void BndEvt__T_FoolproofPOI_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void SE_VaultDoorOpens();
    void BndEvt__BOG_230_VaultEnter_BP_CinematicTrigger_K2Node_ActorBoundEvent_2_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip);
    void ReceiveBeginPlay();
    void BndEvt__T_PrimeSlide_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_InitiateSlide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_EndSlide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__VaultVista_TriggerVolume_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BOG_VaultReveal_Finished();
    void BndEvt__BP_CameraPOITrigger3_2_K2Node_ActorBoundEvent_10_OnStartPOI__DelegateSignature();
    void BndEvt__Zone_Interact_Animated_Vault_230_K2Node_ActorBoundEvent_9_LVL_InteractAnimationStarted__DelegateSignature();
    void ExecuteUbergraph_BOG900_Ent(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
