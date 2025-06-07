#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FoliageType.hpp"
void* _Script_Foliage::FoliageType::get_CullDistance() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Foliage::FoliageType::get_UpdateGuid() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Foliage::FoliageType::get_SeedsPerStep() {
    return *(int32_t*)((uintptr_t)this + 0x7a4);
}
void* _Script_Foliage::FoliageType::get_ScaleZ() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Foliage::FoliageType::get_Scaling() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_Foliage::FoliageType::get_Density() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Foliage::FoliageType::get_DensityAdjustmentFactor() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Foliage::FoliageType::get_CustomNavigableGeometry() {
    return (void*)((uintptr_t)this + 0x780);
}
void* _Script_Foliage::FoliageType::get_ScaleY() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Foliage::FoliageType::get_ChangeCount() {
    return *(int32_t*)((uintptr_t)this + 0x848);
}
float& _Script_Foliage::FoliageType::get_Radius() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_Foliage::FoliageType::get_ScaleX() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Foliage::FoliageType::get_InitialSeedDensity() {
    return *(float*)((uintptr_t)this + 0x798);
}
void* _Script_Foliage::FoliageType::get_VertexColorMaskByChannel() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_Foliage::FoliageType::get_CastShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 2 != 0;
}
void* _Script_Foliage::FoliageType::get_VertexColorMask() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Foliage::FoliageType::get_VertexColorMaskThreshold() {
    return *(float*)((uintptr_t)this + 0x94);
}
bool _Script_Foliage::FoliageType::get_ReapplyGroundSlope() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 2 != 0;
}
bool _Script_Foliage::FoliageType::get_VertexColorMaskInvert() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
bool _Script_Foliage::FoliageType::get_bAffectDynamicIndirectLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 4 != 0;
}
void _Script_Foliage::FoliageType::set_VertexColorMaskInvert(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Foliage::FoliageType::get_AlignMaxAngle() {
    return *(float*)((uintptr_t)this + 0xa8);
}
void* _Script_Foliage::FoliageType::get_ZOffset() {
    return (void*)((uintptr_t)this + 0x9c);
}
bool _Script_Foliage::FoliageType::get_AlignToNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void* _Script_Foliage::FoliageType::get_LightmapType() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_Foliage::FoliageType::set_AlignToNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Foliage::FoliageType::set_bOverrideLightMapRes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x129 + 0);
    *(uint8_t*)((uintptr_t)this + 0x129 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Foliage::FoliageType::get_RandomYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void* _Script_Foliage::FoliageType::get_LowBoundOriginRadius() {
    return (void*)((uintptr_t)this + 0x110);
}
void _Script_Foliage::FoliageType::set_RandomYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Foliage::FoliageType::get_bEnableStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
float& _Script_Foliage::FoliageType::get_RandomPitchAngle() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void _Script_Foliage::FoliageType::set_bCanGrowInShade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Foliage::FoliageType::get_GroundSlopeAngle() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_Foliage::FoliageType::get_Height() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_Foliage::FoliageType::get_LandscapeLayers() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_Foliage::FoliageType::get_bUseAsOccluder() {
    return (*(uint8_t*)((uintptr_t)this + 0x134 + 0)) & 1 != 0;
}
void* _Script_Foliage::FoliageType::get_LandscapeLayer() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_Foliage::FoliageType::get_CollisionWithWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
int32_t& _Script_Foliage::FoliageType::get_OverriddenLightMapRes() {
    return *(int32_t*)((uintptr_t)this + 0x12c);
}
void* _Script_Foliage::FoliageType::get_CollisionScale() {
    return (void*)((uintptr_t)this + 0xe4);
}
void _Script_Foliage::FoliageType::set_CollisionWithWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Foliage::FoliageType::get_bCastShadowAsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 64 != 0;
}
float& _Script_Foliage::FoliageType::get_MinimumLayerWeight() {
    return *(float*)((uintptr_t)this + 0xf0);
}
void* _Script_Foliage::FoliageType::get_MeshBounds() {
    return (void*)((uintptr_t)this + 0xf4);
}
float& _Script_Foliage::FoliageType::get_CollisionRadius() {
    return *(float*)((uintptr_t)this + 0x78c);
}
void* _Script_Foliage::FoliageType::get_Mobility() {
    return (void*)((uintptr_t)this + 0x11c);
}
bool _Script_Foliage::FoliageType::get_bOverrideLightMapRes() {
    return (*(uint8_t*)((uintptr_t)this + 0x129 + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageType::set_bEnableStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Foliage::FoliageType::set_CastShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Foliage::FoliageType::set_bAffectDynamicIndirectLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Foliage::FoliageType::get_BodyInstance() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_Foliage::FoliageType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.FoliageType");
    return result;
}
bool _Script_Foliage::FoliageType::get_bAffectDistanceFieldLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 8 != 0;
}
bool _Script_Foliage::FoliageType::get_bCastDynamicShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 16 != 0;
}
void _Script_Foliage::FoliageType::set_bAffectDistanceFieldLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
int32_t& _Script_Foliage::FoliageType::get_NumSteps() {
    return *(int32_t*)((uintptr_t)this + 0x794);
}
void _Script_Foliage::FoliageType::set_bCastDynamicShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Foliage::FoliageType::get_bCastStaticShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 32 != 0;
}
void _Script_Foliage::FoliageType::set_bCastStaticShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Foliage::FoliageType::set_bCastShadowAsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Foliage::FoliageType::get_bReceivesDecals() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 128 != 0;
}
void _Script_Foliage::FoliageType::set_bReceivesDecals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Foliage::FoliageType::set_bUseAsOccluder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x134 + 0);
    *(uint8_t*)((uintptr_t)this + 0x134 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Foliage::FoliageType::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x781);
}
bool _Script_Foliage::FoliageType::get_bRenderCustomDepth() {
    return (*(uint8_t*)((uintptr_t)this + 0x784 + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageType::set_bRenderCustomDepth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x784 + 0);
    *(uint8_t*)((uintptr_t)this + 0x784 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Foliage::FoliageType::get_CustomDepthStencilValue() {
    return *(int32_t*)((uintptr_t)this + 0x788);
}
float& _Script_Foliage::FoliageType::get_ShadeRadius() {
    return *(float*)((uintptr_t)this + 0x790);
}
float& _Script_Foliage::FoliageType::get_AverageSpreadDistance() {
    return *(float*)((uintptr_t)this + 0x79c);
}
float& _Script_Foliage::FoliageType::get_SpreadVariance() {
    return *(float*)((uintptr_t)this + 0x7a0);
}
int32_t& _Script_Foliage::FoliageType::get_DistributionSeed() {
    return *(int32_t*)((uintptr_t)this + 0x7a8);
}
float& _Script_Foliage::FoliageType::get_MaxInitialSeedOffset() {
    return *(float*)((uintptr_t)this + 0x7ac);
}
bool _Script_Foliage::FoliageType::get_bCanGrowInShade() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b0 + 0)) & 1 != 0;
}
bool _Script_Foliage::FoliageType::get_bSpawnsInShade() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b1 + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageType::set_bSpawnsInShade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Foliage::FoliageType::get_MaxInitialAge() {
    return *(float*)((uintptr_t)this + 0x7b4);
}
float& _Script_Foliage::FoliageType::get_MaxAge() {
    return *(float*)((uintptr_t)this + 0x7b8);
}
float& _Script_Foliage::FoliageType::get_OverlapPriority() {
    return *(float*)((uintptr_t)this + 0x7bc);
}
void* _Script_Foliage::FoliageType::get_ProceduralScale() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_Foliage::FoliageType::get_ScaleCurve() {
    return (void*)((uintptr_t)this + 0x7c8);
}
void* _Script_Foliage::FoliageType::get_RsAudioClass() {
    return (void*)((uintptr_t)this + 0x840);
}
bool _Script_Foliage::FoliageType::get_ReapplyDensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyDensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 2 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyAlignToNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 4 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyAlignToNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyRandomYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 8 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyRandomYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 16 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyScaleX() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 32 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyScaleX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyScaleY() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 64 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyScaleY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyScaleZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x84c + 0)) & 128 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyScaleZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84c + 0);
    *(uint8_t*)((uintptr_t)this + 0x84c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyRandomPitchAngle() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyRandomPitchAngle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Foliage::FoliageType::set_ReapplyGroundSlope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 4 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyLandscapeLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 8 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyLandscapeLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyZOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 16 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyZOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyCollisionWithWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 32 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyCollisionWithWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Foliage::FoliageType::get_ReapplyVertexColorMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 64 != 0;
}
void _Script_Foliage::FoliageType::set_ReapplyVertexColorMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Foliage::FoliageType::get_bEnableDensityScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x84d + 0)) & 128 != 0;
}
void _Script_Foliage::FoliageType::set_bEnableDensityScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84d + 0);
    *(uint8_t*)((uintptr_t)this + 0x84d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
