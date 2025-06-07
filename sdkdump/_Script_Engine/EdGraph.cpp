#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EdGraph.hpp"
void* _Script_Engine::EdGraph::get_Schema() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::EdGraph::set_bAllowRenaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::EdGraph::get_Nodes() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::EdGraph::set_bAllowDeletion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::EdGraph::get_bEditable() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
bool _Script_Engine::EdGraph::get_bAllowRenaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 4 != 0;
}
void _Script_Engine::EdGraph::set_bEditable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::EdGraph::get_bAllowDeletion() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::EdGraph::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EdGraph");
    return result;
}
