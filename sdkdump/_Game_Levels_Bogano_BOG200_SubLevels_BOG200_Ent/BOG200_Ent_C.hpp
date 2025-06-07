#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_Levels_Bogano_BP_Bogling {
struct BP_Bogling_C;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Game_Narrative_Interactables_BP_VOTrigger {
struct BP_VOTrigger_C;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_WorldInteracts_AI_BP_POI {
struct BP_POI_C;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated {
struct Zone_Interact_Animated_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent {
#pragma pack(push, 1)
struct BOG200_Ent_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0xc8]; public:
    void* get_UberGraphFrame();
    bool get_ForceSlowTutorialComplete();
    void set_ForceSlowTutorialComplete(bool value);
    bool get_ZTargetTutorialComplete();
    void set_ZTargetTutorialComplete(bool value);
    bool get_ForceMeterTutorialComplete();
    void set_ForceMeterTutorialComplete(bool value);
    void* get_Timer();
    _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& get_BP_BogCanyon2_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& get_BP_BogCanyon1_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& get_BP_BogCanyon19_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C*& get_BP_VOTrigger_bog1_fracturedplain_BDrope_1_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::Actor*& get_BD1_TeleportMarker_BogratAlley_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD1_POI_BogratAlley1_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD1_POI_BogratAlley2_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD1_POI_BogratAlley3_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::Actor*& get_BD1_TeleportMarker_SecondCutRope_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD1_POI_2ndCutRope_Jump_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD1_POI_2ndCutRope_Hole_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG200_BoglingCliffEdge_Sequence_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_CliffEdge3_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_CliffEdge2_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_CliffEdge1_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG200_BoglingCliff1_Sequence_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig8_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig11_2_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig13_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_Bogling_rig12_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_BOG200_BoglingTopCliff_Sequence_ExecuteUbergraph_BOG200_Ent_RefProperty();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C*& get_Zone_Interact_Animated_2_ExecuteUbergraph_BOG200_Ent_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void BndEvt__T_BogCanyon1_K2Node_ActorBoundEvent_65_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_BogCanyon2_K2Node_ActorBoundEvent_97_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MantisLeave_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__BP_POI_AfterFirstCutRope_Hole_K2Node_ActorBoundEvent_4_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void BndEvt__Trigger_BD1_BoglingAlley_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Trigger_BD1_BoglingAlley_part2_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Trigger_BD1_BoglingAlley_part3_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__BP_POI_BoglingAlley3_K2Node_ActorBoundEvent_11_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void BndEvt__BD1_POI_2ndCutRope_Hole_K2Node_ActorBoundEvent_5_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void BndEvt__BD1_POI_2ndCutRope_Jump_K2Node_ActorBoundEvent_12_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void BndEvt__TriggerBox4_2_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RopeHintVO(_Script_RsGameTechRT::RsConversation* Conversation);
    void TimedHint();
    void BndEvt__TriggerSphere_BoglingCliff1_K2Node_ActorBoundEvent_25_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerBox_BoglingCliffEdgeRun2_K2Node_ActorBoundEvent_21_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__Zone_Interact_Animated_2_K2Node_ActorBoundEvent_0_LVL_InteractAnimationStarted__DelegateSignature();
    void BndEvt__TriggerSphere3_2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere3_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere4_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere4_K2Node_ActorBoundEvent_8_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere5_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerSphere5_K2Node_ActorBoundEvent_14_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_CliffsideSkatter_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void CliffboglingFinished();
    void BoglingCliffEdgeFinished();
    void CliffTopFinished();
    void ExecuteUbergraph_BOG200_Ent(int32_t EntryPoint);
}; // Size: 0x430
#pragma pack(pop)
}
