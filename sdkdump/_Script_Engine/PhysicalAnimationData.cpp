#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicalAnimationData.hpp"
void* _Script_Engine::PhysicalAnimationData::get_BodyName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::PhysicalAnimationData::get_bIsLocalSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicalAnimationData::set_bIsLocalSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicalAnimationData::get_MaxLinearForce() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::PhysicalAnimationData::get_OrientationStrength() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::PhysicalAnimationData::get_AngularVelocityStrength() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::PhysicalAnimationData::get_PositionStrength() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::PhysicalAnimationData::get_VelocityStrength() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::PhysicalAnimationData::get_MaxAngularForce() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicalAnimationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PhysicalAnimationData");
    return result;
}
