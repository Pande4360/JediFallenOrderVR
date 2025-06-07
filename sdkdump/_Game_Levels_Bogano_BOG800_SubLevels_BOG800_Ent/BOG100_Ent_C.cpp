#include "..\FUObjectArray.hpp"
#include "BOG100_Ent_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_BP_AnimSync\BP_AnimSync_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlockingVolume.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\Note.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_LevelSequence\LevelSequenceActor.hpp"
void* _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
float& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_PushThePlayer_Progress_1DF7C91E41448B7B166AD194118EBE19() {
    return *(float*)((uintptr_t)this + 0x370);
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::BndEvt__TriggerSphere_LizardsScatter1_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void* _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_PushThePlayer__Direction_1DF7C91E41448B7B166AD194118EBE19() {
    return (void*)((uintptr_t)this + 0x374);
}
_Script_Engine::TimelineComponent*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_PushThePlayer() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x378);
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::set_WallrunGateChangePlayed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallrunGateChangePlayed() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void* _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_PusherStartLoc() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_PusherEndLoc() {
    return (void*)((uintptr_t)this + 0x38c);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_Seq_BOG800_LizardScatterOasis_2_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x3a0);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_Seq_BOG800_LizardScatterOasis_1_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::Note*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunAcquire_ReturnToWorld_Locator_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::Note**)((uintptr_t)this + 0x3b0);
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::LizardOasis1End(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_Seq_BOG800_LizardScatter_BigSnake_2_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunLizard_rig13_2_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3c0);
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::BndEvt__T_LizardesByBigSnake_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunLizard_rig16_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunLizard_rig14_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3d0);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunLizard_rig15_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3d8);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunLizard_rig11_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3e0);
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::ExecuteUbergraph_BOG800_Ent(int32_t EntryPoint) {
    return;
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_WallRunLizard_rig12_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3e8);
}
_Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_BP_AnimSync_2_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::BlockingVolume*& _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::get_BV_PushPusher_ExecuteUbergraph_BOG800_Ent_RefProperty() {
    return *(_Script_Engine::BlockingVolume**)((uintptr_t)this + 0x3f8);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG800/SubLevels/BOG800_Ent.BOG100_Ent_C");
    return result;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::PushThePlayer__FinishedFunc() {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::PushThePlayer__UpdateFunc() {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::BndEvt__T_LizardScatterOasis2_K2Node_ActorBoundEvent_58_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::BndEvt__T_DoMapGateEvent_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::RE_Transition_ReturnToLevel_WallRunAcquired() {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::LizardScatterBigSnakeEnd(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::LizardOasis2End(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::BndEvt__BP_AnimSync_2_K2Node_ActorBoundEvent_4_LVL_OnNavOnlyCompleted__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::RemovesMapDisableTag() {
    return;
}
void _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Ent::BOG100_Ent_C::BndEvt__BP_SlideBlock3_327_K2Node_ActorBoundEvent_1_Lvl_Pushed__DelegateSignature() {
    return;
}
