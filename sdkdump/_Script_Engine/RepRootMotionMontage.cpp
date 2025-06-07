#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimMontage.hpp"
#include "PrimitiveComponent.hpp"
#include "RepRootMotionMontage.hpp"
void* _Script_Engine::RepRootMotionMontage::get_Rotation() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::RepRootMotionMontage::get_bIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::RepRootMotionMontage::set_bIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Script_Engine::RepRootMotionMontage::get_AnimMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RepRootMotionMontage::get_Position() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RepRootMotionMontage::get_Location() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::RepRootMotionMontage::get_MovementBaseBoneName() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::RepRootMotionMontage::get_MovementBase() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x30);
}
bool _Script_Engine::RepRootMotionMontage::get_bRelativePosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::RepRootMotionMontage::set_bRelativePosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RepRootMotionMontage::get_bRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void _Script_Engine::RepRootMotionMontage::set_bRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RepRootMotionMontage::get_AuthoritativeRootMotion() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::RepRootMotionMontage::get_Acceleration() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::RepRootMotionMontage::get_LinearVelocity() {
    return (void*)((uintptr_t)this + 0x14c);
}
_Script_CoreUObject::Class* _Script_Engine::RepRootMotionMontage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RepRootMotionMontage");
    return result;
}
