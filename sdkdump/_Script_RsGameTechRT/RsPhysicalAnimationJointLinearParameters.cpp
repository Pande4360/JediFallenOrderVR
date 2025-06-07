#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationJointLinearParameters.hpp"
void* _Script_RsGameTechRT::RsPhysicalAnimationJointLinearParameters::get_ConstraintBone1() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationJointLinearParameters::get_EnableLinearDrive() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsPhysicalAnimationJointLinearParameters::get_ConstraintBone2() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_RsGameTechRT::RsPhysicalAnimationJointLinearParameters::set_EnableLinearDrive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationJointLinearParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationJointLinearParameters");
    return result;
}
