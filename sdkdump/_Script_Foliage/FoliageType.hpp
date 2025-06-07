#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageType : public _Script_CoreUObject::Object {
    private: char pad_28[0x828]; public:
    void* get_UpdateGuid();
    float& get_Density();
    float& get_DensityAdjustmentFactor();
    float& get_Radius();
    void* get_Scaling();
    void* get_ScaleX();
    void* get_ScaleY();
    void* get_ScaleZ();
    void* get_VertexColorMaskByChannel();
    void* get_VertexColorMask();
    float& get_VertexColorMaskThreshold();
    bool get_VertexColorMaskInvert();
    void set_VertexColorMaskInvert(bool value);
    void* get_ZOffset();
    bool get_AlignToNormal();
    void set_AlignToNormal(bool value);
    float& get_AlignMaxAngle();
    bool get_RandomYaw();
    void set_RandomYaw(bool value);
    float& get_RandomPitchAngle();
    void* get_GroundSlopeAngle();
    void* get_Height();
    void* get_LandscapeLayers();
    void* get_LandscapeLayer();
    bool get_CollisionWithWorld();
    void set_CollisionWithWorld(bool value);
    void* get_CollisionScale();
    float& get_MinimumLayerWeight();
    void* get_MeshBounds();
    void* get_LowBoundOriginRadius();
    void* get_Mobility();
    void* get_CullDistance();
    bool get_bEnableStaticLighting();
    void set_bEnableStaticLighting(bool value);
    bool get_CastShadow();
    void set_CastShadow(bool value);
    bool get_bAffectDynamicIndirectLighting();
    void set_bAffectDynamicIndirectLighting(bool value);
    bool get_bAffectDistanceFieldLighting();
    void set_bAffectDistanceFieldLighting(bool value);
    bool get_bCastDynamicShadow();
    void set_bCastDynamicShadow(bool value);
    bool get_bCastStaticShadow();
    void set_bCastStaticShadow(bool value);
    bool get_bCastShadowAsTwoSided();
    void set_bCastShadowAsTwoSided(bool value);
    bool get_bReceivesDecals();
    void set_bReceivesDecals(bool value);
    bool get_bOverrideLightMapRes();
    void set_bOverrideLightMapRes(bool value);
    int32_t& get_OverriddenLightMapRes();
    void* get_LightmapType();
    bool get_bUseAsOccluder();
    void set_bUseAsOccluder(bool value);
    void* get_BodyInstance();
    void* get_CustomNavigableGeometry();
    void* get_LightingChannels();
    bool get_bRenderCustomDepth();
    void set_bRenderCustomDepth(bool value);
    int32_t& get_CustomDepthStencilValue();
    float& get_CollisionRadius();
    float& get_ShadeRadius();
    int32_t& get_NumSteps();
    float& get_InitialSeedDensity();
    float& get_AverageSpreadDistance();
    float& get_SpreadVariance();
    int32_t& get_SeedsPerStep();
    int32_t& get_DistributionSeed();
    float& get_MaxInitialSeedOffset();
    bool get_bCanGrowInShade();
    void set_bCanGrowInShade(bool value);
    bool get_bSpawnsInShade();
    void set_bSpawnsInShade(bool value);
    float& get_MaxInitialAge();
    float& get_MaxAge();
    float& get_OverlapPriority();
    void* get_ProceduralScale();
    void* get_ScaleCurve();
    void* get_RsAudioClass();
    int32_t& get_ChangeCount();
    bool get_ReapplyDensity();
    void set_ReapplyDensity(bool value);
    bool get_ReapplyRadius();
    void set_ReapplyRadius(bool value);
    bool get_ReapplyAlignToNormal();
    void set_ReapplyAlignToNormal(bool value);
    bool get_ReapplyRandomYaw();
    void set_ReapplyRandomYaw(bool value);
    bool get_ReapplyScaling();
    void set_ReapplyScaling(bool value);
    bool get_ReapplyScaleX();
    void set_ReapplyScaleX(bool value);
    bool get_ReapplyScaleY();
    void set_ReapplyScaleY(bool value);
    bool get_ReapplyScaleZ();
    void set_ReapplyScaleZ(bool value);
    bool get_ReapplyRandomPitchAngle();
    void set_ReapplyRandomPitchAngle(bool value);
    bool get_ReapplyGroundSlope();
    void set_ReapplyGroundSlope(bool value);
    bool get_ReapplyHeight();
    void set_ReapplyHeight(bool value);
    bool get_ReapplyLandscapeLayers();
    void set_ReapplyLandscapeLayers(bool value);
    bool get_ReapplyZOffset();
    void set_ReapplyZOffset(bool value);
    bool get_ReapplyCollisionWithWorld();
    void set_ReapplyCollisionWithWorld(bool value);
    bool get_ReapplyVertexColorMask();
    void set_ReapplyVertexColorMask(bool value);
    bool get_bEnableDensityScaling();
    void set_bEnableDensityScaling(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x850
#pragma pack(pop)
}
