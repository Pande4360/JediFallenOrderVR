#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintInstance.hpp"
void* _Script_Engine::ConstraintInstance::get_JointName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ConstraintInstance::get_Pos2() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::ConstraintInstance::get_ConstraintBone1() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::ConstraintInstance::get_PriAxis2() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::ConstraintInstance::get_ConstraintBone2() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::ConstraintInstance::get_Pos1() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ConstraintInstance::get_PriAxis1() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::ConstraintInstance::get_SecAxis1() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ConstraintInstance::get_SecAxis2() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::ConstraintInstance::get_AngularRotationOffset() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::ConstraintInstance::get_bScaleLinearLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
void _Script_Engine::ConstraintInstance::set_bScaleLinearLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ConstraintInstance::get_ProfileInstance() {
    return (void*)((uintptr_t)this + 0x8c);
}
_Script_CoreUObject::Class* _Script_Engine::ConstraintInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConstraintInstance");
    return result;
}
