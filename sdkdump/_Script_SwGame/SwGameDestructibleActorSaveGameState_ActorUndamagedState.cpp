#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwGameDestructibleActorSaveGameState_ActorUndamagedState.hpp"
bool _Script_SwGame::SwGameDestructibleActorSaveGameState_ActorUndamagedState::get_m_CanBeDamaged() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameDestructibleActorSaveGameState_ActorUndamagedState::set_m_CanBeDamaged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwGameDestructibleActorSaveGameState_ActorUndamagedState::get_m_CanTakeNumericDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_SwGame::SwGameDestructibleActorSaveGameState_ActorUndamagedState::set_m_CanTakeNumericDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState_ActorUndamagedState::get_m_UndamagedStateOfComponents() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameDestructibleActorSaveGameState_ActorUndamagedState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwGameDestructibleActorSaveGameState_ActorUndamagedState");
    return result;
}
