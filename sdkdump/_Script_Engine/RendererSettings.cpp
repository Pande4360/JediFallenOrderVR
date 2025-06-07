#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RendererSettings.hpp"
bool _Script_Engine::RendererSettings::get_bSupportStationarySkylight() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bMobileHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bDBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_bMobileHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RendererSettings::get_MinScreenRadiusForEarlyZPass() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void _Script_Engine::RendererSettings::set_bMobileUseLegacyShadingModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RendererSettings::get_DefaultBackBufferPixelFormat() {
    return (void*)((uintptr_t)this + 0x92);
}
bool _Script_Engine::RendererSettings::get_bMobileDisableVertexFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
float& _Script_Engine::RendererSettings::get_TessellationAdaptivePixelsPerTriangle() {
    return *(float*)((uintptr_t)this + 0x60);
}
void _Script_Engine::RendererSettings::set_bMobileDisableVertexFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RendererSettings::set_bGlobalClipPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::RendererSettings::get_MaxMobileCascades() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void _Script_Engine::RendererSettings::set_bUseDXT5NormalMaps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::RendererSettings::get_MobileMSAASampleCount() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::RendererSettings::set_bMobileMultiView(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileUseLegacyShadingModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bMonoscopicFarField() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 64 != 0;
}
bool _Script_Engine::RendererSettings::get_bMobileAllowDitheredLODTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bUseNormalMapsForStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::RendererSettings::set_bMobileAllowDitheredLODTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RendererSettings::set_bSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileAllowSoftwareOcclusionCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_ReflectionEnvironmentLightmapMixBasedOnRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RendererSettings::set_bMobileAllowSoftwareOcclusionCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bDiscardUnusedQualityLevels() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 8 != 0;
}
bool _Script_Engine::RendererSettings::get_bMobileEnableStaticAndCSMShadowReceivers() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 32 != 0;
}
void _Script_Engine::RendererSettings::set_bDiscardUnusedQualityLevels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RendererSettings::get_bRenderUnbuiltPreviewShadowsInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bOcclusionCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 16 != 0;
}
void _Script_Engine::RendererSettings::set_bOcclusionCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::RendererSettings::get_MinScreenRadiusForLights() {
    return *(float*)((uintptr_t)this + 0x48);
}
void _Script_Engine::RendererSettings::set_bBasePassOutputsVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RendererSettings::get_MinScreenRadiusForCSMdepth() {
    return *(float*)((uintptr_t)this + 0x50);
}
void _Script_Engine::RendererSettings::set_bInstancedStereo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bPrecomputedVisibilityWarning() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void* _Script_Engine::RendererSettings::get_bEnableAlphaChannelInPostProcessing() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_Engine::RendererSettings::set_bPrecomputedVisibilityWarning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bRoundRobinOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 128 != 0;
}
bool _Script_Engine::RendererSettings::get_bTextureStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bTextureStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RendererSettings::get_bUseDXT5NormalMaps() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultParticleCutouts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bClearCoatEnableSecondNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 8 != 0;
}
void _Script_Engine::RendererSettings::set_bClearCoatEnableSecondNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileMultiViewDirect() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 32 != 0;
}
int32_t& _Script_Engine::RendererSettings::get_ReflectionCaptureResolution() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::RendererSettings::get_ReflectionEnvironmentLightmapMixBasedOnRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bSelectiveBasePassOutputs() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 2 != 0;
}
bool _Script_Engine::RendererSettings::get_bForwardShading() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 2 != 0;
}
bool _Script_Engine::RendererSettings::get_bMultiView() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 8 != 0;
}
void _Script_Engine::RendererSettings::set_bForwardShading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::RendererSettings::get_DefaultLightUnits() {
    return (void*)((uintptr_t)this + 0x91);
}
bool _Script_Engine::RendererSettings::get_bVertexFoggingForOpaque() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_bSupportSkinCacheShaders(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::RendererSettings::set_bVertexFoggingForOpaque(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bSupportPointLightWholeSceneShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 4 != 0;
}
bool _Script_Engine::RendererSettings::get_bAllowStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 8 != 0;
}
void _Script_Engine::RendererSettings::set_bAllowStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::RendererSettings::set_bSupportAtmosphericFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RendererSettings::get_bUseNormalMapsForStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 16 != 0;
}
void _Script_Engine::RendererSettings::set_bSupportStationarySkylight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bGenerateMeshDistanceFields() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 32 != 0;
}
void _Script_Engine::RendererSettings::set_bUseNewAlgorithm(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RendererSettings::set_bGenerateMeshDistanceFields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::RendererSettings::get_bEightBitMeshDistanceFields() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 64 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultFeatureBloom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RendererSettings::set_bEightBitMeshDistanceFields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::RendererSettings::set_bODSCapture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bGenerateLandscapeGIData() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 128 != 0;
}
void _Script_Engine::RendererSettings::set_bGenerateLandscapeGIData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::RendererSettings::get_bCompressMeshDistanceFields() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultFeatureAmbientOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bSupportDepthOnlyIndexBuffers() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bCompressMeshDistanceFields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void* _Script_Engine::RendererSettings::get_EarlyZPass() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::RendererSettings::get_TranslucentSortPolicy() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::RendererSettings::get_TranslucentSortAxis() {
    return (void*)((uintptr_t)this + 0x6c);
}
bool _Script_Engine::RendererSettings::get_bCustomDepthTaaJitter() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void* _Script_Engine::RendererSettings::get_CustomDepthStencil() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_Engine::RendererSettings::set_bCustomDepthTaaJitter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bUseNewAlgorithm() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bDefaultFeatureBloom() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 2 != 0;
}
bool _Script_Engine::RendererSettings::get_bDefaultFeatureAmbientOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 4 != 0;
}
bool _Script_Engine::RendererSettings::get_bDefaultFeatureAmbientOcclusionStaticFraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 8 != 0;
}
bool _Script_Engine::RendererSettings::get_bGlobalClipPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultFeatureAmbientOcclusionStaticFraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RendererSettings::get_bDefaultFeatureAutoExposure() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 16 != 0;
}
bool _Script_Engine::RendererSettings::get_bInstancedStereo() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultFeatureAutoExposure(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::RendererSettings::get_DefaultFeatureAutoExposure() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::RendererSettings::get_bExtendDefaultLuminanceRangeInAutoExposureSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bExtendDefaultLuminanceRangeInAutoExposureSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bUsePreExposure() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bUsePreExposure(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RendererSettings::get_bDefaultFeatureMotionBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultFeatureMotionBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileDynamicPointLightsUseStaticBranch() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
bool _Script_Engine::RendererSettings::get_bDefaultFeatureLensFlare() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 8 != 0;
}
void _Script_Engine::RendererSettings::set_bDefaultFeatureLensFlare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RendererSettings::get_bTemporalUpsampling() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 16 != 0;
}
void _Script_Engine::RendererSettings::set_bTemporalUpsampling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::RendererSettings::get_DefaultFeatureAntiAliasing() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_Engine::RendererSettings::set_bRenderUnbuiltPreviewShadowsInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bStencilForLODDither() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bStencilForLODDither(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RendererSettings::get_bEarlyZPassMovable() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bEarlyZPassMovable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bEarlyZPassOnlyMaterialMasking() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 2 != 0;
}
bool _Script_Engine::RendererSettings::get_bSupportAtmosphericFog() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 8 != 0;
}
void _Script_Engine::RendererSettings::set_bEarlyZPassOnlyMaterialMasking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RendererSettings::set_bDBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::RendererSettings::get_ClearSceneMethod() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_Engine::RendererSettings::get_bBasePassOutputsVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bSelectiveBasePassOutputs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RendererSettings::get_bDefaultParticleCutouts() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 4 != 0;
}
int32_t& _Script_Engine::RendererSettings::get_GPUSimulationTextureSizeX() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
int32_t& _Script_Engine::RendererSettings::get_GPUSimulationTextureSizeY() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
void* _Script_Engine::RendererSettings::get_GBufferFormat() {
    return (void*)((uintptr_t)this + 0xb4);
}
bool _Script_Engine::RendererSettings::get_bUseGPUMorphTargets() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bUseGPUMorphTargets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RendererSettings::get_bNvidiaAftermathEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bNvidiaAftermathEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RendererSettings::set_bMultiView(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileMultiView() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 16 != 0;
}
void _Script_Engine::RendererSettings::set_bMobileMultiViewDirect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::RendererSettings::set_bMonoscopicFarField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::RendererSettings::set_bRoundRobinOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::RendererSettings::get_bODSCapture() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
float& _Script_Engine::RendererSettings::get_WireframeCullThreshold() {
    return *(float*)((uintptr_t)this + 0xbc);
}
bool _Script_Engine::RendererSettings::get_bSupportLowQualityLightmaps() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 2 != 0;
}
void _Script_Engine::RendererSettings::set_bSupportLowQualityLightmaps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RendererSettings::set_bSupportPointLightWholeSceneShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bSupportSkinCacheShaders() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 16 != 0;
}
void _Script_Engine::RendererSettings::set_bMobileEnableStaticAndCSMShadowReceivers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileEnableMovableLightCSMShaderCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 64 != 0;
}
void _Script_Engine::RendererSettings::set_bMobileEnableMovableLightCSMShaderCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileAllowDistanceFieldShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 128 != 0;
}
void _Script_Engine::RendererSettings::set_bMobileAllowDistanceFieldShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::RendererSettings::get_bMobileAllowMovableDirectionalLights() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bMobileAllowMovableDirectionalLights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RendererSettings::get_MobileNumDynamicPointLights() {
    return (void*)((uintptr_t)this + 0xc4);
}
void _Script_Engine::RendererSettings::set_bMobileDynamicPointLightsUseStaticBranch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RendererSettings::get_SkinCacheSceneMemoryLimitInMB() {
    return *(float*)((uintptr_t)this + 0xcc);
}
bool _Script_Engine::RendererSettings::get_bGPUSkinLimit2BoneInfluences() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_Engine::RendererSettings::set_bGPUSkinLimit2BoneInfluences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RendererSettings::set_bSupportDepthOnlyIndexBuffers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RendererSettings::get_bSupportReversedIndexBuffers() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 4 != 0;
}
void _Script_Engine::RendererSettings::set_bSupportReversedIndexBuffers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RendererSettings::get_bSupportMaterialLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 8 != 0;
}
void _Script_Engine::RendererSettings::set_bSupportMaterialLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::RendererSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RendererSettings");
    return result;
}
