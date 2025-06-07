#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "RsIKAnimInstance.hpp"
#include "RsIKBoneTarget.hpp"
#include "RsIKCharacterDefinition.hpp"
void* _Script_RsGameTechRT::RsIKAnimInstance::get_Targets() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Script_RsGameTechRT::RsIKAnimInstance::get_bActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKAnimInstance::set_bActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKAnimInstance::get_AlphaMultiplier() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
_Script_RsGameTechRT::RsIKCharacterDefinition*& _Script_RsGameTechRT::RsIKAnimInstance::get_Definition() {
    return *(_Script_RsGameTechRT::RsIKCharacterDefinition**)((uintptr_t)this + 0x3b0);
}
void* _Script_RsGameTechRT::RsIKAnimInstance::get_Behaviors() {
    return (void*)((uintptr_t)this + 0x3c0);
}
float& _Script_RsGameTechRT::RsIKAnimInstance::get_MinLegBendAngle() {
    return *(float*)((uintptr_t)this + 0x3f4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKAnimInstance");
    return result;
}
_Script_RsGameTechRT::RsIKBoneTarget _Script_RsGameTechRT::RsIKAnimInstance::GetIKBoneTarget(void* BoneName) {
    return;
}
