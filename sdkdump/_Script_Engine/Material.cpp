#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Material.hpp"
#include "MaterialInterface.hpp"
#include "PhysicalMaterial.hpp"
void* _Script_Engine::Material::get_MaterialDecalResponse() {
    return (void*)((uintptr_t)this + 0xf3);
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::Material::get_PhysMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x88);
}
void* _Script_Engine::Material::get_Metallic() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::Material::get_Specular() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::Material::get_Normal() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::Material::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Engine::Material::get_MaterialDomain() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::Material::get_DecalBlendMode() {
    return (void*)((uintptr_t)this + 0xf2);
}
void* _Script_Engine::Material::get_BlendMode() {
    return (void*)((uintptr_t)this + 0xf1);
}
void* _Script_Engine::Material::get_ShadingModel() {
    return (void*)((uintptr_t)this + 0xf4);
}
float& _Script_Engine::Material::get_EmissiveBrightnessRange() {
    return *(float*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::Material::get_OpacityMaskClipValue() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_Engine::Material::get_DitheredOpacityFadeStart() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_Engine::Material::get_DitheredOpacityFadeEnd() {
    return *(float*)((uintptr_t)this + 0x100);
}
bool _Script_Engine::Material::get_bCastDynamicShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bCastDynamicShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_WorldPositionOffset() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::Material::get_Refraction() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_Engine::Material::get_DitheredLODTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x191 + 0)) & 1 != 0;
}
void* _Script_Engine::Material::get_MaterialAttributes() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_Engine::Material::get_TwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 128 != 0;
}
void* _Script_Engine::Material::get_PixelDepthOffset() {
    return (void*)((uintptr_t)this + 0x160);
}
bool _Script_Engine::Material::get_bEnableGroundBlending() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
void* _Script_Engine::Material::get_GroundBlendFactor() {
    return (void*)((uintptr_t)this + 0x178);
}
void _Script_Engine::Material::set_bEnableGroundBlending(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::Material::get_TranslucentShadowStartOffset() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
bool _Script_Engine::Material::get_bEnableSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bEnableMobileSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bEnableSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::Material::get_TranslucencyDirectionalLightingIntensity() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
bool _Script_Engine::Material::get_bEnableMobileSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 4 != 0;
}
bool _Script_Engine::Material::get_AllowTranslucentCustomDepthWrites() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b4 + 0)) & 1 != 0;
}
bool _Script_Engine::Material::get_bEnableResponsiveAA() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bGenerateSphericalParticleNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bEnableResponsiveAA(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bDisableDepthTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 1 != 0;
}
bool _Script_Engine::Material::get_bScreenSpaceReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bDisableDepthTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Material::set_bScreenSpaceReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::Material::set_DitheredLODTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x191 + 0);
    *(uint8_t*)((uintptr_t)this + 0x191 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bContactShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bAllowNegativeEmissiveColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x191 + 0);
    *(uint8_t*)((uintptr_t)this + 0x191 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bContactShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bAllowNegativeEmissiveColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x191 + 0)) & 4 != 0;
}
bool _Script_Engine::Material::get_bMaskSSR() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 64 != 0;
}
void* _Script_Engine::Material::get_TranslucentMultipleScatteringExtinction() {
    return (void*)((uintptr_t)this + 0x1cc);
}
void _Script_Engine::Material::set_bMaskSSR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::Material::set_TwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bTangentSpaceNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 8 != 0;
}
bool _Script_Engine::Material::get_DitherOpacityMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x191 + 0)) & 2 != 0;
}
bool _Script_Engine::Material::get_bGenerateSphericalParticleNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_DitherOpacityMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x191 + 0);
    *(uint8_t*)((uintptr_t)this + 0x191 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::Material::get_NumCustomizedUVs() {
    return *(int32_t*)((uintptr_t)this + 0x194);
}
void* _Script_Engine::Material::get_AdditionalHeaderIncludes() {
    return (void*)((uintptr_t)this + 0x198);
}
float& _Script_Engine::Material::get_TranslucentShadowDensityScale() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
void* _Script_Engine::Material::get_ColorWriteMask() {
    return (void*)((uintptr_t)this + 0x1a8);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowSecondOpacity() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
void* _Script_Engine::Material::get_TranslucencyLightingMode() {
    return (void*)((uintptr_t)this + 0x1ac);
}
void _Script_Engine::Material::set_AllowTranslucentCustomDepthWrites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bWriteOnlyAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 2 != 0;
}
float& _Script_Engine::Material::get_TranslucentSelfShadowDensityScale() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
void _Script_Engine::Material::set_bWriteOnlyAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowSecondDensityScale() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
float& _Script_Engine::Material::get_TranslucentBackscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
void _Script_Engine::Material::set_bTangentSpaceNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUseEmissiveForDynamicAreaLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUseEmissiveForDynamicAreaLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bBlockGI() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bBlockGI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedAsSpecialEngineMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUsedAsSpecialEngineMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUsedWithSkeletalMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUsedWithSkeletalMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUsedWithEditorCompositing() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithEditorCompositing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsedWithParticleSprites() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithParticleSprites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bUsedWithBeamTrails() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bUsedWithBeamTrails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bUsedWithMeshParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUsedWithMeshParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraSprites() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUsedWithNiagaraSprites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraRibbons() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUsedWithNiagaraRibbons(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraMeshParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUsedWithNiagaraMeshParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUsedWithGeometryCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUsedWithGeometryCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUsedWithStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsedWithMorphTargets() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithMorphTargets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bUsedWithSplineMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bUsedWithSplineMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bUsedWithInstancedStaticMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUsedWithInstancedStaticMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUsedWithClothing() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUsedWithClothing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsedWithWorldMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUsedWithWorldMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedWithUI() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUsedWithUI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bAutomaticallySetUsageInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bAutomaticallySetUsageInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUsesDistortion() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsesDistortion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bOccludesEyeShading() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bOccludesEyeShading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bAdjustEmissiveForEyeAdaptation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bAdjustEmissiveForEyeAdaptation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bFullyRough() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bFullyRough(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUsesDitherFactor() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUsesDitherFactor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUseFullPrecision() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUseFullPrecision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUseLightmapDirectionality() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bUseLightmapDirectionality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUseHQForwardReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUseHQForwardReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUsePlanarForwardReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsePlanarForwardReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bNormalCurvatureToRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bNormalCurvatureToRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::Material::get_D3D11TessellationMode() {
    return (void*)((uintptr_t)this + 0x1e8);
}
bool _Script_Engine::Material::get_bEnableCrackFreeDisplacement() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ec + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bEnableCrackFreeDisplacement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bEnableAdaptiveTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ec + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bEnableAdaptiveTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ec + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::Material::get_MaxDisplacement() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
bool _Script_Engine::Material::get_Wireframe() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_Wireframe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bOutputVelocityOnBasePass() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bOutputVelocityOnBasePass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::Material::get_Expressions() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::Material::get_MaterialFunctionInfos() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_Engine::Material::get_MaterialParameterCollectionInfos() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Engine::Material::get_MaterialParameterLocalCollectionInfos() {
    return (void*)((uintptr_t)this + 0x228);
}
bool _Script_Engine::Material::get_bCanMaskedBeAssumedOpaque() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bCanMaskedBeAssumedOpaque(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bIsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bIsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bIsPreviewMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bIsPreviewMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bIsFunctionPreviewMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bIsFunctionPreviewMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUseMaterialAttributes() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUseMaterialAttributes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUseTranslucencyVertexFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUseTranslucencyVertexFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bComputeFogPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bComputeFogPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bAllowDevelopmentShaderCompile() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bAllowDevelopmentShaderCompile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bIsMaterialEditorStatsMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x239 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bIsMaterialEditorStatsMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x239 + 0);
    *(uint8_t*)((uintptr_t)this + 0x239 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_UsageFlagWarnings() {
    return (void*)((uintptr_t)this + 0x23c);
}
void* _Script_Engine::Material::get_BlendableLocation() {
    return (void*)((uintptr_t)this + 0x240);
}
int32_t& _Script_Engine::Material::get_BlendablePriority() {
    return *(int32_t*)((uintptr_t)this + 0x244);
}
bool _Script_Engine::Material::get_BlendableOutputAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_BlendableOutputAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_RefractionMode() {
    return (void*)((uintptr_t)this + 0x249);
}
float& _Script_Engine::Material::get_RefractionDepthBias() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void* _Script_Engine::Material::get_StateId() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::Material::get_CachedQualityLevelsUsed() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Script_Engine::Material::get_ExpressionTextureReferences() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Script_Engine::Material::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Material");
    return result;
}
