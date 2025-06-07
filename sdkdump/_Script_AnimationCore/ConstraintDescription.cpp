#include "..\FUObjectArray.hpp"
#include "ConstraintDescription.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimationCore::ConstraintDescription::get_bRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_AnimationCore::ConstraintDescription::get_bTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_AnimationCore::ConstraintDescription::set_bRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimationCore::ConstraintDescription::set_bTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimationCore::ConstraintDescription::get_bScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_AnimationCore::ConstraintDescription::set_bScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimationCore::ConstraintDescription::set_bParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimationCore::ConstraintDescription::get_bParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void* _Script_AnimationCore::ConstraintDescription::get_TranslationAxes() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_AnimationCore::ConstraintDescription::get_RotationAxes() {
    return (void*)((uintptr_t)this + 0x7);
}
void* _Script_AnimationCore::ConstraintDescription::get_ScaleAxes() {
    return (void*)((uintptr_t)this + 0xa);
}
_Script_CoreUObject::Class* _Script_AnimationCore::ConstraintDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.ConstraintDescription");
    return result;
}
