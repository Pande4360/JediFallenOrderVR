#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputActionKeyMapping.hpp"
void* _Script_Engine::InputActionKeyMapping::get_ActionName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::InputActionKeyMapping::get_bShift() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
bool _Script_Engine::InputActionKeyMapping::get_bCmd() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 8 != 0;
}
void _Script_Engine::InputActionKeyMapping::set_bShift(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InputActionKeyMapping::get_bCtrl() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_Engine::InputActionKeyMapping::set_bCtrl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::InputActionKeyMapping::get_bAlt() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 4 != 0;
}
void _Script_Engine::InputActionKeyMapping::set_bAlt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::InputActionKeyMapping::set_bCmd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::InputActionKeyMapping::get_Key() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::InputActionKeyMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputActionKeyMapping");
    return result;
}
