#include "..\FUObjectArray.hpp"
#include "AimConstraintDescription.hpp"
#include "ConstraintDescriptionEx.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::AimConstraintDescription::get_LookUpTarget() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_AnimationCore::AimConstraintDescription::get_LookAt_Axis() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimationCore::AimConstraintDescription::get_LookUp_Axis() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_AnimationCore::AimConstraintDescription::get_bUseLookUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_AnimationCore::AimConstraintDescription::set_bUseLookUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::AimConstraintDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.AimConstraintDescription");
    return result;
}
