#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimUpdateRateParameters.hpp"
bool _Script_Engine::AnimUpdateRateParameters::get_bShouldUseMinLod() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 4 != 0;
}
void* _Script_Engine::AnimUpdateRateParameters::get_ShiftBucket() {
    return (void*)((uintptr_t)this + 0x1);
}
bool _Script_Engine::AnimUpdateRateParameters::get_bInterpolateSkippedFrames() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_Engine::AnimUpdateRateParameters::set_bInterpolateSkippedFrames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimUpdateRateParameters::get_bSkipUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 8 != 0;
}
bool _Script_Engine::AnimUpdateRateParameters::get_bShouldUseLodMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 2 != 0;
}
void _Script_Engine::AnimUpdateRateParameters::set_bShouldUseLodMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::AnimUpdateRateParameters::set_bShouldUseMinLod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::AnimUpdateRateParameters::set_bSkipUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::AnimUpdateRateParameters::get_bSkipEvaluation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 16 != 0;
}
void _Script_Engine::AnimUpdateRateParameters::set_bSkipEvaluation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
int32_t& _Script_Engine::AnimUpdateRateParameters::get_UpdateRate() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::AnimUpdateRateParameters::get_EvaluationRate() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::AnimUpdateRateParameters::get_TickedPoseOffestTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::AnimUpdateRateParameters::get_AdditionalTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::AnimUpdateRateParameters::get_BaseNonRenderedUpdateRate() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::AnimUpdateRateParameters::get_MaxEvalRateForInterpolation() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::AnimUpdateRateParameters::get_InterpolateSkippedFramesDistanceFactorThreshold() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::AnimUpdateRateParameters::get_BaseVisibleDistanceFactorThesholds() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::AnimUpdateRateParameters::get_LODToFrameSkipMap() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::AnimUpdateRateParameters::get_SkippedUpdateFrames() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
int32_t& _Script_Engine::AnimUpdateRateParameters::get_SkippedEvalFrames() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
_Script_CoreUObject::Class* _Script_Engine::AnimUpdateRateParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimUpdateRateParameters");
    return result;
}
