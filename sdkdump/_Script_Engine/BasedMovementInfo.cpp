#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BasedMovementInfo.hpp"
#include "PrimitiveComponent.hpp"
void _Script_Engine::BasedMovementInfo::set_bServerHasBaseComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BasedMovementInfo::get_Rotation() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::BasedMovementInfo::get_MovementBase() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x0);
}
void _Script_Engine::BasedMovementInfo::set_bRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BasedMovementInfo::get_Location() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::BasedMovementInfo::get_BoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::BasedMovementInfo::get_bServerHasBaseComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_Engine::BasedMovementInfo::get_bRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
bool _Script_Engine::BasedMovementInfo::get_bServerHasVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void _Script_Engine::BasedMovementInfo::set_bServerHasVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BasedMovementInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BasedMovementInfo");
    return result;
}
