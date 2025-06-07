#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsAILeashingActor.hpp"
#include "RsAISpawner.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISpawner");
    return result;
}
void* _Script_RsGameTechRT::RsAISpawner::get_OnAISpawnedEvent() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_RsGameTechRT::RsAISpawner::get_OnAIDespawnedEvent() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_RsGameTechRT::RsAILeashingActor*& _Script_RsGameTechRT::RsAISpawner::get_LeashingBounds() {
    return *(_Script_RsGameTechRT::RsAILeashingActor**)((uintptr_t)this + 0x380);
}
void _Script_RsGameTechRT::RsAISpawner::PrimeSpawner() {
    return;
}
void _Script_RsGameTechRT::RsAISpawner::EnableSpawner(bool bEnable) {
    return;
}
void _Script_RsGameTechRT::RsAISpawner::DespawnAllAI(void* DespawnReason) {
    return;
}
