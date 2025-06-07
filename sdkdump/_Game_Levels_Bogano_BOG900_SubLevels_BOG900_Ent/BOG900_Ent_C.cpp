#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead\BP_BuddyDroid_MoveAhead_C.hpp"
#include "BOG900_Ent_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_CinematicTrigger\BP_CinematicTrigger_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Engine\TriggerBox.hpp"
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__BP_CameraPOITrigger3_2_K2Node_ActorBoundEvent_10_OnStartPOI__DelegateSignature() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_TL_VaultOpening() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x378);
}
void* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_TL_VaultOpening__Direction_CCE1AFC54A0468D7BFB1558A67043399() {
    return (void*)((uintptr_t)this + 0x374);
}
float& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_TL_VaultOpening_progress_CCE1AFC54A0468D7BFB1558A67043399() {
    return *(float*)((uintptr_t)this + 0x370);
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::SE_VaultDoorOpens() {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::set_slidePrimed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_DoorStartingLoc() {
    return (void*)((uintptr_t)this + 0x380);
}
bool _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_slidePrimed() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 1 != 0;
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_Zone_Interact_Animated_Vault_230_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C**)((uintptr_t)this + 0x390);
}
_Script_Engine::TriggerBox*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_T_DroidOffBack_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Script_Engine::TriggerBox**)((uintptr_t)this + 0x398);
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::ExecuteUbergraph_BOG900_Ent(int32_t EntryPoint) {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_VaultDoor_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x3a0);
}
_Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_BOG_230_VaultEnter_BP_CinematicTrigger_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_BigOlSlide_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_BigOlNoSlide_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x3b8);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG900/SubLevels/BOG900_Ent.BOG900_Ent_C");
    return result;
}
_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_BP_BuddyDroid_MoveAhead_Vault_ExecuteUbergraph_BOG900_Ent_RefProperty() {
    return *(_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C**)((uintptr_t)this + 0x3c0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::get_VaultDoor_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x3c8);
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::UpdateVaultDoorOpenProgress(float TimelinePercentage) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__BOG_230_VaultEnter_BP_CinematicTrigger_K2Node_ActorBoundEvent_2_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::TL_VaultOpening__FinishedFunc() {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::TL_VaultOpening__UpdateFunc() {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__T_DroidOffBack_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__T_DroidOffBack_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::RE_CompleteMissionObjectiveWallrun() {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__T_FoolproofPOI_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BOG_VaultReveal_Finished() {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__T_PrimeSlide_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__T_InitiateSlide_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__T_EndSlide_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__VaultVista_TriggerVolume_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG900_SubLevels_BOG900_Ent::BOG900_Ent_C::BndEvt__Zone_Interact_Animated_Vault_230_K2Node_ActorBoundEvent_9_LVL_InteractAnimationStarted__DelegateSignature() {
    return;
}
