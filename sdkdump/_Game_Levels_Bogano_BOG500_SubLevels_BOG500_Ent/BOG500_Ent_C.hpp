#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct BlockingVolume;
}
namespace _Script_Engine {
struct TriggerSphere;
}
namespace _Game_Narrative_Interactables_BP_VOTrigger {
struct BP_VOTrigger_C;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead {
struct BP_BuddyDroid_MoveAhead_C;
}
namespace _Game_WorldInteracts_AI_BP_POI {
struct BP_POI_C;
}
namespace _Script_Engine {
struct TriggerVolume;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Ent {
#pragma pack(push, 1)
struct BOG500_Ent_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x68]; public:
    void* get_UberGraphFrame();
    float& get_TL_Hologram_NewTrack_0_EA2551D644AF8C0113A9EEBF87A7853C();
    void* get_TL_Hologram__Direction_EA2551D644AF8C0113A9EEBF87A7853C();
    _Script_Engine::TimelineComponent*& get_TL_Hologram();
    float& get_tunnelWaitTime();
    void* get_TunnelFailTimer();
    _Script_Engine::BlockingVolume*& get_BlockingVolume362_2_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Script_Engine::StaticMeshActor*& get_HologramPivot_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C*& get_BP_VOTrigger_bog1_lookat_distantvault_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C*& get_BP_VOTrigger_bog1_greatdivide_maptutorial_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD1_POI_ProjectMap_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Script_Engine::TriggerSphere*& get_Trigger_BD1_ProjectMap_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C*& get_BP_BuddyDroid_MoveAhead_Workshop_ExecuteUbergraph_BOG500_Ent_RefProperty();
    _Script_Engine::TriggerVolume*& get_Trigger_BD1_MoveAhead_Workshop_Abort2_ExecuteUbergraph_BOG500_Ent_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void TL_Hologram__FinishedFunc();
    void TL_Hologram__UpdateFunc();
    void MapOn();
    void MapOff();
    void MapBindings();
    void BndEvt__BP_CameraPOITrigger2_K2Node_ActorBoundEvent_1_OnStartPOI__DelegateSignature();
    void LandingPadMapEvent();
    void VaultMapEvent();
    void SavePointMapEvent();
    void BndEvt__BP_BuddyDroid_MoveAhead_Workshop_K2Node_ActorBoundEvent_5_LVL_ObjectiveReached__DelegateSignature();
    void BndEvt__BD1_POI_ProjectMap_K2Node_ActorBoundEvent_7_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void BndEvt__Trigger_BD1_ProjectMap_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Trigger_BD1_MoveAhead_Workshop_Abort2_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__BP_BuddyDroid_MoveAhead_Workshop_K2Node_ActorBoundEvent_11_LVL_MoveAheadStarted__DelegateSignature();
    void BndEvt__BP_BuddyDroid_MoveAhead_Workshop_K2Node_ActorBoundEvent_12_LVL_MoveAheadAborted__DelegateSignature();
    void BndEvt__BOG_Push_Bridge_5_K2Node_ActorBoundEvent_2_LVL_Opened__DelegateSignature();
    void ExecuteUbergraph_BOG500_Ent(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
