#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAICharacter.hpp"
#include "RsAIEncounterGroup.hpp"
#include "RsTargetableComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIEncounterGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIEncounterGroup");
    return result;
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_AISpawners() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_AIStagedSpawners() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_RequiredTagQuery() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Script_RsGameTechRT::RsAIEncounterGroup::set_bOverrideEncounterReset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAIEncounterGroup::OnAISpawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult) {
    return;
}
bool _Script_RsGameTechRT::RsAIEncounterGroup::get_bAutoSpawnGroup() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::set_bAutoSpawnGroup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_SpawnTriggers() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Script_RsGameTechRT::RsAIEncounterGroup::get_bOverrideEncounterReset() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c9 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_AwakeCylinder() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_AsleepCylinder() {
    return (void*)((uintptr_t)this + 0x3ec);
}
_Script_Engine::Volume*& _Script_RsGameTechRT::RsAIEncounterGroup::get_OverrideAwakeVolume() {
    return *(_Script_Engine::Volume**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::Volume*& _Script_RsGameTechRT::RsAIEncounterGroup::get_OverrideAsleepVolume() {
    return *(_Script_Engine::Volume**)((uintptr_t)this + 0x400);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_poiArray() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_MasterEncounterKey() {
    return (void*)((uintptr_t)this + 0x418);
}
bool _Script_RsGameTechRT::RsAIEncounterGroup::get_bIsBountyHunterEncounter() {
    return (*(uint8_t*)((uintptr_t)this + 0x420 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::set_bIsBountyHunterEncounter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x420 + 0);
    *(uint8_t*)((uintptr_t)this + 0x420 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIEncounterGroup::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x421 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x421 + 0);
    *(uint8_t*)((uintptr_t)this + 0x421 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_RsGameTechRT::RsAIEncounterGroup::get_SceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x428);
}
void _Script_RsGameTechRT::RsAIEncounterGroup::OnAIDespawned(_Script_RsGameTechRT::RsAICharacter* DespawnedAI, void* DespawnReason) {
    return;
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_OnEncounterGroupSpawnComplete() {
    return (void*)((uintptr_t)this + 0x430);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_OnEncounterGroupAllDied() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_OnEncounterAIDied() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_OnEncounterGroupAllDefeated() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_OnEncounterGroupAwakened() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_OnEncounterGroupAsleep() {
    return (void*)((uintptr_t)this + 0x480);
}
bool _Script_RsGameTechRT::RsAIEncounterGroup::get_bIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::set_bIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIEncounterGroup::get_bIsAwake() {
    return (*(uint8_t*)((uintptr_t)this + 0x491 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::set_bIsAwake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x491 + 0);
    *(uint8_t*)((uintptr_t)this + 0x491 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIEncounterGroup::get_EncounterMemberMap() {
    return (void*)((uintptr_t)this + 0x498);
}
int32_t& _Script_RsGameTechRT::RsAIEncounterGroup::get_EncounterInstance() {
    return *(int32_t*)((uintptr_t)this + 0x4e8);
}
int32_t& _Script_RsGameTechRT::RsAIEncounterGroup::get_ActiveSpawnerCount() {
    return *(int32_t*)((uintptr_t)this + 0x4ec);
}
int32_t& _Script_RsGameTechRT::RsAIEncounterGroup::get_SpawnedAICount() {
    return *(int32_t*)((uintptr_t)this + 0x4f0);
}
int32_t& _Script_RsGameTechRT::RsAIEncounterGroup::get_AwakeAICount() {
    return *(int32_t*)((uintptr_t)this + 0x4f4);
}
int32_t& _Script_RsGameTechRT::RsAIEncounterGroup::get_DeadAICount() {
    return *(int32_t*)((uintptr_t)this + 0x4f8);
}
int32_t& _Script_RsGameTechRT::RsAIEncounterGroup::get_DefeatedAICount() {
    return *(int32_t*)((uintptr_t)this + 0x4fc);
}
void _Script_RsGameTechRT::RsAIEncounterGroup::SpawnEncounterGroup() {
    return;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::OnSpawnTriggerOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::OnPreFactionChange(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent, _Script_GameplayTags::GameplayTag PreviousFactionTag, _Script_GameplayTags::GameplayTag NewFactionTag) {
    return;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::OnEncounterInstanceIncremented() {
    return;
}
void _Script_RsGameTechRT::RsAIEncounterGroup::OnCorpseRemoved(_Script_RsGameTechRT::RsAICharacter* AICharacter) {
    return;
}
