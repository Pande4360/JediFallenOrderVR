#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Breakpoint.hpp"
#include "EdGraphNode.hpp"
bool _Script_Engine::Breakpoint::get_bStepOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::Breakpoint::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Breakpoint::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::Breakpoint::set_bStepOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::EdGraphNode*& _Script_Engine::Breakpoint::get_Node() {
    return *(_Script_Engine::EdGraphNode**)((uintptr_t)this + 0x30);
}
bool _Script_Engine::Breakpoint::get_bStepOnce_WasPreviouslyDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
bool _Script_Engine::Breakpoint::get_bStepOnce_RemoveAfterHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 4 != 0;
}
void _Script_Engine::Breakpoint::set_bStepOnce_WasPreviouslyDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Breakpoint::set_bStepOnce_RemoveAfterHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::Breakpoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Breakpoint");
    return result;
}
