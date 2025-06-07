#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "RsAnimMarkupData.hpp"
#include "RsGameAnimInstance.hpp"
#include "RsIKDisableIKModifier.hpp"
#include "RsIKModifier.hpp"
#include "RsIKOverride.hpp"
#include "RsIKOverrideModifier.hpp"
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
float& _Script_RsGameTechRT::RsGameAnimInstance::get_TargetAimYaw() {
    return *(float*)((uintptr_t)this + 0x7ac);
}
bool _Script_RsGameTechRT::RsGameAnimInstance::get_bHasLookAtTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsGameAnimInstance::set_bHasLookAtTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t _Script_RsGameTechRT::RsGameAnimInstance::AddIKModifier(_Script_RsGameTechRT::RsIKModifier* Modifier) {
    return;
}
float& _Script_RsGameTechRT::RsGameAnimInstance::get_LookAtYaw() {
    return *(float*)((uintptr_t)this + 0x7a4);
}
_Script_Engine::DataTable*& _Script_RsGameTechRT::RsGameAnimInstance::get_AnimationMarkupTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x7d8);
}
float& _Script_RsGameTechRT::RsGameAnimInstance::get_CheapIkHipsBlendSpeed() {
    return *(float*)((uintptr_t)this + 0x7c0);
}
float& _Script_RsGameTechRT::RsGameAnimInstance::get_LookAtPitch() {
    return *(float*)((uintptr_t)this + 0x7a8);
}
float& _Script_RsGameTechRT::RsGameAnimInstance::get_TargetAimPitch() {
    return *(float*)((uintptr_t)this + 0x7b0);
}
void* _Script_RsGameTechRT::RsGameAnimInstance::get_CheapIkHipBoneName() {
    return (void*)((uintptr_t)this + 0x7b8);
}
bool _Script_RsGameTechRT::RsGameAnimInstance::get_bCanEverDoCheapIk() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsGameAnimInstance::set_bCanEverDoCheapIk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsIKOverrideModifier* _Script_RsGameTechRT::RsGameAnimInstance::AddIkOverride(_Script_RsGameTechRT::RsIKOverride& IkOverride) {
    return;
}
float& _Script_RsGameTechRT::RsGameAnimInstance::get_CheapIkTraceDistance() {
    return *(float*)((uintptr_t)this + 0x7c8);
}
float& _Script_RsGameTechRT::RsGameAnimInstance::get_CheapIkComponentOffset() {
    return *(float*)((uintptr_t)this + 0x7cc);
}
void* _Script_RsGameTechRT::RsGameAnimInstance::get_CurrentCombatState() {
    return (void*)((uintptr_t)this + 0x7d0);
}
bool _Script_RsGameTechRT::RsGameAnimInstance::get_bIsInWater() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d1 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsGameAnimInstance::set_bIsInWater(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsGameAnimInstance::get_IkState() {
    return (void*)((uintptr_t)this + 0x7e0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGameAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGameAnimInstance");
    return result;
}
void _Script_RsGameTechRT::RsGameAnimInstance::SetOverrideIkOffsetForNextTopologyActivation(_Script_CoreUObject::Vector& Offset) {
    return;
}
int32_t _Script_RsGameTechRT::RsGameAnimInstance::RemoveIKModifier(_Script_RsGameTechRT::RsIKModifier* Modifier) {
    return;
}
_Script_RsGameTechRT::RsIKDisableIKModifier* _Script_RsGameTechRT::RsGameAnimInstance::AddDisableIkModifier(void*& BonesToDisable) {
    return;
}
bool _Script_RsGameTechRT::RsGameAnimInstance::GetSlotAnimMarkupInfoByAnimName(void* AnimName, _Script_RsGameTechRT::RsAnimMarkupData& AnimInfo) {
    return;
}
bool _Script_RsGameTechRT::RsGameAnimInstance::GetSlotAnimMarkupInfo(void* SlotName, bool bIsForTransition, void*& AnimName, _Script_RsGameTechRT::RsAnimMarkupData& AnimInfo) {
    return;
}
void _Script_RsGameTechRT::RsGameAnimInstance::ClearOverrideIkOffsetForNextTopologyActivation() {
    return;
}
_Script_RsGameTechRT::RsIKOverrideModifier* _Script_RsGameTechRT::RsGameAnimInstance::AddIkOverrideForDuration(_Script_RsGameTechRT::RsIKOverride& IkOverride, float Duration) {
    return;
}
