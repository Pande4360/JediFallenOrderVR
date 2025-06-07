#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwActorsFloatingInWaterParameters {
    private: char pad_0[0x98]; public:
    bool get_DoNotActivate();
    void set_DoNotActivate(bool value);
    bool get_DebugShowHeroRanges();
    void set_DebugShowHeroRanges(bool value);
    bool get_DebugShowBasicInfoForEveryObject();
    void set_DebugShowBasicInfoForEveryObject(bool value);
    bool get_DebugShowRotationalAlignment();
    void set_DebugShowRotationalAlignment(bool value);
    bool get_DebugShowSpawningExclusionAreas();
    void set_DebugShowSpawningExclusionAreas(bool value);
    void* get_HiResActorsDefinition();
    void* get_StaticMeshesDefinition();
    int32_t& get_TotalNumberOfObjects();
    int32_t& get_InitialNumberOfObjectsOnX();
    int32_t& get_InitialNumberOfObjectsOnY();
    float& get_InitialSpawningChancePercentage();
    int32_t& get_HiResPoolSize();
    int32_t& get_LowResPoolSize();
    float& get_MaximumDistanceFromHeroForAnyObject();
    float& get_DistanceFromHeroToStartDynamicSpawning();
    float& get_DistanceBelowWaterToSafelySpawnPool();
    float& get_HiResDistanceOnXBetweenActorsInPool();
    float& get_SurfaceAlignmentSpeed();
    float& get_LowResSurfaceAlignmentSpeed();
    bool get_HiResRotationAlignmentEnabled();
    void set_HiResRotationAlignmentEnabled(bool value);
    float& get_HiResRotationAlignmentSpeed();
    float& get_LowResDistanceBelowWaterAfterActivation();
    float& get_MinimumDistanceBetweenTwoObjects();
    float& get_MinimumDistanceBetweenTwoObjectsVariation();
    float& get_UsablePartOfTheSurfaceCoef();
    float& get_WaterSurfaceOffset();
    bool get_WaterFlowDisabled();
    void set_WaterFlowDisabled(bool value);
    void* get_WaterFlowDirection();
    float& get_WaterFlowStrength();
    void* get_SpawningExclusionAreas();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
