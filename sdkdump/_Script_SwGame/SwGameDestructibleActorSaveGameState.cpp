#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwGameDestructibleActorSaveGameState.hpp"
void* _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_ActiveParallelStateType() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_ParallelStatesInitialized() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_SavedEncountersInstance() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_FirstPhaseIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_TotalDamagePoints() {
    return *(float*)((uintptr_t)this + 0x14);
}
int32_t& _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_NumValidPhases() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_SavedStatePerDestructionPhase() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_StartedPhysicsOnHitBones() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_SavedStatePerDestructionPiece() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState::get_m_ActorUndamagedState() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameDestructibleActorSaveGameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwGameDestructibleActorSaveGameState");
    return result;
}
