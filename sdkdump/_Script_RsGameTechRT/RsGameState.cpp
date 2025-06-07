#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\GameState.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_GameplayTags\GameplayTagQuery.hpp"
#include "RsGameState.hpp"
void* _Script_RsGameTechRT::RsGameState::get_OnNewEncounterInstance() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_RsGameTechRT::RsGameState::get_DefaultLevelTags() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGameState");
    return result;
}
void* _Script_RsGameTechRT::RsGameState::get_LevelTags() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_RsGameTechRT::RsGameState::get_SaveSlotIndex() {
    return (void*)((uintptr_t)this + 0x455);
}
int32_t& _Script_RsGameTechRT::RsGameState::get_EncountersInstance() {
    return *(int32_t*)((uintptr_t)this + 0x450);
}
void* _Script_RsGameTechRT::RsGameState::get_Difficulty() {
    return (void*)((uintptr_t)this + 0x454);
}
void _Script_RsGameTechRT::RsGameState::StopTutorial() {
    return;
}
void _Script_RsGameTechRT::RsGameState::StopMapAutoPlay() {
    return;
}
void _Script_RsGameTechRT::RsGameState::StartTutorial() {
    return;
}
void _Script_RsGameTechRT::RsGameState::StartMapAutoPlay() {
    return;
}
int32_t _Script_RsGameTechRT::RsGameState::GetEncountersInstance() {
    return;
}
void _Script_RsGameTechRT::RsGameState::SetSaveSlot(void* SaveSlot) {
    return;
}
void _Script_RsGameTechRT::RsGameState::SetDifficulty(void* NewDifficulty) {
    return;
}
void _Script_RsGameTechRT::RsGameState::RemoveLevelTags(_Script_GameplayTags::GameplayTagContainer TagsToRemove, bool bSaveImmediate) {
    return;
}
void _Script_RsGameTechRT::RsGameState::RemoveLevelTag(_Script_GameplayTags::GameplayTag Tag, bool bSaveImmediate) {
    return;
}
bool _Script_RsGameTechRT::RsGameState::MatchesLevelTagQuery(_Script_GameplayTags::GameplayTagQuery& Query) {
    return;
}
bool _Script_RsGameTechRT::RsGameState::IsTutorialInProgress() {
    return;
}
bool _Script_RsGameTechRT::RsGameState::IsMapAutoPlayInProgress() {
    return;
}
void _Script_RsGameTechRT::RsGameState::AddLevelTag(_Script_GameplayTags::GameplayTag Tag, bool bSaveImmediate) {
    return;
}
bool _Script_RsGameTechRT::RsGameState::IsInMeditationTraining() {
    return;
}
void _Script_RsGameTechRT::RsGameState::IncrementEncountersInstance() {
    return;
}
bool _Script_RsGameTechRT::RsGameState::HasLevelTag(_Script_GameplayTags::GameplayTag Tag, bool bExactMatch) {
    return;
}
bool _Script_RsGameTechRT::RsGameState::HasAnyLevelTag(_Script_GameplayTags::GameplayTagContainer TagsToCheck, bool bExactMatch) {
    return;
}
bool _Script_RsGameTechRT::RsGameState::HasAllLevelTags(_Script_GameplayTags::GameplayTagContainer TagsToCheck, bool bExactMatch) {
    return;
}
void* _Script_RsGameTechRT::RsGameState::GetSaveSlotCount() {
    return;
}
void* _Script_RsGameTechRT::RsGameState::GetSaveSlot() {
    return;
}
_Script_RsGameTechRT::RsGameState* _Script_RsGameTechRT::RsGameState::GetRsGameState(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_RsGameTechRT::RsGameState::GetDifficulty() {
    return;
}
void* _Script_RsGameTechRT::RsGameState::DebugGetCurrentLevelTags() {
    return;
}
void _Script_RsGameTechRT::RsGameState::ClearAllLevelTags(bool bSaveImmediate) {
    return;
}
void _Script_RsGameTechRT::RsGameState::BP_OnStateLoaded() {
    return;
}
void _Script_RsGameTechRT::RsGameState::BP_OnPreSaveGame() {
    return;
}
void _Script_RsGameTechRT::RsGameState::AddLevelTags(_Script_GameplayTags::GameplayTagContainer TagsToAdd, bool bSaveImmediate) {
    return;
}
