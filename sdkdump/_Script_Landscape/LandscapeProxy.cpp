#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "LandscapeLayerInfoObject.hpp"
#include "LandscapeProxy.hpp"
#include "LandscapeSplinesComponent.hpp"
int32_t& _Script_Landscape::LandscapeProxy::get_SimpleCollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x4b4);
}
float& _Script_Landscape::LandscapeProxy::get_LOD0DistributionSetting() {
    return *(float*)((uintptr_t)this + 0x390);
}
void* _Script_Landscape::LandscapeProxy::get_FoliageComponents() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_Landscape::LandscapeSplinesComponent*& _Script_Landscape::LandscapeProxy::get_SplineComponent() {
    return *(_Script_Landscape::LandscapeSplinesComponent**)((uintptr_t)this + 0x360);
}
float& _Script_Landscape::LandscapeProxy::get_LODDistanceFactor() {
    return *(float*)((uintptr_t)this + 0x384);
}
bool _Script_Landscape::LandscapeProxy::get_bAffectDistanceFieldLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeGuid() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeSectionOffset() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeProxy::get_LandscapeMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x3c0);
}
float& _Script_Landscape::LandscapeProxy::get_ComponentScreenSizeToUseSubSections() {
    return *(float*)((uintptr_t)this + 0x38c);
}
void _Script_Landscape::LandscapeProxy::SetLandscapeMaterialVectorParameterValue(void* ParameterName, _Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Landscape::LandscapeProxy::set_bHasLandscapeGrass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::LandscapeProxy::set_bCastFarShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_MaxLODLevel() {
    return *(int32_t*)((uintptr_t)this + 0x380);
}
void* _Script_Landscape::LandscapeProxy::get_BodyInstance() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Script_Landscape::LandscapeProxy::get_LODFalloff() {
    return (void*)((uintptr_t)this + 0x388);
}
float& _Script_Landscape::LandscapeProxy::get_LODDistributionSetting() {
    return *(float*)((uintptr_t)this + 0x394);
}
void _Script_Landscape::LandscapeProxy::set_bUsedForNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb10 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::LandscapeProxy::get_StaticLightingResolution() {
    return *(float*)((uintptr_t)this + 0x480);
}
float& _Script_Landscape::LandscapeProxy::get_TessellationComponentScreenSize() {
    return *(float*)((uintptr_t)this + 0x398);
}
bool _Script_Landscape::LandscapeProxy::get_UseTessellationComponentScreenSizeFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x39c + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_UseTessellationComponentScreenSizeFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39c + 0);
    *(uint8_t*)((uintptr_t)this + 0x39c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::LandscapeProxy::get_TessellationComponentScreenSizeFalloff() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
void _Script_Landscape::LandscapeProxy::set_bCastStaticShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_OccluderGeometryLOD() {
    return *(int32_t*)((uintptr_t)this + 0x3a4);
}
int32_t& _Script_Landscape::LandscapeProxy::get_StaticLightingLOD() {
    return *(int32_t*)((uintptr_t)this + 0x3a8);
}
_Script_Engine::PhysicalMaterial*& _Script_Landscape::LandscapeProxy::get_DefaultPhysMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x3b0);
}
float& _Script_Landscape::LandscapeProxy::get_StreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
void* _Script_Landscape::LandscapeProxy::get_NavigationGeometryGatheringMode() {
    return (void*)((uintptr_t)this + 0xb15);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeProxy::get_LandscapeHoleMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x3c8);
}
int32_t& _Script_Landscape::LandscapeProxy::get_ComponentSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0xb04);
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeMaterialsOverride() {
    return (void*)((uintptr_t)this + 0x3d0);
}
float& _Script_Landscape::LandscapeProxy::get_NegativeZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
void _Script_Landscape::LandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
    return;
}
float& _Script_Landscape::LandscapeProxy::get_PositiveZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
bool _Script_Landscape::LandscapeProxy::get_bGenerateOverlapEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0xb00 + 0)) & 1 != 0;
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeComponents() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Script_Landscape::LandscapeProxy::get_CollisionComponents() {
    return (void*)((uintptr_t)this + 0x3f8);
}
bool _Script_Landscape::LandscapeProxy::get_bHasLandscapeGrass() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bUseMaterialPositionOffsetInStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x48c + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bCastStaticShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bCastShadowAsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 2 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bCastShadowAsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bCastFarShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 4 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bAffectDistanceFieldLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeProxy::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x489);
}
void _Script_Landscape::LandscapeProxy::set_bUseMaterialPositionOffsetInStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48c + 0);
    *(uint8_t*)((uintptr_t)this + 0x48c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bRenderCustomDepth() {
    return (*(uint8_t*)((uintptr_t)this + 0x48c + 0)) & 2 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bRenderCustomDepth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48c + 0);
    *(uint8_t*)((uintptr_t)this + 0x48c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_CustomDepthStencilValue() {
    return *(int32_t*)((uintptr_t)this + 0x490);
}
float& _Script_Landscape::LandscapeProxy::get_LDMaxDrawDistance() {
    return *(float*)((uintptr_t)this + 0x494);
}
void* _Script_Landscape::LandscapeProxy::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x498);
}
int32_t& _Script_Landscape::LandscapeProxy::get_CollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x4b0);
}
float& _Script_Landscape::LandscapeProxy::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x4b8);
}
int32_t& _Script_Landscape::LandscapeProxy::get_SubsectionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0xb08);
}
void _Script_Landscape::LandscapeProxy::set_bGenerateOverlapEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb00 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb00 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bBakeMaterialPositionOffsetIntoCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xb00 + 0)) & 2 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bBakeMaterialPositionOffsetIntoCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb00 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb00 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_NumSubsections() {
    return *(int32_t*)((uintptr_t)this + 0xb0c);
}
bool _Script_Landscape::LandscapeProxy::get_bUsedForNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0xb10 + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bUseDynamicMaterialInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0xb14 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bUseDynamicMaterialInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb14 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bUseLandscapeForCullingInvisibleHLODVertices() {
    return (*(uint8_t*)((uintptr_t)this + 0xb16 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bUseLandscapeForCullingInvisibleHLODVertices(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb16 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb16 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeProxy");
    return result;
}
void _Script_Landscape::LandscapeProxy::SetLandscapeMaterialTextureParameterValue(void* ParameterName, _Script_Engine::Texture* Value) {
    return;
}
void _Script_Landscape::LandscapeProxy::SetLandscapeMaterialScalarParameterValue(void* ParameterName, float Value) {
    return;
}
void _Script_Landscape::LandscapeProxy::EditorSetLandscapeMaterial(_Script_Engine::MaterialInterface* NewLandscapeMaterial) {
    return;
}
void _Script_Landscape::LandscapeProxy::EditorApplySpline(_Script_Engine::SplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, _Script_Landscape::LandscapeLayerInfoObject* PaintLayer) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) {
    return;
}
