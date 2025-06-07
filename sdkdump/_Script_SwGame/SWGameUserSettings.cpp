#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\GameUserSettings.hpp"
#include "SWGameUserSettings.hpp"
#include "SwGameUserSettingsSaveObject.hpp"
void* _Script_SwGame::SWGameUserSettings::get_OverridenDefaultKeybindings() {
    return (void*)((uintptr_t)this + 0x138);
}
int32_t _Script_SwGame::SWGameUserSettings::GetTargetFPS() {
    return;
}
void* _Script_SwGame::SWGameUserSettings::get_OnGameUserSettingsReloaded() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_SwGame::SwGameUserSettingsSaveObject*& _Script_SwGame::SWGameUserSettings::get_SaveObject() {
    return *(_Script_SwGame::SwGameUserSettingsSaveObject**)((uintptr_t)this + 0x128);
}
_Script_SwGame::SwGameUserSettingsSaveObject*& _Script_SwGame::SWGameUserSettings::get_DefaultObject() {
    return *(_Script_SwGame::SwGameUserSettingsSaveObject**)((uintptr_t)this + 0x130);
}
bool _Script_SwGame::SWGameUserSettings::IsPerformanceModeEnabled() {
    return;
}
int32_t& _Script_SwGame::SWGameUserSettings::get_DeficiencySeverity() {
    return *(int32_t*)((uintptr_t)this + 0x158);
}
int32_t& _Script_SwGame::SWGameUserSettings::get_UserIndex() {
    return *(int32_t*)((uintptr_t)this + 0x148);
}
void* _Script_SwGame::SWGameUserSettings::get_DeficiencyType() {
    return (void*)((uintptr_t)this + 0x154);
}
float _Script_SwGame::SWGameUserSettings::GetHDRBrightness() {
    return;
}
float& _Script_SwGame::SWGameUserSettings::get_Gamma() {
    return *(float*)((uintptr_t)this + 0x150);
}
void* _Script_SwGame::SWGameUserSettings::get_CustomSettingsInt() {
    return (void*)((uintptr_t)this + 0x160);
}
bool _Script_SwGame::SWGameUserSettings::IsChromaticAberrationEnabled() {
    return;
}
void* _Script_SwGame::SWGameUserSettings::get_CustomSettingsBool() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::SWGameUserSettings::get_CustomSettingsFloat() {
    return (void*)((uintptr_t)this + 0x180);
}
void _Script_SwGame::SWGameUserSettings::ClearLastLoadCorrupt() {
    return;
}
void* _Script_SwGame::SWGameUserSettings::get_CustomSettingsString() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Class* _Script_SwGame::SWGameUserSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SWGameUserSettings");
    return result;
}
bool _Script_SwGame::SWGameUserSettings::WasLastLoadCorrupt() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsMotionBlurEnabled() {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetTargetFPS(int32_t NewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetPhotomodeButtonEnabled(bool bNewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetPerformanceModeEnabled(bool bNewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetMotionBlurEnabled(bool bNewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetHDRBrightness(float NewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetGammaValue(float NewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetFilmGrainEnabled(bool bNewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetCustomUserSettings_String(void* SettingsName, void* Data) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsPerformanceModeAvailable() {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetCustomUserSettings_Int(void* SettingsName, int32_t Data) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetCustomUserSettings_Float(void* SettingsName, float Data) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetCustomUserSettings_Bool(void* SettingsName, bool Data) {
    return;
}
void* _Script_SwGame::SWGameUserSettings::GetColorDeficiencyType() {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetControllerRumble(bool bIsEnabled) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetColorDeficiencyType(void* NewColorDeficiencyType) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetDefaultSettings_Bool(void* SettingsName, bool& OutData) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetColorDeficiencySeverity(int32_t NewColorDeficiencySeverity) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetChromaticAberrationEnabled(bool bNewValue) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetCameraShakeMultiplier(float CameraShakeMultiplier) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetAutoTargetOnHit(bool bNewValue) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetCustomUserSettings_Bool(void* SettingsName, bool& OutData) {
    return;
}
void _Script_SwGame::SWGameUserSettings::SetAutoSucceedButtonMashEnabled(bool bNewValue) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsFilmGrainEnabled() {
    return;
}
void _Script_SwGame::SWGameUserSettings::ResetAllActionMappings(void* InputGroup) {
    return;
}
void _Script_SwGame::SWGameUserSettings::ReplaceAxisMappings(void* AxisName, void*& NewMappings) {
    return;
}
void _Script_SwGame::SWGameUserSettings::ReplaceActionMapping(void* ActionName, void*& NewMappings) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsPhotomodeButtonEnabled() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsGammaDirty() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsEULAAccepted() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsControllerRumbleEnabled() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsAutoTargetOnHitEnabled() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::IsAutoSucceedButtonMashEnabled() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetCustomUserSettings_Int(void* SettingsName, int32_t& OutData) {
    return;
}
_Script_SwGame::SWGameUserSettings* _Script_SwGame::SWGameUserSettings::GetSWGameUserSettings() {
    return;
}
float _Script_SwGame::SWGameUserSettings::GetGamma() {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetDefaultSettings_String(void* SettingsName, void*& OutData) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetDefaultSettings_Int(void* SettingsName, int32_t& OutData) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetDefaultSettings_Float(void* SettingsName, float& OutData) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetCustomUserSettings_String(void* SettingsName, void*& OutData) {
    return;
}
bool _Script_SwGame::SWGameUserSettings::GetCustomUserSettings_Float(void* SettingsName, float& OutData) {
    return;
}
int32_t _Script_SwGame::SWGameUserSettings::GetColorDeficiencySeverity() {
    return;
}
float _Script_SwGame::SWGameUserSettings::GetCameraShakeMultiplier() {
    return;
}
void _Script_SwGame::SWGameUserSettings::ApplyMappings() {
    return;
}
void _Script_SwGame::SWGameUserSettings::AcceptEULA(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
