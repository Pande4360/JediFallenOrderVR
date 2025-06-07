#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_ReactionOnForcePullParameters.hpp"
bool _Script_SwGame::SwSimpleDestructible_ReactionOnForcePullParameters::get_DestroyPhaseOnForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ReactionOnForcePullParameters::set_DestroyPhaseOnForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_ReactionOnForcePullParameters::get_FreezePhysics() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ReactionOnForcePullParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ReactionOnForcePullParameters");
    return result;
}
