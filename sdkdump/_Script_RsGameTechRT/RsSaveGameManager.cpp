#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\RsSaveGameManagerBase.hpp"
#include "RsSaveGameManager.hpp"
#include "RsSaveGameObject.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSaveGameManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSaveGameManager");
    return result;
}
_Script_RsGameTechRT::RsSaveGameObject*& _Script_RsGameTechRT::RsSaveGameManager::get_CurrentSaveObject() {
    return *(_Script_RsGameTechRT::RsSaveGameObject**)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsSaveGameManager::get_CachedSaveSlotInfo() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_RsGameTechRT::RsSaveGameManager::get_ActorRecords() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsSaveGameManager::get_PendingActorRecords() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_RsGameTechRT::RsSaveGameManager::get_PendingBeginPlayActorsToSave() {
    return (void*)((uintptr_t)this + 0x150);
}
void _Script_RsGameTechRT::RsSaveGameManager::OnRegisteredActorEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
