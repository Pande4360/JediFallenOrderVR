#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AssetManager.hpp"
#include "Engine.hpp"
#include "EngineCustomTimeStep.hpp"
#include "Font.hpp"
#include "GameUserSettings.hpp"
#include "GameViewportClient.hpp"
#include "Material.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "PhysicalMaterial.hpp"
#include "Texture.hpp"
#include "Texture2D.hpp"
#include "TimecodeProvider.hpp"
void* _Script_Engine::Engine::get_PreviewShadowsIndicatorMaterialName() {
    return (void*)((uintptr_t)this + 0x588);
}
_Script_Engine::Font*& _Script_Engine::Engine::get_TinyFont() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x30);
}
_Script_Engine::Font*& _Script_Engine::Engine::get_LargeFont() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x90);
}
void* _Script_Engine::Engine::get_DefaultDiffuseTextureName() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_Engine::Engine::get_TinyFontName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::Engine::get_C_WorldBox() {
    return (void*)((uintptr_t)this + 0x864);
}
_Script_Engine::Font*& _Script_Engine::Engine::get_MediumFont() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x70);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_ShadedLevelColorationLitMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_DefaultBokehTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x330);
}
_Script_Engine::Font*& _Script_Engine::Engine::get_SmallFont() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0x50);
}
void* _Script_Engine::Engine::get_LightingTexelDensityName() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Script_Engine::Engine::get_bRenderLightMapDensityGrayscale() {
    return (*(uint8_t*)((uintptr_t)this + 0x658 + 0)) & 1 != 0;
}
void* _Script_Engine::Engine::get_DefaultBlueprintBaseClassName() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::Engine::get_SmallFontName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::Engine::get_MediumFontName() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::Engine::get_bLockReadOnlyLevels() {
    return (*(uint8_t*)((uintptr_t)this + 0x980 + 0)) & 1 != 0;
}
_Script_Engine::Material*& _Script_Engine::Engine::get_DebugMeshMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x388);
}
bool _Script_Engine::Engine::get_bEnableOnScreenDebugMessages() {
    return (*(uint8_t*)((uintptr_t)this + 0x970 + 0)) & 1 != 0;
}
void* _Script_Engine::Engine::get_LargeFontName() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_DefaultBloomKernelTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x350);
}
void _Script_Engine::Engine::set_bAllowMatureLanguage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x8dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Font*& _Script_Engine::Engine::get_SubtitleFont() {
    return *(_Script_Engine::Font**)((uintptr_t)this + 0xb0);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_LevelColorationLitMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::Engine::get_CustomTimeStepClassName() {
    return (void*)((uintptr_t)this + 0x7f8);
}
void* _Script_Engine::Engine::get_DefaultBokehTextureName() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_Engine::Engine::get_SubtitleFontName() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_VertexColorViewModeMaterial_GreenOnly() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x4d8);
}
void* _Script_Engine::Engine::get_AdditionalFonts() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::Engine::get_AdditionalFontNames() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::Engine::get_ShadedLevelColorationLitMaterialName() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void* _Script_Engine::Engine::get_ConsoleClass() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_DefaultBSPVertexTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2f0);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_LightingTexelDensityMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x3d8);
}
void* _Script_Engine::Engine::get_ConsoleClassName() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::Engine::get_C_OrthoBackground() {
    return (void*)((uintptr_t)this + 0x88c);
}
void* _Script_Engine::Engine::get_DeferredCommands() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void* _Script_Engine::Engine::get_RemoveSurfaceMaterialName() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_Engine::Engine::get_GameViewportClientClass() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::Engine::get_GameViewportClientClassName() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::Engine::get_LocalPlayerClass() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Engine::Engine::get_C_BSPCollision() {
    return (void*)((uintptr_t)this + 0x888);
}
void* _Script_Engine::Engine::get_LocalPlayerClassName() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::Engine::get_WireframeMaterialName() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::Engine::get_WorldSettingsClass() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::Engine::get_WorldSettingsClassName() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::Engine::get_NavigationSystemClassName() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_LevelColorationUnlitMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x3c0);
}
void* _Script_Engine::Engine::get_NavigationSystemClass() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::Engine::get_NavigationSystemConfigClassName() {
    return (void*)((uintptr_t)this + 0x198);
}
void _Script_Engine::Engine::set_bSmoothFrameRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_WireframeMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x370);
}
void* _Script_Engine::Engine::get_NavigationSystemConfigClass() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_Engine::Engine::get_AvoidanceManagerClassName() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_Engine::Engine::get_GameSingletonClassName() {
    return (void*)((uintptr_t)this + 0x270);
}
bool _Script_Engine::Engine::get_bShouldGenerateLowQualityLightmaps() {
    return (*(uint8_t*)((uintptr_t)this + 0x860 + 0)) & 1 != 0;
}
void* _Script_Engine::Engine::get_AvoidanceManagerClass() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_Engine::Engine::get_PhysicsCollisionHandlerClass() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_Engine::Engine::get_ActiveClassRedirects() {
    return (void*)((uintptr_t)this + 0x6c8);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_HighFrequencyNoiseTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x310);
}
bool _Script_Engine::Engine::get_bAllowMatureLanguage() {
    return (*(uint8_t*)((uintptr_t)this + 0x8dc + 0)) & 1 != 0;
}
void* _Script_Engine::Engine::get_LevelScriptActorClass() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_Engine::Engine::get_PhysicsCollisionHandlerClassName() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::Engine::get_GameUserSettingsClassName() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::Engine::get_DefaultPhysMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x698);
}
void* _Script_Engine::Engine::get_GameUserSettingsClass() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_Engine::Engine::get_LevelColorationLitMaterialName() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Script_Engine::Engine::set_bCheckForMultiplePawnsSpawnedInAFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x858 + 0);
    *(uint8_t*)((uintptr_t)this + 0x858 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_DefaultTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::Engine::get_AIControllerClassName() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Engine::Engine::get_ActivePluginRedirects() {
    return (void*)((uintptr_t)this + 0x6d8);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_ShadedLevelColorationUnlitMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x408);
}
void* _Script_Engine::Engine::get_AssetManagerClassName() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_Engine::GameUserSettings*& _Script_Engine::Engine::get_GameUserSettings() {
    return *(_Script_Engine::GameUserSettings**)((uintptr_t)this + 0x230);
}
void* _Script_Engine::Engine::get_LevelScriptActorClassName() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::Engine::get_DefaultTextureName() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Object*& _Script_Engine::Engine::get_GameSingleton() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x288);
}
void* _Script_Engine::Engine::get_HighFrequencyNoiseTextureName() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::AssetManager*& _Script_Engine::Engine::get_AssetManager() {
    return *(_Script_Engine::AssetManager**)((uintptr_t)this + 0x2a8);
}
float& _Script_Engine::Engine::get_PrimitiveProbablyVisibleTime() {
    return *(float*)((uintptr_t)this + 0x8e8);
}
void* _Script_Engine::Engine::get_LevelColorationUnlitMaterialName() {
    return (void*)((uintptr_t)this + 0x3c8);
}
_Script_Engine::Texture*& _Script_Engine::Engine::get_DefaultDiffuseTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x2d0);
}
void* _Script_Engine::Engine::get_DebugMeshMaterialName() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Engine::Engine::get_SelectedMaterialColorOverride() {
    return (void*)((uintptr_t)this + 0x95c);
}
void* _Script_Engine::Engine::get_DefaultBSPVertexTextureName() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_Engine::Engine::get_DefaultBloomKernelTextureName() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_Engine::Engine::get_ShadedLevelColorationUnlitMaterialName() {
    return (void*)((uintptr_t)this + 0x410);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_SimpleTranslucentMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x420);
}
void* _Script_Engine::Engine::get_SimpleTranslucentMaterialName() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_FilmGrainTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x438);
}
void* _Script_Engine::Engine::get_GameScreenshotSaveDirectory() {
    return (void*)((uintptr_t)this + 0x8a0);
}
void* _Script_Engine::Engine::get_FilmGrainTextureName() {
    return (void*)((uintptr_t)this + 0x440);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_RemoveSurfaceMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x458);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_VertexColorMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x478);
}
int32_t& _Script_Engine::Engine::get_MaxParticleResizeWarn() {
    return *(int32_t*)((uintptr_t)this + 0x8f8);
}
void* _Script_Engine::Engine::get_VertexColorMaterialName() {
    return (void*)((uintptr_t)this + 0x480);
}
float& _Script_Engine::Engine::get_MinDesiredFrameRate() {
    return *(float*)((uintptr_t)this + 0x918);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_PreviewShadowsIndicatorMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x580);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_VertexColorViewModeMaterial_ColorOnly() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x490);
}
void* _Script_Engine::Engine::get_VertexColorViewModeMaterialName_ColorOnly() {
    return (void*)((uintptr_t)this + 0x498);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_VertexColorViewModeMaterial_AlphaAsColor() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x4a8);
}
void* _Script_Engine::Engine::get_VertexColorViewModeMaterialName_AlphaAsColor() {
    return (void*)((uintptr_t)this + 0x4b0);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_VertexColorViewModeMaterial_RedOnly() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x4c0);
}
void* _Script_Engine::Engine::get_VertexColorViewModeMaterialName_RedOnly() {
    return (void*)((uintptr_t)this + 0x4c8);
}
float& _Script_Engine::Engine::get_MeshLODRange() {
    return *(float*)((uintptr_t)this + 0x8d8);
}
void* _Script_Engine::Engine::get_TextureComplexityColors() {
    return (void*)((uintptr_t)this + 0x780);
}
void* _Script_Engine::Engine::get_VertexColorViewModeMaterialName_GreenOnly() {
    return (void*)((uintptr_t)this + 0x4e0);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_VertexColorViewModeMaterial_BlueOnly() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x4f0);
}
void* _Script_Engine::Engine::get_VertexColorViewModeMaterialName_BlueOnly() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void* _Script_Engine::Engine::get_DebugEditorMaterialName() {
    return (void*)((uintptr_t)this + 0x508);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_ConstraintLimitMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x520);
}
float& _Script_Engine::Engine::get_MaxOcclusionPixelsFraction() {
    return *(float*)((uintptr_t)this + 0x8ec);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialX() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x528);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialXAxis() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x530);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialY() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x538);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialYAxis() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x540);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialZ() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x548);
}
bool _Script_Engine::Engine::get_bPauseOnLossOfFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x8f0 + 0)) & 1 != 0;
}
float& _Script_Engine::Engine::get_FixedFrameRate() {
    return *(float*)((uintptr_t)this + 0x7cc);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialZAxis() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x550);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_Engine::Engine::get_ConstraintLimitMaterialPrismatic() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x558);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_InvalidLightmapSettingsMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x560);
}
void* _Script_Engine::Engine::get_InvalidLightmapSettingsMaterialName() {
    return (void*)((uintptr_t)this + 0x568);
}
_Script_Engine::Material*& _Script_Engine::Engine::get_ArrowMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x5a0);
}
void _Script_Engine::Engine::set_bEnableOnScreenDebugMessages(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x970 + 0);
    *(uint8_t*)((uintptr_t)this + 0x970 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Engine::get_ArrowMaterialName() {
    return (void*)((uintptr_t)this + 0x5a8);
}
void* _Script_Engine::Engine::get_LightingOnlyBrightness() {
    return (void*)((uintptr_t)this + 0x5c0);
}
void* _Script_Engine::Engine::get_ShaderComplexityColors() {
    return (void*)((uintptr_t)this + 0x5d0);
}
_Script_Engine::TimecodeProvider*& _Script_Engine::Engine::get_DefaultTimecodeProvider() {
    return *(_Script_Engine::TimecodeProvider**)((uintptr_t)this + 0x810);
}
void* _Script_Engine::Engine::get_QuadComplexityColors() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Script_Engine::Engine::get_LightComplexityColors() {
    return (void*)((uintptr_t)this + 0x5f0);
}
float& _Script_Engine::Engine::get_DisplayGamma() {
    return *(float*)((uintptr_t)this + 0x914);
}
void* _Script_Engine::Engine::get_StationaryLightOverlapColors() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Script_Engine::Engine::get_LODColorationColors() {
    return (void*)((uintptr_t)this + 0x610);
}
void* _Script_Engine::Engine::get_HLODColorationColors() {
    return (void*)((uintptr_t)this + 0x620);
}
void* _Script_Engine::Engine::get_StreamingAccuracyColors() {
    return (void*)((uintptr_t)this + 0x630);
}
float& _Script_Engine::Engine::get_MaxPixelShaderAdditiveComplexityCount() {
    return *(float*)((uintptr_t)this + 0x640);
}
float& _Script_Engine::Engine::get_MaxES2PixelShaderAdditiveComplexityCount() {
    return *(float*)((uintptr_t)this + 0x644);
}
float& _Script_Engine::Engine::get_MaxES3PixelShaderAdditiveComplexityCount() {
    return *(float*)((uintptr_t)this + 0x648);
}
void* _Script_Engine::Engine::get_C_BrushWire() {
    return (void*)((uintptr_t)this + 0x868);
}
float& _Script_Engine::Engine::get_MinLightMapDensity() {
    return *(float*)((uintptr_t)this + 0x64c);
}
float& _Script_Engine::Engine::get_IdealLightMapDensity() {
    return *(float*)((uintptr_t)this + 0x650);
}
bool _Script_Engine::Engine::get_bDisableAILogging() {
    return (*(uint8_t*)((uintptr_t)this + 0x970 + 0)) & 8 != 0;
}
float& _Script_Engine::Engine::get_MaxLightMapDensity() {
    return *(float*)((uintptr_t)this + 0x654);
}
void _Script_Engine::Engine::set_bRenderLightMapDensityGrayscale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x658 + 0);
    *(uint8_t*)((uintptr_t)this + 0x658 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::Engine::get_RenderLightMapDensityGrayscaleScale() {
    return *(float*)((uintptr_t)this + 0x65c);
}
float& _Script_Engine::Engine::get_RenderLightMapDensityColorScale() {
    return *(float*)((uintptr_t)this + 0x660);
}
void* _Script_Engine::Engine::get_LightMapDensityVertexMappedColor() {
    return (void*)((uintptr_t)this + 0x664);
}
void* _Script_Engine::Engine::get_LightMapDensitySelectedColor() {
    return (void*)((uintptr_t)this + 0x674);
}
void* _Script_Engine::Engine::get_StatColorMappings() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Script_Engine::Engine::get_DefaultPhysMaterialName() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void* _Script_Engine::Engine::get_ActiveGameNameRedirects() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Script_Engine::Engine::get_ActiveStructRedirects() {
    return (void*)((uintptr_t)this + 0x6e8);
}
void* _Script_Engine::Engine::get_C_SubtractWire() {
    return (void*)((uintptr_t)this + 0x870);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_PreIntegratedSkinBRDFTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x6f8);
}
void* _Script_Engine::Engine::get_PreIntegratedSkinBRDFTextureName() {
    return (void*)((uintptr_t)this + 0x700);
}
int32_t& _Script_Engine::Engine::get_ClientCycles() {
    return *(int32_t*)((uintptr_t)this + 0x7b8);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_MiniFontTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x718);
}
void* _Script_Engine::Engine::get_MiniFontTextureName() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::Texture*& _Script_Engine::Engine::get_WeightMapPlaceholderTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x738);
}
bool _Script_Engine::Engine::get_bSubtitlesEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c0 + 0)) & 2 != 0;
}
void* _Script_Engine::Engine::get_WeightMapPlaceholderTextureName() {
    return (void*)((uintptr_t)this + 0x740);
}
_Script_Engine::Texture2D*& _Script_Engine::Engine::get_LightMapDensityTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x758);
}
void* _Script_Engine::Engine::get_LightMapDensityTextureName() {
    return (void*)((uintptr_t)this + 0x760);
}
float& _Script_Engine::Engine::get_MaxTextureAdditiveComplexityCount() {
    return *(float*)((uintptr_t)this + 0x778);
}
int32_t& _Script_Engine::Engine::get_NextWorldContextHandle() {
    return *(int32_t*)((uintptr_t)this + 0xc40);
}
_Script_Engine::GameViewportClient*& _Script_Engine::Engine::get_GameViewport() {
    return *(_Script_Engine::GameViewportClient**)((uintptr_t)this + 0x798);
}
int32_t& _Script_Engine::Engine::get_TickCycles() {
    return *(int32_t*)((uintptr_t)this + 0x7b0);
}
void _Script_Engine::Engine::set_bLockReadOnlyLevels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x980 + 0);
    *(uint8_t*)((uintptr_t)this + 0x980 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::Engine::get_GameCycles() {
    return *(int32_t*)((uintptr_t)this + 0x7b4);
}
float& _Script_Engine::Engine::get_NearClipPlane() {
    return *(float*)((uintptr_t)this + 0x7bc);
}
bool _Script_Engine::Engine::get_bHardwareSurveyEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c0 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::Engine::get_NumPawnsAllowedToBeSpawnedInAFrame() {
    return *(int32_t*)((uintptr_t)this + 0x85c);
}
void _Script_Engine::Engine::set_bHardwareSurveyEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Engine::set_bSubtitlesEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::Engine::get_BSPSelectionHighlightIntensity() {
    return *(float*)((uintptr_t)this + 0x9b0);
}
bool _Script_Engine::Engine::get_bSubtitlesForcedOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c0 + 0)) & 4 != 0;
}
float& _Script_Engine::Engine::get_CameraRotationThreshold() {
    return *(float*)((uintptr_t)this + 0x8e0);
}
void _Script_Engine::Engine::set_bSubtitlesForcedOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
int32_t& _Script_Engine::Engine::get_MaximumLoopIterationCount() {
    return *(int32_t*)((uintptr_t)this + 0x7c4);
}
float& _Script_Engine::Engine::get_SelectionHighlightIntensity() {
    return *(float*)((uintptr_t)this + 0x9a8);
}
bool _Script_Engine::Engine::get_bCanBlueprintsTickByDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 1 != 0;
}
void _Script_Engine::Engine::set_bCanBlueprintsTickByDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Engine::get_C_AddWire() {
    return (void*)((uintptr_t)this + 0x86c);
}
bool _Script_Engine::Engine::get_bOptimizeAnimBlueprintMemberVariableAccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 2 != 0;
}
void _Script_Engine::Engine::set_bOptimizeAnimBlueprintMemberVariableAccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::Engine::get_bEnableVisualLogRecordingOnStart() {
    return (void*)((uintptr_t)this + 0x974);
}
bool _Script_Engine::Engine::get_bAllowMultiThreadedAnimationUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 4 != 0;
}
void _Script_Engine::Engine::set_bAllowMultiThreadedAnimationUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Engine::get_bEnableEditorPSysRealtimeLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 8 != 0;
}
void _Script_Engine::Engine::set_bEnableEditorPSysRealtimeLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Engine::get_bSmoothFrameRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 32 != 0;
}
bool _Script_Engine::Engine::get_bUseFixedFrameRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 64 != 0;
}
void _Script_Engine::Engine::set_bUseFixedFrameRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::Engine::get_SmoothedFrameRateRange() {
    return (void*)((uintptr_t)this + 0x7d0);
}
float& _Script_Engine::Engine::get_MaxDeltaTime() {
    return *(float*)((uintptr_t)this + 0x7e0);
}
_Script_Engine::EngineCustomTimeStep*& _Script_Engine::Engine::get_DefaultCustomTimeStep() {
    return *(_Script_Engine::EngineCustomTimeStep**)((uintptr_t)this + 0x7e8);
}
_Script_Engine::EngineCustomTimeStep*& _Script_Engine::Engine::get_CurrentCustomTimeStep() {
    return *(_Script_Engine::EngineCustomTimeStep**)((uintptr_t)this + 0x7f0);
}
_Script_Engine::TimecodeProvider*& _Script_Engine::Engine::get_CustomTimecodeProvider() {
    return *(_Script_Engine::TimecodeProvider**)((uintptr_t)this + 0x818);
}
void* _Script_Engine::Engine::get_DefaultTimecodeProviderClassName() {
    return (void*)((uintptr_t)this + 0x820);
}
void* _Script_Engine::Engine::get_TimecodeProviderClassName() {
    return (void*)((uintptr_t)this + 0x838);
}
void* _Script_Engine::Engine::get_DefaultTimecodeFrameRate() {
    return (void*)((uintptr_t)this + 0x850);
}
bool _Script_Engine::Engine::get_bCheckForMultiplePawnsSpawnedInAFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x858 + 0)) & 1 != 0;
}
void _Script_Engine::Engine::set_bShouldGenerateLowQualityLightmaps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x860 + 0);
    *(uint8_t*)((uintptr_t)this + 0x860 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Engine::get_C_SemiSolidWire() {
    return (void*)((uintptr_t)this + 0x874);
}
void* _Script_Engine::Engine::get_C_NonSolidWire() {
    return (void*)((uintptr_t)this + 0x878);
}
void* _Script_Engine::Engine::get_C_WireBackground() {
    return (void*)((uintptr_t)this + 0x87c);
}
void* _Script_Engine::Engine::get_C_ScaleBoxHi() {
    return (void*)((uintptr_t)this + 0x880);
}
void* _Script_Engine::Engine::get_C_VolumeCollision() {
    return (void*)((uintptr_t)this + 0x884);
}
void* _Script_Engine::Engine::get_C_Volume() {
    return (void*)((uintptr_t)this + 0x890);
}
void* _Script_Engine::Engine::get_C_BrushShape() {
    return (void*)((uintptr_t)this + 0x894);
}
float& _Script_Engine::Engine::get_StreamingDistanceFactor() {
    return *(float*)((uintptr_t)this + 0x898);
}
void* _Script_Engine::Engine::get_TransitionType() {
    return (void*)((uintptr_t)this + 0x8b0);
}
void* _Script_Engine::Engine::get_TransitionDescription() {
    return (void*)((uintptr_t)this + 0x8b8);
}
void* _Script_Engine::Engine::get_TransitionGameMode() {
    return (void*)((uintptr_t)this + 0x8c8);
}
float& _Script_Engine::Engine::get_CameraTranslationThreshold() {
    return *(float*)((uintptr_t)this + 0x8e4);
}
void _Script_Engine::Engine::set_bPauseOnLossOfFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::Engine::get_MaxParticleResize() {
    return *(int32_t*)((uintptr_t)this + 0x8f4);
}
void* _Script_Engine::Engine::get_PendingDroppedNotes() {
    return (void*)((uintptr_t)this + 0x900);
}
float& _Script_Engine::Engine::get_NetClientTicksPerSecond() {
    return *(float*)((uintptr_t)this + 0x910);
}
void* _Script_Engine::Engine::get_DefaultSelectedMaterialColor() {
    return (void*)((uintptr_t)this + 0x91c);
}
void* _Script_Engine::Engine::get_SelectedMaterialColor() {
    return (void*)((uintptr_t)this + 0x92c);
}
void* _Script_Engine::Engine::get_SelectionOutlineColor() {
    return (void*)((uintptr_t)this + 0x93c);
}
void* _Script_Engine::Engine::get_SubduedSelectionOutlineColor() {
    return (void*)((uintptr_t)this + 0x94c);
}
bool _Script_Engine::Engine::get_bIsOverridingSelectedColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x96c + 0)) & 1 != 0;
}
void _Script_Engine::Engine::set_bIsOverridingSelectedColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96c + 0);
    *(uint8_t*)((uintptr_t)this + 0x96c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Engine::get_bEnableOnScreenDebugMessagesDisplay() {
    return (*(uint8_t*)((uintptr_t)this + 0x970 + 0)) & 2 != 0;
}
void _Script_Engine::Engine::set_bEnableOnScreenDebugMessagesDisplay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x970 + 0);
    *(uint8_t*)((uintptr_t)this + 0x970 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Engine::get_bSuppressMapWarnings() {
    return (*(uint8_t*)((uintptr_t)this + 0x970 + 0)) & 4 != 0;
}
void _Script_Engine::Engine::set_bSuppressMapWarnings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x970 + 0);
    *(uint8_t*)((uintptr_t)this + 0x970 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Engine::set_bDisableAILogging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x970 + 0);
    *(uint8_t*)((uintptr_t)this + 0x970 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
int32_t& _Script_Engine::Engine::get_ScreenSaverInhibitorSemaphore() {
    return *(int32_t*)((uintptr_t)this + 0x97c);
}
void* _Script_Engine::Engine::get_ParticleEventManagerClassPath() {
    return (void*)((uintptr_t)this + 0x988);
}
float& _Script_Engine::Engine::get_SelectionMeshSectionHighlightIntensity() {
    return *(float*)((uintptr_t)this + 0x9ac);
}
float& _Script_Engine::Engine::get_HoverHighlightIntensity() {
    return *(float*)((uintptr_t)this + 0x9b4);
}
float& _Script_Engine::Engine::get_SelectionHighlightIntensityBillboards() {
    return *(float*)((uintptr_t)this + 0x9b8);
}
_Script_CoreUObject::Object*& _Script_Engine::Engine::get_DefaultDamageFromPhysicsCollision() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0xba0);
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::Engine::get_DefaultPhysicalMaterialForPhysicalAnimation() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0xba8);
}
void* _Script_Engine::Engine::get_NetDriverDefinitions() {
    return (void*)((uintptr_t)this + 0xbf8);
}
void* _Script_Engine::Engine::get_ServerActors() {
    return (void*)((uintptr_t)this + 0xc08);
}
void* _Script_Engine::Engine::get_RuntimeServerActors() {
    return (void*)((uintptr_t)this + 0xc18);
}
bool _Script_Engine::Engine::get_bStartedLoadMapMovie() {
    return (*(uint8_t*)((uintptr_t)this + 0xc28 + 0)) & 1 != 0;
}
void _Script_Engine::Engine::set_bStartedLoadMapMovie(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc28 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::Engine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Engine");
    return result;
}
