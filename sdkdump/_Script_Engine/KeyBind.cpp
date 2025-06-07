#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KeyBind.hpp"
void _Script_Engine::KeyBind::set_Alt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::KeyBind::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::KeyBind::get_Command() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::KeyBind::get_Control() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::KeyBind::set_Control(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::KeyBind::get_Alt() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 4 != 0;
}
void _Script_Engine::KeyBind::set_Shift(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::KeyBind::get_Shift() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
bool _Script_Engine::KeyBind::get_Cmd() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 8 != 0;
}
void _Script_Engine::KeyBind::set_Cmd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::KeyBind::get_bIgnoreCtrl() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 16 != 0;
}
void _Script_Engine::KeyBind::set_bIgnoreCtrl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::KeyBind::get_bIgnoreShift() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 32 != 0;
}
void _Script_Engine::KeyBind::set_bIgnoreShift(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::KeyBind::get_bIgnoreAlt() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 64 != 0;
}
void _Script_Engine::KeyBind::set_bIgnoreAlt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::KeyBind::get_bIgnoreCmd() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 128 != 0;
}
void _Script_Engine::KeyBind::set_bIgnoreCmd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::KeyBind::get_bDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::KeyBind::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KeyBind");
    return result;
}
void _Script_Engine::KeyBind::set_bDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
