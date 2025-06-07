#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwGameDestructibleActorSaveGameState_PerDestructionPhase.hpp"
void* _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPhase::get_m_ComponentsToShowOriginalCollisionSettings() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPhase::get_m_ComponentsToStartPhysics() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPhase::get_m_DamageSourceType() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPhase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwGameDestructibleActorSaveGameState_PerDestructionPhase");
    return result;
}
