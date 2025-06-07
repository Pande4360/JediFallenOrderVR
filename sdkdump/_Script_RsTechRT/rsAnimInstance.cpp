#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "RsScriptVariable.hpp"
#include "rsActor.hpp"
#include "rsAnimInstance.hpp"
bool _Script_RsTechRT::rsAnimInstance::MotionSampleIsLessThan(void* motionSample, float V) {
    return;
}
float& _Script_RsTechRT::rsAnimInstance::get_CinematicBlendInterp() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
bool _Script_RsTechRT::rsAnimInstance::MotionSampleIsInRange(void* motionSample, float RangeMin, float RangeMax) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::get_bIsOnLeftFoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ac + 0)) & 1 != 0;
}
void _Script_RsTechRT::rsAnimInstance::set_bIsOnLeftFoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::rsAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.rsAnimInstance");
    return result;
}
_Script_RsTechRT::rsActor* _Script_RsTechRT::rsAnimInstance::TryGetRsActorOwner() {
    return;
}
void _Script_RsTechRT::rsAnimInstance::SetIsSyncing(bool IsSyncing) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::MotionSampleIsGreaterThan(void* motionSample, float V) {
    return;
}
void _Script_RsTechRT::rsAnimInstance::LockMotionSample(void* motionSample, bool Lock) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::IsSyncing() {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::IsSlotActive(void* SlotName) {
    return;
}
_Script_CoreUObject::Rotator _Script_RsTechRT::rsAnimInstance::GetRootMotionRotation() {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::IgnoreMotionSampleOrIsLessThan(void* motionSample, float V, float ignoreValue, bool ignoredReturn) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::IgnoreMotionSampleOrIsInRange(void* motionSample, float RangeMin, float RangeMax, float ignoreValue, bool ignoredReturn) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::IgnoreMotionSampleOrIsGreaterThan(void* motionSample, float V, float ignoreValue, bool ignoredReturn) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::GetVariableAsInteger(int32_t& Value, _Script_RsTechRT::RsScriptVariable& Variable) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::GetVariableAsFloat(float& Value, _Script_RsTechRT::RsScriptVariable& Variable) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::GetVariableAsBool(bool& Value, _Script_RsTechRT::RsScriptVariable& Variable) {
    return;
}
_Script_CoreUObject::Transform _Script_RsTechRT::rsAnimInstance::GetRootMotionTransform() {
    return;
}
void* _Script_RsTechRT::rsAnimInstance::GetRootMotionMode() {
    return;
}
float _Script_RsTechRT::rsAnimInstance::GetMotionSample(void* motionSample) {
    return;
}
void* _Script_RsTechRT::rsAnimInstance::GetAnimNamePlayingInSlot(void* SlotName) {
    return;
}
bool _Script_RsTechRT::rsAnimInstance::FindVariable(_Script_RsTechRT::RsScriptVariable& Variable, void* VariableName) {
    return;
}
