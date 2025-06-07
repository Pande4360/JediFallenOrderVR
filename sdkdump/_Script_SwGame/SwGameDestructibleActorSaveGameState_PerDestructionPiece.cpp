#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwGameDestructibleActorSaveGameState_PerDestructionPiece.hpp"
bool _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPiece::get_m_Destructed() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPiece::set_m_Destructed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPiece::get_m_CurrentDamagePoints() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameDestructibleActorSaveGameState_PerDestructionPiece::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwGameDestructibleActorSaveGameState_PerDestructionPiece");
    return result;
}
