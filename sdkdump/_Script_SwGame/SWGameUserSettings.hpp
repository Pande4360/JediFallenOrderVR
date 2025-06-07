#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameUserSettings.hpp"
namespace _Script_SwGame {
struct SwGameUserSettingsSaveObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SWGameUserSettings : public _Script_Engine::GameUserSettings {
    private: char pad_118[0x88]; public:
    void* get_OnGameUserSettingsReloaded();
    _Script_SwGame::SwGameUserSettingsSaveObject*& get_SaveObject();
    _Script_SwGame::SwGameUserSettingsSaveObject*& get_DefaultObject();
    void* get_OverridenDefaultKeybindings();
    int32_t& get_UserIndex();
    float& get_Gamma();
    void* get_DeficiencyType();
    int32_t& get_DeficiencySeverity();
    void* get_CustomSettingsInt();
    void* get_CustomSettingsBool();
    void* get_CustomSettingsFloat();
    void* get_CustomSettingsString();
    static _Script_CoreUObject::Class* static_class();
    bool WasLastLoadCorrupt();
    void SetTargetFPS(int32_t NewValue);
    void SetPhotomodeButtonEnabled(bool bNewValue);
    void SetPerformanceModeEnabled(bool bNewValue);
    void SetMotionBlurEnabled(bool bNewValue);
    void SetHDRBrightness(float NewValue);
    void SetGammaValue(float NewValue);
    void SetFilmGrainEnabled(bool bNewValue);
    void SetCustomUserSettings_String(void* SettingsName, void* Data);
    void SetCustomUserSettings_Int(void* SettingsName, int32_t Data);
    void SetCustomUserSettings_Float(void* SettingsName, float Data);
    void SetCustomUserSettings_Bool(void* SettingsName, bool Data);
    void SetControllerRumble(bool bIsEnabled);
    void SetColorDeficiencyType(void* NewColorDeficiencyType);
    void SetColorDeficiencySeverity(int32_t NewColorDeficiencySeverity);
    void SetChromaticAberrationEnabled(bool bNewValue);
    void SetCameraShakeMultiplier(float CameraShakeMultiplier);
    void SetAutoTargetOnHit(bool bNewValue);
    void SetAutoSucceedButtonMashEnabled(bool bNewValue);
    void ResetAllActionMappings(void* InputGroup);
    void ReplaceAxisMappings(void* AxisName, void*& NewMappings);
    void ReplaceActionMapping(void* ActionName, void*& NewMappings);
    bool IsPhotomodeButtonEnabled();
    bool IsPerformanceModeEnabled();
    bool IsPerformanceModeAvailable();
    bool IsMotionBlurEnabled();
    bool IsGammaDirty();
    bool IsFilmGrainEnabled();
    bool IsEULAAccepted();
    bool IsControllerRumbleEnabled();
    bool IsChromaticAberrationEnabled();
    bool IsAutoTargetOnHitEnabled();
    bool IsAutoSucceedButtonMashEnabled();
    int32_t GetTargetFPS();
    _Script_SwGame::SWGameUserSettings* GetSWGameUserSettings();
    float GetHDRBrightness();
    float GetGamma();
    bool GetDefaultSettings_String(void* SettingsName, void*& OutData);
    bool GetDefaultSettings_Int(void* SettingsName, int32_t& OutData);
    bool GetDefaultSettings_Float(void* SettingsName, float& OutData);
    bool GetDefaultSettings_Bool(void* SettingsName, bool& OutData);
    bool GetCustomUserSettings_String(void* SettingsName, void*& OutData);
    bool GetCustomUserSettings_Int(void* SettingsName, int32_t& OutData);
    bool GetCustomUserSettings_Float(void* SettingsName, float& OutData);
    bool GetCustomUserSettings_Bool(void* SettingsName, bool& OutData);
    void* GetColorDeficiencyType();
    int32_t GetColorDeficiencySeverity();
    float GetCameraShakeMultiplier();
    void ClearLastLoadCorrupt();
    void ApplyMappings();
    void AcceptEULA(_Script_CoreUObject::Object* WorldContextObject);
}; // Size: 0x1a0
#pragma pack(pop)
}
