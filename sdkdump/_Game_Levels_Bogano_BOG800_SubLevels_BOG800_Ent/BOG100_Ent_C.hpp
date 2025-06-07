#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_Engine {
struct Note;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_WorldInteracts_EventZones_Interact_BP_AnimSync {
struct BP_AnimSync_C;
}
namespace _Script_Engine {
struct BlockingVolume;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent {
#pragma pack(push, 1)
struct BOG100_Ent_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x98]; public:
    void* get_UberGraphFrame();
    float& get_PushThePlayer_Progress_1DF7C91E41448B7B166AD194118EBE19();
    void* get_PushThePlayer__Direction_1DF7C91E41448B7B166AD194118EBE19();
    _Script_Engine::TimelineComponent*& get_PushThePlayer();
    void* get_PusherStartLoc();
    void* get_PusherEndLoc();
    bool get_WallrunGateChangePlayed();
    void set_WallrunGateChangePlayed(bool value);
    _Script_LevelSequence::LevelSequenceActor*& get_Seq_BOG800_LizardScatterOasis_2_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_Seq_BOG800_LizardScatterOasis_1_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::Note*& get_WallRunAcquire_ReturnToWorld_Locator_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_LevelSequence::LevelSequenceActor*& get_Seq_BOG800_LizardScatter_BigSnake_2_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig13_2_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig16_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig14_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig15_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig11_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::SkeletalMeshActor*& get_WallRunLizard_rig12_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C*& get_BP_AnimSync_2_ExecuteUbergraph_BOG800_Ent_RefProperty();
    _Script_Engine::BlockingVolume*& get_BV_PushPusher_ExecuteUbergraph_BOG800_Ent_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void PushThePlayer__FinishedFunc();
    void PushThePlayer__UpdateFunc();
    void BndEvt__T_LizardScatterOasis2_K2Node_ActorBoundEvent_58_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_DoMapGateEvent_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_Transition_ReturnToLevel_WallRunAcquired();
    void LizardScatterBigSnakeEnd(_Script_Engine::Actor* Actor, void* EndPlayReason);
    void LizardOasis2End(_Script_Engine::Actor* Actor, void* EndPlayReason);
    void LizardOasis1End(_Script_Engine::Actor* Actor, void* EndPlayReason);
    void BndEvt__BP_AnimSync_2_K2Node_ActorBoundEvent_4_LVL_OnNavOnlyCompleted__DelegateSignature();
    void RemovesMapDisableTag();
    void BndEvt__TriggerSphere_LizardsScatter1_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__BP_SlideBlock3_327_K2Node_ActorBoundEvent_1_Lvl_Pushed__DelegateSignature();
    void BndEvt__T_LizardesByBigSnake_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BOG800_Ent(int32_t EntryPoint);
}; // Size: 0x400
#pragma pack(pop)
}
