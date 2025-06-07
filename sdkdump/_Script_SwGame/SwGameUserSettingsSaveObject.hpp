#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SaveGame.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGameUserSettingsSaveObject : public _Script_Engine::SaveGame {
    private: char pad_28[0xc8]; public:
    void* get_ResolutionSizeX();
    void* get_ResolutionSizeY();
    int32_t& get_FullscreenMode();
    int32_t& get_OverallScalabilityQuality();
    int32_t& get_ViewDistanceQuality();
    int32_t& get_ShadowQuality();
    int32_t& get_AntiAliasingQuality();
    int32_t& get_TextureQuality();
    int32_t& get_VisualEffectsQuality();
    int32_t& get_PostProcessingQuality();
    int32_t& get_FoliageQuality();
    bool get_bIsMotionBlurEnabled();
    void set_bIsMotionBlurEnabled(bool value);
    bool get_bIsFilmGrainEnabled();
    void set_bIsFilmGrainEnabled(bool value);
    bool get_bIsChromaticAberrationEnabled();
    void set_bIsChromaticAberrationEnabled(bool value);
    bool get_bIsVSyncEnabled();
    void set_bIsVSyncEnabled(bool value);
    float& get_Gamma();
    void* get_DeficiencyType();
    int32_t& get_DeficiencySeverity();
    void* get_ActionRemappings();
    void* get_AxisRemappings();
    bool get_bIsControllerRumbleDisabled();
    void set_bIsControllerRumbleDisabled(bool value);
    float& get_CameraShakeMultiplier();
    bool get_bIsAutoSucceedButtonMashEnabled();
    void set_bIsAutoSucceedButtonMashEnabled(bool value);
    bool get_bIsAutoTargetOnHitEnabled();
    void set_bIsAutoTargetOnHitEnabled(bool value);
    bool get_bIsPhotomodeButtonEnabled();
    void set_bIsPhotomodeButtonEnabled(bool value);
    bool get_bIsPerformanceModeEnabled();
    void set_bIsPerformanceModeEnabled(bool value);
    void* get_OverrideCustomSettingsInt();
    void* get_OverrideCustomSettingsBool();
    void* get_OverrideCustomSettingsFloat();
    void* get_OverrideCustomSettingsString();
    bool get_bIsEULAAccepted();
    void set_bIsEULAAccepted(bool value);
    float& get_HDRBrightness();
    bool get_bDynamicResolution();
    void set_bDynamicResolution(bool value);
    int32_t& get_MaxFPS();
    int32_t& get_DisplayIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
