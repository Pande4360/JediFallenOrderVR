#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\Skeleton.hpp"
#include "RsIKCharacterDefinition.hpp"
bool _Script_RsGameTechRT::RsIKCharacterDefinition::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKCharacterDefinition::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsIKCharacterDefinition::get_bRotationEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsIKCharacterDefinition::get_DisabledNavStates() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_RsGameTechRT::RsIKCharacterDefinition::set_bRotationEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsIKCharacterDefinition::get_HangingNavStates() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_RsGameTechRT::RsIKCharacterDefinition::get_bOffsetEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsIKCharacterDefinition::get_NoHipOffsetNavStates() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_RsGameTechRT::RsIKCharacterDefinition::set_bOffsetEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_ActiveBlendInTime() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_ActiveBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_MinLegBendAngleIdle() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_MinLegBendAngleMoving() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_MinLegBendAngleBlendTime() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_HipsOffsetBlendSpeed() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_HipsOffsetBlendSpeedHanging() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_MaxHipsDistFromLowestFoot() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_HangingMaxHipsDistFromFurthestHand() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_MaxFootDeltaDiff() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_RsGameTechRT::RsIKCharacterDefinition::get_MaxDistanceFactorThreshold() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_RsGameTechRT::RsIKCharacterDefinition::get_HipBone() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_RsGameTechRT::RsIKCharacterDefinition::get_IkBones() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_RsGameTechRT::RsIKCharacterDefinition::get_Behaviors() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_Engine::Skeleton*& _Script_RsGameTechRT::RsIKCharacterDefinition::get_Skeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKCharacterDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKCharacterDefinition");
    return result;
}
