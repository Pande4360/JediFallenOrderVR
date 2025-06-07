#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameUserSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xf0]; public:
    bool get_bUseVSync();
    void set_bUseVSync(bool value);
    bool get_bUseDynamicResolution();
    void set_bUseDynamicResolution(bool value);
    void* get_ResolutionSizeX();
    void* get_ResolutionSizeY();
    void* get_LastUserConfirmedResolutionSizeX();
    void* get_LastUserConfirmedResolutionSizeY();
    int32_t& get_WindowPosX();
    int32_t& get_WindowPosY();
    int32_t& get_FullscreenMode();
    int32_t& get_LastConfirmedFullscreenMode();
    int32_t& get_PreferredFullscreenMode();
    void* get_Version();
    int32_t& get_AudioQualityLevel();
    int32_t& get_LastConfirmedAudioQualityLevel();
    float& get_FrameRateLimit();
    int32_t& get_DesiredScreenWidth();
    bool get_bUseDesiredScreenHeight();
    void set_bUseDesiredScreenHeight(bool value);
    int32_t& get_DesiredScreenHeight();
    int32_t& get_LastUserConfirmedDesiredScreenWidth();
    int32_t& get_LastUserConfirmedDesiredScreenHeight();
    float& get_LastRecommendedScreenWidth();
    float& get_LastRecommendedScreenHeight();
    float& get_LastCPUBenchmarkResult();
    float& get_LastGPUBenchmarkResult();
    void* get_LastCPUBenchmarkSteps();
    void* get_LastGPUBenchmarkSteps();
    float& get_LastGPUBenchmarkMultiplier();
    bool get_bUseHDRDisplayOutput();
    void set_bUseHDRDisplayOutput(bool value);
    int32_t& get_HDRDisplayOutputNits();
    bool get_bIsSaveDirty();
    void set_bIsSaveDirty(bool value);
    void* get_OnGameUserSettingsUINeedsUpdate();
    static _Script_CoreUObject::Class* static_class();
    void ValidateSettings();
    bool SupportsHDRDisplayOutput();
    void SetVSyncEnabled(bool bEnable);
    void SetVisualEffectQuality(int32_t Value);
    void SetViewDistanceQuality(int32_t Value);
    void SetToDefaults();
    void SetTextureQuality(int32_t Value);
    void SetShadowQuality(int32_t Value);
    void SetScreenResolution(_Script_CoreUObject::IntPoint Resolution);
    void SetResolutionScaleValueEx(float NewScaleValue);
    void SetResolutionScaleValue(int32_t NewScaleValue);
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    void SetPostProcessingQuality(int32_t Value);
    void SetOverallScalabilityLevel(int32_t Value);
    void SetFullscreenMode(void* InFullscreenMode);
    void SetFrameRateLimit(float NewLimit);
    void SetFoliageQuality(int32_t Value);
    void SetDynamicResolutionEnabled(bool bEnable);
    void SetDisplayIndex(int32_t NewDisplayIndex);
    void SetBenchmarkFallbackValues();
    void SetAudioQualityLevel(int32_t QualityLevel);
    void SetAntiAliasingQuality(int32_t Value);
    void SaveSettings(_Script_CoreUObject::Object* WorldContext);
    void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);
    void RevertVideoMode();
    void ResetToCurrentSettings();
    void LoadSettings(bool bForceReload);
    bool IsVSyncEnabled();
    bool IsVSyncDirty();
    bool IsScreenResolutionDirty();
    bool IsHDREnabled();
    bool IsFullscreenModeDirty();
    bool IsDynamicResolutionEnabled();
    bool IsDynamicResolutionDirty();
    bool IsDirty();
    void IncreaseQuality(void* SettingsType);
    int32_t GetVisualEffectQuality();
    int32_t GetViewDistanceQuality();
    int32_t GetTextureQuality();
    int32_t GetShadowQuality();
    _Script_CoreUObject::IntPoint GetScreenResolution();
    void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue);
    void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue);
    float GetRecommendedResolutionScale();
    void* GetPreferredFullscreenMode();
    int32_t GetPostProcessingQuality();
    int32_t GetOverallScalabilityLevel();
    int32_t GetMaxDisplayIndex();
    _Script_CoreUObject::IntPoint GetLastConfirmedScreenResolution();
    void* GetLastConfirmedFullscreenMode();
    _Script_Engine::GameUserSettings* GetGameUserSettings();
    void* GetFullscreenMode();
    float GetFrameRateLimit();
    int32_t GetFoliageQuality();
    void* GetDisplayName(int32_t DisplayIndex);
    int32_t GetDisplayIndex();
    _Script_CoreUObject::IntPoint GetDesktopResolution();
    _Script_CoreUObject::IntPoint GetDefaultWindowPosition();
    void* GetDefaultWindowMode();
    float GetDefaultResolutionScale();
    _Script_CoreUObject::IntPoint GetDefaultResolution();
    int32_t GetCurrentHDRDisplayNits();
    int32_t GetAudioQualityLevel();
    int32_t GetAntiAliasingQuality();
    void EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits);
    void DecreaseQuality(void* SettingsType);
    void ConfirmVideoMode();
    void ApplySettings(_Script_CoreUObject::Object* WorldContext, bool bCheckForCommandLineOverrides);
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    void ApplyNonResolutionSettings();
    void ApplyHardwareBenchmarkResults();
}; // Size: 0x118
#pragma pack(pop)
}
