#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimationCompressionParametersForPerTrackAlgorithm.hpp"
bool _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_bResampleAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_MaxZeroingThreshold() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_MaxPosDiffBitwise() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_MaxAngleDiffBitwise() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_MaxScaleDiffBitwise() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_AllowedRotationFormats() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsAnimationCompressionParametersForPerTrackAlgorithm");
    return result;
}
void* _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_AllowedTranslationFormats() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_AllowedScaleFormats() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::set_bResampleAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_ResampledFramerate() {
    return *(float*)((uintptr_t)this + 0x44);
}
int32_t& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_MinKeysForResampling() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_bUseAdaptiveError() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_ParentingDivisor() {
    return *(float*)((uintptr_t)this + 0x54);
}
void _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::set_bUseAdaptiveError(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_bUseOverrideForEndEffectors() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 2 != 0;
}
void _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::set_bUseOverrideForEndEffectors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_TrackHeightBias() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_ParentingDivisorExponent() {
    return *(float*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_bUseAdaptiveError2() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::set_bUseAdaptiveError2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_RotationErrorSourceRatio() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_TranslationErrorSourceRatio() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_ScaleErrorSourceRatio() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_MaxErrorPerTrackRatio() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_Engine::RsAnimationCompressionParametersForPerTrackAlgorithm::get_PerturbationProbeSize() {
    return *(float*)((uintptr_t)this + 0x70);
}
