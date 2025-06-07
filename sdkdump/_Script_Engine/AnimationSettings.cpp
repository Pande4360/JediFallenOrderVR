#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationSettings.hpp"
#include "DeveloperSettings.hpp"
int32_t& _Script_Engine::AnimationSettings::get_CompressCommandletVersion() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimationSettings::get_KeyEndEffectorsMatchNameArray() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::AnimationSettings::get_ForceRecompression() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
float& _Script_Engine::AnimationSettings::get_AlternativeCompressionThreshold() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AnimationSettings::get_DefaultCompressionAlgorithm() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::AnimationSettings::get_MaxCurveError() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::AnimationSettings::get_TranslationCompressionFormat() {
    return (void*)((uintptr_t)this + 0x59);
}
bool _Script_Engine::AnimationSettings::get_bTickAnimationOnSkeletalMeshInit() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d + 0)) & 1 != 0;
}
void* _Script_Engine::AnimationSettings::get_RotationCompressionFormat() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::AnimationSettings::set_ForceRecompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bOnlyCheckForMissingSkeletalMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bOnlyCheckForMissingSkeletalMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bForceBelowThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x66 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bForceBelowThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66 + 0);
    *(uint8_t*)((uintptr_t)this + 0x66 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bFirstRecompressUsingCurrentOrDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x67 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bFirstRecompressUsingCurrentOrDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x67 + 0);
    *(uint8_t*)((uintptr_t)this + 0x67 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bRaiseMaxErrorToExisting() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bRaiseMaxErrorToExisting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bTryExhaustiveSearch() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bTryExhaustiveSearch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bEnableSegmenting() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bEnableSegmenting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bEnablePerformanceLog() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bEnablePerformanceLog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bStripAnimationDataOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bStripAnimationDataOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AnimationSettings::set_bTickAnimationOnSkeletalMeshInit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationSettings::get_bAnimationCompressCommandletUseRespawnExtensions() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e + 0)) & 1 != 0;
}
void _Script_Engine::AnimationSettings::set_bAnimationCompressCommandletUseRespawnExtensions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimationSettings::get_RespawnAnimCompressCommandletAlgorithmParametersProfiles() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::AnimationSettings::get_RespawnAnimCompressCommandletGroups() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimationSettings");
    return result;
}
