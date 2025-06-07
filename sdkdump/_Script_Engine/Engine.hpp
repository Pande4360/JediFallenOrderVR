#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Font;
}
namespace _Script_Engine {
struct GameUserSettings;
}
namespace _Script_Engine {
struct AssetManager;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct Material;
}
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_Engine {
struct GameViewportClient;
}
namespace _Script_Engine {
struct EngineCustomTimeStep;
}
namespace _Script_Engine {
struct TimecodeProvider;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Engine : public _Script_CoreUObject::Object {
    private: char pad_28[0xce8]; public:
    _Script_Engine::Font*& get_TinyFont();
    void* get_TinyFontName();
    _Script_Engine::Font*& get_SmallFont();
    void* get_SmallFontName();
    _Script_Engine::Font*& get_MediumFont();
    void* get_MediumFontName();
    _Script_Engine::Font*& get_LargeFont();
    void* get_LargeFontName();
    _Script_Engine::Font*& get_SubtitleFont();
    void* get_SubtitleFontName();
    void* get_AdditionalFonts();
    void* get_AdditionalFontNames();
    void* get_ConsoleClass();
    void* get_ConsoleClassName();
    void* get_GameViewportClientClass();
    void* get_GameViewportClientClassName();
    void* get_LocalPlayerClass();
    void* get_LocalPlayerClassName();
    void* get_WorldSettingsClass();
    void* get_WorldSettingsClassName();
    void* get_NavigationSystemClassName();
    void* get_NavigationSystemClass();
    void* get_NavigationSystemConfigClassName();
    void* get_NavigationSystemConfigClass();
    void* get_AvoidanceManagerClassName();
    void* get_AvoidanceManagerClass();
    void* get_PhysicsCollisionHandlerClass();
    void* get_PhysicsCollisionHandlerClassName();
    void* get_GameUserSettingsClassName();
    void* get_GameUserSettingsClass();
    void* get_AIControllerClassName();
    _Script_Engine::GameUserSettings*& get_GameUserSettings();
    void* get_LevelScriptActorClass();
    void* get_LevelScriptActorClassName();
    void* get_DefaultBlueprintBaseClassName();
    void* get_GameSingletonClassName();
    _Script_CoreUObject::Object*& get_GameSingleton();
    void* get_AssetManagerClassName();
    _Script_Engine::AssetManager*& get_AssetManager();
    _Script_Engine::Texture2D*& get_DefaultTexture();
    void* get_DefaultTextureName();
    _Script_Engine::Texture*& get_DefaultDiffuseTexture();
    void* get_DefaultDiffuseTextureName();
    _Script_Engine::Texture2D*& get_DefaultBSPVertexTexture();
    void* get_DefaultBSPVertexTextureName();
    _Script_Engine::Texture2D*& get_HighFrequencyNoiseTexture();
    void* get_HighFrequencyNoiseTextureName();
    _Script_Engine::Texture2D*& get_DefaultBokehTexture();
    void* get_DefaultBokehTextureName();
    _Script_Engine::Texture2D*& get_DefaultBloomKernelTexture();
    void* get_DefaultBloomKernelTextureName();
    _Script_Engine::Material*& get_WireframeMaterial();
    void* get_WireframeMaterialName();
    _Script_Engine::Material*& get_DebugMeshMaterial();
    void* get_DebugMeshMaterialName();
    _Script_Engine::Material*& get_LevelColorationLitMaterial();
    void* get_LevelColorationLitMaterialName();
    _Script_Engine::Material*& get_LevelColorationUnlitMaterial();
    void* get_LevelColorationUnlitMaterialName();
    _Script_Engine::Material*& get_LightingTexelDensityMaterial();
    void* get_LightingTexelDensityName();
    _Script_Engine::Material*& get_ShadedLevelColorationLitMaterial();
    void* get_ShadedLevelColorationLitMaterialName();
    _Script_Engine::Material*& get_ShadedLevelColorationUnlitMaterial();
    void* get_ShadedLevelColorationUnlitMaterialName();
    _Script_Engine::Material*& get_SimpleTranslucentMaterial();
    void* get_SimpleTranslucentMaterialName();
    _Script_Engine::Texture2D*& get_FilmGrainTexture();
    void* get_FilmGrainTextureName();
    _Script_Engine::Material*& get_RemoveSurfaceMaterial();
    void* get_RemoveSurfaceMaterialName();
    _Script_Engine::Material*& get_VertexColorMaterial();
    void* get_VertexColorMaterialName();
    _Script_Engine::Material*& get_VertexColorViewModeMaterial_ColorOnly();
    void* get_VertexColorViewModeMaterialName_ColorOnly();
    _Script_Engine::Material*& get_VertexColorViewModeMaterial_AlphaAsColor();
    void* get_VertexColorViewModeMaterialName_AlphaAsColor();
    _Script_Engine::Material*& get_VertexColorViewModeMaterial_RedOnly();
    void* get_VertexColorViewModeMaterialName_RedOnly();
    _Script_Engine::Material*& get_VertexColorViewModeMaterial_GreenOnly();
    void* get_VertexColorViewModeMaterialName_GreenOnly();
    _Script_Engine::Material*& get_VertexColorViewModeMaterial_BlueOnly();
    void* get_VertexColorViewModeMaterialName_BlueOnly();
    void* get_DebugEditorMaterialName();
    _Script_Engine::Material*& get_ConstraintLimitMaterial();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialX();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialXAxis();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialY();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialYAxis();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialZ();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialZAxis();
    _Script_Engine::MaterialInstanceDynamic*& get_ConstraintLimitMaterialPrismatic();
    _Script_Engine::Material*& get_InvalidLightmapSettingsMaterial();
    void* get_InvalidLightmapSettingsMaterialName();
    _Script_Engine::Material*& get_PreviewShadowsIndicatorMaterial();
    void* get_PreviewShadowsIndicatorMaterialName();
    _Script_Engine::Material*& get_ArrowMaterial();
    void* get_ArrowMaterialName();
    void* get_LightingOnlyBrightness();
    void* get_ShaderComplexityColors();
    void* get_QuadComplexityColors();
    void* get_LightComplexityColors();
    void* get_StationaryLightOverlapColors();
    void* get_LODColorationColors();
    void* get_HLODColorationColors();
    void* get_StreamingAccuracyColors();
    float& get_MaxPixelShaderAdditiveComplexityCount();
    float& get_MaxES2PixelShaderAdditiveComplexityCount();
    float& get_MaxES3PixelShaderAdditiveComplexityCount();
    float& get_MinLightMapDensity();
    float& get_IdealLightMapDensity();
    float& get_MaxLightMapDensity();
    bool get_bRenderLightMapDensityGrayscale();
    void set_bRenderLightMapDensityGrayscale(bool value);
    float& get_RenderLightMapDensityGrayscaleScale();
    float& get_RenderLightMapDensityColorScale();
    void* get_LightMapDensityVertexMappedColor();
    void* get_LightMapDensitySelectedColor();
    void* get_StatColorMappings();
    _Script_Engine::PhysicalMaterial*& get_DefaultPhysMaterial();
    void* get_DefaultPhysMaterialName();
    void* get_ActiveGameNameRedirects();
    void* get_ActiveClassRedirects();
    void* get_ActivePluginRedirects();
    void* get_ActiveStructRedirects();
    _Script_Engine::Texture2D*& get_PreIntegratedSkinBRDFTexture();
    void* get_PreIntegratedSkinBRDFTextureName();
    _Script_Engine::Texture2D*& get_MiniFontTexture();
    void* get_MiniFontTextureName();
    _Script_Engine::Texture*& get_WeightMapPlaceholderTexture();
    void* get_WeightMapPlaceholderTextureName();
    _Script_Engine::Texture2D*& get_LightMapDensityTexture();
    void* get_LightMapDensityTextureName();
    float& get_MaxTextureAdditiveComplexityCount();
    void* get_TextureComplexityColors();
    _Script_Engine::GameViewportClient*& get_GameViewport();
    void* get_DeferredCommands();
    int32_t& get_TickCycles();
    int32_t& get_GameCycles();
    int32_t& get_ClientCycles();
    float& get_NearClipPlane();
    bool get_bHardwareSurveyEnabled();
    void set_bHardwareSurveyEnabled(bool value);
    bool get_bSubtitlesEnabled();
    void set_bSubtitlesEnabled(bool value);
    bool get_bSubtitlesForcedOff();
    void set_bSubtitlesForcedOff(bool value);
    int32_t& get_MaximumLoopIterationCount();
    bool get_bCanBlueprintsTickByDefault();
    void set_bCanBlueprintsTickByDefault(bool value);
    bool get_bOptimizeAnimBlueprintMemberVariableAccess();
    void set_bOptimizeAnimBlueprintMemberVariableAccess(bool value);
    bool get_bAllowMultiThreadedAnimationUpdate();
    void set_bAllowMultiThreadedAnimationUpdate(bool value);
    bool get_bEnableEditorPSysRealtimeLOD();
    void set_bEnableEditorPSysRealtimeLOD(bool value);
    bool get_bSmoothFrameRate();
    void set_bSmoothFrameRate(bool value);
    bool get_bUseFixedFrameRate();
    void set_bUseFixedFrameRate(bool value);
    float& get_FixedFrameRate();
    void* get_SmoothedFrameRateRange();
    float& get_MaxDeltaTime();
    _Script_Engine::EngineCustomTimeStep*& get_DefaultCustomTimeStep();
    _Script_Engine::EngineCustomTimeStep*& get_CurrentCustomTimeStep();
    void* get_CustomTimeStepClassName();
    _Script_Engine::TimecodeProvider*& get_DefaultTimecodeProvider();
    _Script_Engine::TimecodeProvider*& get_CustomTimecodeProvider();
    void* get_DefaultTimecodeProviderClassName();
    void* get_TimecodeProviderClassName();
    void* get_DefaultTimecodeFrameRate();
    bool get_bCheckForMultiplePawnsSpawnedInAFrame();
    void set_bCheckForMultiplePawnsSpawnedInAFrame(bool value);
    int32_t& get_NumPawnsAllowedToBeSpawnedInAFrame();
    bool get_bShouldGenerateLowQualityLightmaps();
    void set_bShouldGenerateLowQualityLightmaps(bool value);
    void* get_C_WorldBox();
    void* get_C_BrushWire();
    void* get_C_AddWire();
    void* get_C_SubtractWire();
    void* get_C_SemiSolidWire();
    void* get_C_NonSolidWire();
    void* get_C_WireBackground();
    void* get_C_ScaleBoxHi();
    void* get_C_VolumeCollision();
    void* get_C_BSPCollision();
    void* get_C_OrthoBackground();
    void* get_C_Volume();
    void* get_C_BrushShape();
    float& get_StreamingDistanceFactor();
    void* get_GameScreenshotSaveDirectory();
    void* get_TransitionType();
    void* get_TransitionDescription();
    void* get_TransitionGameMode();
    float& get_MeshLODRange();
    bool get_bAllowMatureLanguage();
    void set_bAllowMatureLanguage(bool value);
    float& get_CameraRotationThreshold();
    float& get_CameraTranslationThreshold();
    float& get_PrimitiveProbablyVisibleTime();
    float& get_MaxOcclusionPixelsFraction();
    bool get_bPauseOnLossOfFocus();
    void set_bPauseOnLossOfFocus(bool value);
    int32_t& get_MaxParticleResize();
    int32_t& get_MaxParticleResizeWarn();
    void* get_PendingDroppedNotes();
    float& get_NetClientTicksPerSecond();
    float& get_DisplayGamma();
    float& get_MinDesiredFrameRate();
    void* get_DefaultSelectedMaterialColor();
    void* get_SelectedMaterialColor();
    void* get_SelectionOutlineColor();
    void* get_SubduedSelectionOutlineColor();
    void* get_SelectedMaterialColorOverride();
    bool get_bIsOverridingSelectedColor();
    void set_bIsOverridingSelectedColor(bool value);
    bool get_bEnableOnScreenDebugMessages();
    void set_bEnableOnScreenDebugMessages(bool value);
    bool get_bEnableOnScreenDebugMessagesDisplay();
    void set_bEnableOnScreenDebugMessagesDisplay(bool value);
    bool get_bSuppressMapWarnings();
    void set_bSuppressMapWarnings(bool value);
    bool get_bDisableAILogging();
    void set_bDisableAILogging(bool value);
    void* get_bEnableVisualLogRecordingOnStart();
    int32_t& get_ScreenSaverInhibitorSemaphore();
    bool get_bLockReadOnlyLevels();
    void set_bLockReadOnlyLevels(bool value);
    void* get_ParticleEventManagerClassPath();
    float& get_SelectionHighlightIntensity();
    float& get_SelectionMeshSectionHighlightIntensity();
    float& get_BSPSelectionHighlightIntensity();
    float& get_HoverHighlightIntensity();
    float& get_SelectionHighlightIntensityBillboards();
    _Script_CoreUObject::Object*& get_DefaultDamageFromPhysicsCollision();
    _Script_Engine::PhysicalMaterial*& get_DefaultPhysicalMaterialForPhysicalAnimation();
    void* get_NetDriverDefinitions();
    void* get_ServerActors();
    void* get_RuntimeServerActors();
    bool get_bStartedLoadMapMovie();
    void set_bStartedLoadMapMovie(bool value);
    int32_t& get_NextWorldContextHandle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd10
#pragma pack(pop)
}
