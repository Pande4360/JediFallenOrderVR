#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InterpGroup.hpp"
void _Script_Engine::InterpGroup::set_bCollapsed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InterpGroup::get_InterpTracks() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::InterpGroup::get_bIsFolder() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 4 != 0;
}
bool _Script_Engine::InterpGroup::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 2 != 0;
}
void* _Script_Engine::InterpGroup::get_GroupName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::InterpGroup::get_GroupColor() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::InterpGroup::get_bCollapsed() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_Engine::InterpGroup::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::InterpGroup::set_bIsFolder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::InterpGroup::get_bIsParented() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 8 != 0;
}
void _Script_Engine::InterpGroup::set_bIsParented(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::InterpGroup::get_bIsSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 16 != 0;
}
void _Script_Engine::InterpGroup::set_bIsSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpGroup");
    return result;
}
