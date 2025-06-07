#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsNavMeshGenerationParams {
    private: char pad_0[0x38]; public:
    float& get_TileSizeUU();
    float& get_CellSize();
    float& get_CellHeight();
    float& get_AgentMaxSlope();
    float& get_MinRegionArea();
    float& get_MergeRegionSize();
    float& get_MaxSimplificationError();
    bool get_bSortNavigationAreasByCost();
    void set_bSortNavigationAreasByCost(bool value);
    bool get_bPerformVoxelFiltering();
    void set_bPerformVoxelFiltering(bool value);
    bool get_bMarkLowHeightAreas();
    void set_bMarkLowHeightAreas(bool value);
    bool get_bFilterLowSpanSequences();
    void set_bFilterLowSpanSequences(bool value);
    bool get_bFilterLowSpanFromTileCache();
    void set_bFilterLowSpanFromTileCache(bool value);
    bool get_bDoFullyAsyncNavDataGathering();
    void set_bDoFullyAsyncNavDataGathering(bool value);
    bool get_bUseBetterOffsetsFromCorners();
    void set_bUseBetterOffsetsFromCorners(bool value);
    bool get_bStoreEmptyTileLayers();
    void set_bStoreEmptyTileLayers(bool value);
    bool get_bAllowNavLinkAsPathEnd();
    void set_bAllowNavLinkAsPathEnd(bool value);
    bool get_bUseVoxelCache();
    void set_bUseVoxelCache(bool value);
    void* get_RegionPartitioning();
    void* get_LayerPartitioning();
    int32_t& get_RegionChunkSplits();
    int32_t& get_LayerChunkSplits();
    int32_t& get_MaxSimultaneousTileGenerationJobsCount();
    float& get_TileSetUpdateInterval();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
