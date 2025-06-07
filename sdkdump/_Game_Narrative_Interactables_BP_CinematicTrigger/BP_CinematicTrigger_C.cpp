#include "..\FUObjectArray.hpp"
#include "BP_CinematicTrigger_C.hpp"
#include "..\_Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen\UI_CinematicPlaceholder_Black_Screen_C.hpp"
#include "..\_Game_UI_UI_SkipCinematic\UI_SkipCinematic_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_LevelSequence\LevelSequenceActor.hpp"
#include "..\_Script_LevelSequence\LevelSequencePlayer.hpp"
#include "..\_Script_MediaAssets\FileMediaSource.hpp"
#include "..\_Script_RsGameTechRT\RsAIEncounterGroup.hpp"
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_AlreadyPlayed__DelegateSignature() {
    return;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DisableAfterUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_ShowAssetNameAsCinematicTitle() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CloseOnTimerCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x424 + 0)) & 1 != 0;
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_ShowTimer() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ac + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_TriggerVolumes() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x380);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_NarrativeLabelHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x408 + 0);
    *(uint8_t*)((uintptr_t)this + 0x408 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::ExecuteUbergraph_BP_CinematicTrigger(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_AutoFade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CinematicAssetName() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_PlayerCineMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DefaultTriggerZoneBox() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_NarrativeLabelComponent() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x378);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_DisableSkipWhileStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ab + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_PlaceholderScreenText() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_PostCineHeroIkOffset() {
    return (void*)((uintptr_t)this + 0x548);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_ShowAssetNameAsCinematicTitle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::GetNarrativeLabelHiddenInGame(bool& Hidden) {
    return;
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_NarrativeLabel() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_NarrativeLabelOffset() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::Completed_2422152443230B6C763E15A44AF5940B(void*& SpawnedAIs, void* SpawnResult) {
    return;
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_NarrativeLabelColor() {
    return (void*)((uintptr_t)this + 0x3cc);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_CinematicTriggerCompleted() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_AllowSkipping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x458 + 0);
    *(uint8_t*)((uintptr_t)this + 0x458 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_UseProximityTriggers() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_SpawnEncounterGroupAIs_FromCinematic(_Script_RsGameTechRT::RsAIEncounterGroup* EncounterGroup) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_UseProximityTriggers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_FinishedOrAlreadyPlayed() {
    return (void*)((uintptr_t)this + 0x498);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_Debug_ShowZoneInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e1 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::DelayAndSetupSkipWidget() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_Debug_ShowZoneInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CinematicLength() {
    return *(float*)((uintptr_t)this + 0x420);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_ZoneInteractTrigger() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C**)((uintptr_t)this + 0x3e8);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::ReceiveBeginPlay0() {
    return;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset) {
    return;
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_CinematicFadedIn() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::RegisterTriggersForOverlaps() {
    return;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_NarrativeLabelHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x408 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_SolidBackground() {
    return (*(uint8_t*)((uintptr_t)this + 0x409 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::FadedIn() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_SolidBackground(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x409 + 0);
    *(uint8_t*)((uintptr_t)this + 0x409 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CinematicScreen() {
    return *(_Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C**)((uintptr_t)this + 0x410);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::UserConstructionScript0() {
    return;
}
float& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_FadeInDuration() {
    return *(float*)((uintptr_t)this + 0x418);
}
float& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_FadeOutDuration() {
    return *(float*)((uintptr_t)this + 0x41c);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_OnCinematicAIFinishedSpawning__DelegateSignature(void*& SpawnedAICharacters) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_CloseOnTimerCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x424 + 0);
    *(uint8_t*)((uintptr_t)this + 0x424 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_TeleportToActorDuringScene() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x428);
}
_Script_MediaAssets::FileMediaSource*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_StoryboardMovieVideo() {
    return *(_Script_MediaAssets::FileMediaSource**)((uintptr_t)this + 0x430);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_PauseGameDuringCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x438 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_PauseGameDuringCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x438 + 0);
    *(uint8_t*)((uintptr_t)this + 0x438 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::SpawnAIs_FromCinematic(void*& SpecificSpawners, _Script_RsGameTechRT::RsAIEncounterGroup* SpecificEncounterGroup) {
    return;
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_CinematicFadeOutStarted() {
    return (void*)((uintptr_t)this + 0x440);
}
_Game_UI_UI_SkipCinematic::UI_SkipCinematic_C*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_skipScreen() {
    return *(_Game_UI_UI_SkipCinematic::UI_SkipCinematic_C**)((uintptr_t)this + 0x468);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_Sequence() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x450);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_CinematicFadeOutStarted__DelegateSignature() {
    return;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_AllowSkipping() {
    return (*(uint8_t*)((uintptr_t)this + 0x458 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_StopOngoingConversations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x4aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_SkipToPosition() {
    return *(float*)((uintptr_t)this + 0x45c);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_PlayerCineMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_ShouldStopExistingMusicOnEnteringCinematic_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x544 + 0);
    *(uint8_t*)((uintptr_t)this + 0x544 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_RestoreHUD() {
    return (*(uint8_t*)((uintptr_t)this + 0x461 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::Interacted() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_RestoreHUD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x461 + 0);
    *(uint8_t*)((uintptr_t)this + 0x461 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_InstantSheatheSaber() {
    return (*(uint8_t*)((uintptr_t)this + 0x470 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_InstantSheatheSaber(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x470 + 0);
    *(uint8_t*)((uintptr_t)this + 0x470 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_Triggered() {
    return (void*)((uintptr_t)this + 0x478);
}
_Script_LevelSequence::LevelSequencePlayer*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CurrentSequencePlayer() {
    return *(_Script_LevelSequence::LevelSequencePlayer**)((uintptr_t)this + 0x488);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_DisableAfterUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DisableSkipTime() {
    return *(float*)((uintptr_t)this + 0x494);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::SpawnCinematicAI_Internal(void*& Spawners) {
    return;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_AutoFade() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a8 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CineTakesCameraControl() {
    return (*(uint8_t*)((uintptr_t)this + 0x545 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_BlendOutSkip() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a9 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_CinematicFadedIn__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_BlendOutSkip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_StopOngoingConversations() {
    return (*(uint8_t*)((uintptr_t)this + 0x4aa + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DisableSkipWhileStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ab + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_PauseUntilStreamingComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x546 + 0);
    *(uint8_t*)((uintptr_t)this + 0x546 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_ShowTimer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_SkippingQuitsGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ad + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_SkippingQuitsGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ad + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DisableVODuringScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ae + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DeferStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x554 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_DisableVODuringScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ae + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ae + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_DidSkip() {
    return (*(uint8_t*)((uintptr_t)this + 0x4af + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_DidSkip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4af + 0);
    *(uint8_t*)((uintptr_t)this + 0x4af + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_RequiredSetTags() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_RequiredUnsetTags() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_AlreadyPlayed() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_OnCinematicAIFinishedSpawning() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_SpawnedAICharacters() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_LVL_CinematicSkipInitiated() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_skipFunctionCalled() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_CinePlayedTag() {
    return (void*)((uintptr_t)this + 0x520);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_HideSavePoints() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_HideSavePoints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_RTPC_Cinematic_Skip() {
    return (void*)((uintptr_t)this + 0x530);
}
_Script_AkAudio::AkAudioEvent*& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_Mus_On_End_Cinematic() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x538);
}
float& _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_Mus_On_End_Cinematic_Delay() {
    return *(float*)((uintptr_t)this + 0x540);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_ShouldStopExistingMusicOnEnteringCinematic_() {
    return (*(uint8_t*)((uintptr_t)this + 0x544 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_CineTakesCameraControl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x545 + 0);
    *(uint8_t*)((uintptr_t)this + 0x545 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_PauseUntilStreamingComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x546 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::get_SetPostCineHeroIkOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x547 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_SetPostCineHeroIkOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x547 + 0);
    *(uint8_t*)((uintptr_t)this + 0x547 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::set_DeferStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x554 + 0);
    *(uint8_t*)((uintptr_t)this + 0x554 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_CinematicTrigger.BP_CinematicTrigger_C");
    return result;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::GetNarrativeLabel(void*& Label) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::GetNarrativeLabelColor(_Script_CoreUObject::Color& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::CineLog(void* Message) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::hasAlreadyPlayed_(bool& AlreadyPlayed_) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::PerformSkipCinematicToEnd() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_SpawnSpecificAIs_FromCinematic(void*& Spawners) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_SpawnAllAIs_FromCinematic() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::ValidateTagRequirements(bool& Success) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::PollForDisableSkip() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::CinematicSkipped() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_TriggerCinematic(bool& Played) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::DisplayMessage() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::DisableTriggers() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::TriggerOverlapped(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::OnCinematicDone() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::FadeOutStarted() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::OneFrameFinishedFiringDelay() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::MainGraphLogic() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_FadeToGame() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::ExecuteCinematic() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::skipFunctionCalled__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_CinematicSkipInitiated__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip) {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_Triggered__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C::LVL_CinematicTriggerCompleted__DelegateSignature(bool UsedSkip) {
    return;
}
