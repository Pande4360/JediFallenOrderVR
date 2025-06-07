#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwGameDestructibleActorSaveGameState_ComponentState.hpp"
void* _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::get_m_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::get_m_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::set_m_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::get_m_HiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::set_m_HiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::get_m_CollisionSettings() {
    return (void*)((uintptr_t)this + 0x9);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameDestructibleActorSaveGameState_ComponentState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwGameDestructibleActorSaveGameState_ComponentState");
    return result;
}
