#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAICharacter.hpp"
#include "RsAICharacterSpawner.hpp"
#include "RsAIScriptingOptions.hpp"
#include "RsAISpawner.hpp"
#include "RsAISpawnerIntroSettings.hpp"
#include "RsAISpawnerLeashSettings.hpp"
#include "RsAISpawnerPOISettings.hpp"
#include "RsAISpawnerPatrolSettings.hpp"
#include "RsAISpawnerWanderSettings.hpp"
void* _Script_RsGameTechRT::RsAICharacterSpawner::get_SpawnerRef() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_RsGameTechRT::RsAICharacterSpawner::get_SimpleSpawnerInstance() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterSpawner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAICharacterSpawner");
    return result;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetSpawnerWanderSettings(_Script_RsGameTechRT::RsAISpawnerWanderSettings SpawnerWanderSettings) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetSpawnerIntroSettings(_Script_RsGameTechRT::RsAISpawnerIntroSettings SpawnerIntroSettings) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetSpawnerScriptingSettings(_Script_RsGameTechRT::RsAIScriptingOptions SpawnerScriptingSettings) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetSpawnerPatrolSettings(_Script_RsGameTechRT::RsAISpawnerPatrolSettings SpawnerPatrolSettings) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetSpawnerPOISettings(_Script_RsGameTechRT::RsAISpawnerPOISettings SpawnerPOISettings) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetSpawnerAdvancedSettings(bool bAutoSpawn, void* GroupName, void* OverrideSyncSlotName, int32_t SpawnMax, float SpawnDelay, bool bEnabled, bool bAllowSpawnOffNavMesh) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::SetLeashSettings(_Script_RsGameTechRT::RsAISpawnerLeashSettings SpawnerLeashSettings) {
    return;
}
void _Script_RsGameTechRT::RsAICharacterSpawner::GetSpawnerAdvancedSettings(bool& bAutoSpawn, void*& GroupName, void*& OverrideSyncSlotName, int32_t& SpawnMax, float& SpawnDelay, bool& bEnabled, bool& bAllowSpawnOffNavMesh, _Script_GameplayTags::GameplayTag& SpeakerTagOverride) {
    return;
}
void* _Script_RsGameTechRT::RsAICharacterSpawner::GetSpawnedAI() {
    return;
}
_Script_RsGameTechRT::RsAICharacter* _Script_RsGameTechRT::RsAICharacterSpawner::GetFirstCurrentlySpawnedAI() {
    return;
}
