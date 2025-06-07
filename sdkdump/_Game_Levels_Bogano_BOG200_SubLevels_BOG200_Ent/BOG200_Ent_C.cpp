#include "..\FUObjectArray.hpp"
#include "BOG200_Ent_C.hpp"
#include "..\_Game_Levels_Bogano_BP_Bogling\BP_Bogling_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_VOTrigger\BP_VOTrigger_C.hpp"
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_LevelSequence\LevelSequenceActor.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_CliffEdge1_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3f0);
}
void* _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_ForceSlowTutorialComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
bool _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_ZTargetTutorialComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x371 + 0)) & 1 != 0;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::ExecuteUbergraph_BOG200_Ent(int32_t EntryPoint) {
    return;
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_rig12_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x418);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::set_ForceSlowTutorialComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_TeleportMarker_BogratAlley_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3a0);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::set_ForceMeterTutorialComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x372 + 0);
    *(uint8_t*)((uintptr_t)this + 0x372 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__Zone_Interact_Animated_2_K2Node_ActorBoundEvent_0_LVL_InteractAnimationStarted__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::set_ZTargetTutorialComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x371 + 0);
    *(uint8_t*)((uintptr_t)this + 0x371 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_ForceMeterTutorialComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x372 + 0)) & 1 != 0;
}
void* _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Timer() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere4_K2Node_ActorBoundEvent_8_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BP_BogCanyon2_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_Levels_Bogano_BP_Bogling::BP_Bogling_C**)((uintptr_t)this + 0x380);
}
_Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BP_BogCanyon19_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_Levels_Bogano_BP_Bogling::BP_Bogling_C**)((uintptr_t)this + 0x390);
}
_Game_Levels_Bogano_BP_Bogling::BP_Bogling_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BP_BogCanyon1_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_Levels_Bogano_BP_Bogling::BP_Bogling_C**)((uintptr_t)this + 0x388);
}
_Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BP_VOTrigger_bog1_fracturedplain_BDrope_1_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C**)((uintptr_t)this + 0x398);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere4_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_POI_BogratAlley1_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x3a8);
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_POI_BogratAlley2_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x3b0);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__T_BogCanyon2_K2Node_ActorBoundEvent_97_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_POI_BogratAlley3_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::Actor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_TeleportMarker_SecondCutRope_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3c0);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere_BoglingCliff1_K2Node_ActorBoundEvent_25_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_POI_2ndCutRope_Jump_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_CliffEdge3_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3e0);
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BD1_POI_2ndCutRope_Hole_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x3d0);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BOG200_BoglingCliffEdge_Sequence_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x3d8);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__Trigger_BD1_BoglingAlley_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_CliffEdge2_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x3e8);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BOG200_BoglingCliff1_Sequence_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x3f8);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::RopeHintVO(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_rig11_2_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x408);
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_rig8_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x400);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::TimedHint() {
    return;
}
_Script_Engine::SkeletalMeshActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Bogling_rig13_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_Engine::SkeletalMeshActor**)((uintptr_t)this + 0x410);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_BOG200_BoglingTopCliff_Sequence_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x420);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BoglingCliffEdgeFinished() {
    return;
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C*& _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::get_Zone_Interact_Animated_2_ExecuteUbergraph_BOG200_Ent_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C**)((uintptr_t)this + 0x428);
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::ReceiveBeginPlay() {
    return;
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG200/SubLevels/BOG200_Ent.BOG200_Ent_C");
    return result;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__BP_POI_BoglingAlley3_K2Node_ActorBoundEvent_11_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__T_BogCanyon1_K2Node_ActorBoundEvent_65_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere3_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__T_MantisLeave_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__BP_POI_AfterFirstCutRope_Hole_K2Node_ActorBoundEvent_4_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__Trigger_BD1_BoglingAlley_part2_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__Trigger_BD1_BoglingAlley_part3_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__BD1_POI_2ndCutRope_Hole_K2Node_ActorBoundEvent_5_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__BD1_POI_2ndCutRope_Jump_K2Node_ActorBoundEvent_12_RsAIPOIInteractionDelegate__DelegateSignature(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerBox4_2_K2Node_ActorBoundEvent_16_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerBox_BoglingCliffEdgeRun2_K2Node_ActorBoundEvent_21_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere3_2_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere5_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__TriggerSphere5_K2Node_ActorBoundEvent_14_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::BndEvt__T_CliffsideSkatter_K2Node_ActorBoundEvent_17_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::CliffboglingFinished() {
    return;
}
void _Game_Levels_Bogano_BOG200_SubLevels_BOG200_Ent::BOG200_Ent_C::CliffTopFinished() {
    return;
}
