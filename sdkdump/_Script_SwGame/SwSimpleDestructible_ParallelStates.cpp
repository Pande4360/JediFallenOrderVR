#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_ParallelStates.hpp"
void* _Script_SwGame::SwSimpleDestructible_ParallelStates::get_ForcePull() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_SwGame::SwSimpleDestructible_ParallelStates::get_Default() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_SwGame::SwSimpleDestructible_ParallelStates::get_UseParallelStates() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwSimpleDestructible_ParallelStates::get_BackHit() {
    return (void*)((uintptr_t)this + 0x14);
}
void _Script_SwGame::SwSimpleDestructible_ParallelStates::set_UseParallelStates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructible_ParallelStates::get_IgnoreForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwSimpleDestructible_ParallelStates::get_FrontHit() {
    return (void*)((uintptr_t)this + 0xc);
}
void _Script_SwGame::SwSimpleDestructible_ParallelStates::set_IgnoreForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_ParallelStates::get_ForcePush() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ParallelStates::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ParallelStates");
    return result;
}
