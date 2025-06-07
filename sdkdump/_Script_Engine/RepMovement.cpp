#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RepMovement.hpp"
void* _Script_Engine::RepMovement::get_Location() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::RepMovement::get_LinearVelocity() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RepMovement::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0xc);
}
void _Script_Engine::RepMovement::set_bRepPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::RepMovement::get_Rotation() {
    return (void*)((uintptr_t)this + 0x24);
}
bool _Script_Engine::RepMovement::get_bSimulatedPhysicSleep() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::RepMovement::set_bSimulatedPhysicSleep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RepMovement::get_bRepPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void* _Script_Engine::RepMovement::get_LocationQuantizationLevel() {
    return (void*)((uintptr_t)this + 0x31);
}
void* _Script_Engine::RepMovement::get_VelocityQuantizationLevel() {
    return (void*)((uintptr_t)this + 0x32);
}
void* _Script_Engine::RepMovement::get_RotationQuantizationLevel() {
    return (void*)((uintptr_t)this + 0x33);
}
_Script_CoreUObject::Class* _Script_Engine::RepMovement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RepMovement");
    return result;
}
