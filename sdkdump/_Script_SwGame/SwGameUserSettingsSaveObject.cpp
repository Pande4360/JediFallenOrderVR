#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "SwGameUserSettingsSaveObject.hpp"
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_ResolutionSizeX() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_ResolutionSizeY() {
    return (void*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_ViewDistanceQuality() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsPhotomodeButtonEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x92 + 0)) & 1 != 0;
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_OverallScalabilityQuality() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_FullscreenMode() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwGameUserSettingsSaveObject::get_HDRBrightness() {
    return *(float*)((uintptr_t)this + 0xdc);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_ShadowQuality() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsPerformanceModeEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x93 + 0);
    *(uint8_t*)((uintptr_t)this + 0x93 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_TextureQuality() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_AntiAliasingQuality() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_VisualEffectsQuality() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_PostProcessingQuality() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_OverrideCustomSettingsString() {
    return (void*)((uintptr_t)this + 0xc8);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_FoliageQuality() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsMotionBlurEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsMotionBlurEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsFilmGrainEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bDynamicResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsFilmGrainEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsChromaticAberrationEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsChromaticAberrationEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsVSyncEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsVSyncEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwGameUserSettingsSaveObject::get_Gamma() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_DeficiencyType() {
    return (void*)((uintptr_t)this + 0x5c);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_DeficiencySeverity() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_ActionRemappings() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsAutoSucceedButtonMashEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_AxisRemappings() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsControllerRumbleDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsEULAAccepted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsControllerRumbleDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwGameUserSettingsSaveObject::get_CameraShakeMultiplier() {
    return *(float*)((uintptr_t)this + 0x8c);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsAutoSucceedButtonMashEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsAutoTargetOnHitEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsAutoTargetOnHitEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bIsPhotomodeButtonEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x92 + 0);
    *(uint8_t*)((uintptr_t)this + 0x92 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsPerformanceModeEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x93 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_OverrideCustomSettingsFloat() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_OverrideCustomSettingsInt() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SwGame::SwGameUserSettingsSaveObject::get_OverrideCustomSettingsBool() {
    return (void*)((uintptr_t)this + 0xa8);
}
bool _Script_SwGame::SwGameUserSettingsSaveObject::get_bIsEULAAccepted() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGameUserSettingsSaveObject::set_bDynamicResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_MaxFPS() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
int32_t& _Script_SwGame::SwGameUserSettingsSaveObject::get_DisplayIndex() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameUserSettingsSaveObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGameUserSettingsSaveObject");
    return result;
}
