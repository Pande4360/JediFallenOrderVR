#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAIEncounterManager.hpp"
void* _Script_RsGameTechRT::RsAIEncounterManager::get_LoadedEncounterGroupActors() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsAIEncounterManager::get_MasterEncounterGroupsSpawned() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_RsGameTechRT::RsAIEncounterManager::OnEncounterInstanceIncremented() {
    return;
}
void* _Script_RsGameTechRT::RsAIEncounterManager::get_OnBountyHunterEncounterSpawned() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIEncounterManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIEncounterManager");
    return result;
}
