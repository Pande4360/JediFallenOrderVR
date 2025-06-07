#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicsVolume.hpp"
#include "Volume.hpp"
int32_t& _Script_Engine::PhysicsVolume::get_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x39c);
}
float& _Script_Engine::PhysicsVolume::get_TerminalVelocity() {
    return *(float*)((uintptr_t)this + 0x398);
}
float& _Script_Engine::PhysicsVolume::get_FluidFriction() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
bool _Script_Engine::PhysicsVolume::get_bWaterVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a4 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsVolume");
    return result;
}
void _Script_Engine::PhysicsVolume::set_bWaterVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsVolume::get_bPhysicsOnContact() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a4 + 0)) & 2 != 0;
}
void _Script_Engine::PhysicsVolume::set_bPhysicsOnContact(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
