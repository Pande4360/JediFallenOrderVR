#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsMapSectionTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct DataAsset;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapHologramBase;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UnloadWorldMapStreamingLevels(_Script_CoreUObject::Object* WorldContext);
    void SetRegionCollectableCompletionStatus(_Script_CoreUObject::Object* WorldContext, void*& Region);
    void SetMapSectionUnexplored(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void SetMapSectionExplored(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void ResetRsWorldMap(_Script_CoreUObject::Object* WorldContext);
    void LoadWorldMapVisLevel(_Script_CoreUObject::Object* WorldContext, void* WorldMapName);
    void LoadWorldMapStreamingLevels(_Script_CoreUObject::Object* WorldContext, void* WorldMapName);
    bool IsWorldMapLoaded(_Script_CoreUObject::Object* WorldContext);
    bool IsShowUnexploredEnabled(_Script_CoreUObject::Object* WorldContext);
    bool IsPendingWorldMapStreaming(_Script_CoreUObject::Object* WorldContext);
    bool IsMapSectionSecrete(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    bool IsMapSectionExplored(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    bool IsAutoExploreEnabled(_Script_CoreUObject::Object* WorldContext);
    _Script_Engine::DataAsset* GetWorldMapHologramSettings(_Script_CoreUObject::Object* WorldContext);
    _Script_RsGameTechRT::RsWorldMapHologramBase* GetWorldMapHologramActor(_Script_CoreUObject::Object* WorldContext);
    void* GetWorldMapActorsForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region);
    int32_t GetTotalMapSectionsForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName);
    int32_t GetTotalMapSectionsForRegion(_Script_CoreUObject::Object* WorldContext, void*& RegionName);
    int32_t GetTotalCollectablesForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName, void* CollectableType);
    int32_t GetTotalCollectablesForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region, void* CollectableType);
    void* GetStaticMeshActorsWithInteriorLevel(_Script_CoreUObject::Object* WorldContext, void* InteriorLevel);
    void* GetStaticMeshActorsForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region);
    void* GetStaticMeshActorsForMapSection(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void* GetRootLevelWorldMapName(_Script_CoreUObject::Object* WorldContext);
    _Script_CoreUObject::Vector GetRegionCentroidPosition(_Script_CoreUObject::Object* WorldContext, void*& RegionName);
    int32_t GetNumExploredMapSectionsForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName);
    int32_t GetNumExploredMapSectionsForRegion(_Script_CoreUObject::Object* WorldContext, void*& RegionName);
    int32_t GetNumCollectablesAcquiredForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName, void* CollectableType);
    int32_t GetNumAcquiredCollectablesForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region, void* CollectableType);
    void* GetMapSectionInteriorLevel(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    _Script_CoreUObject::Vector GetMapSectionCentroidPosition(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void* GetLoaded3DMapVisLevelName(_Script_CoreUObject::Object* WorldContext);
    void* GetLoaded3DMapColLevelName(_Script_CoreUObject::Object* WorldContext);
    bool GetIsRootLevelWorldMapAutoStreamingEnabled(_Script_CoreUObject::Object* WorldContext);
    void* GetGatewayActorsForMapSection(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void* GetExploredInteriorLevels(_Script_CoreUObject::Object* WorldContext);
    void* GetDoorActorsForMapSection(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    _Script_RsGameTechRT::RsMapSectionTag GetCurrentPlayerMapSection(_Script_CoreUObject::Object* WorldContext);
    void* GetCurrentlyLoadedWorldMapName(_Script_CoreUObject::Object* WorldContext);
    void* GetAllStaticMeshActorsOfType(_Script_CoreUObject::Object* WorldContext, void* MeshType);
    void* GetAllStateTransitionGatewayActors(_Script_CoreUObject::Object* WorldContext);
    void* GetAllRegionNames(_Script_CoreUObject::Object* WorldContext);
    void* GetAllNonMapSectionStaticMeshActors(_Script_CoreUObject::Object* WorldContext);
    void* GetAllMapSectionStaticMeshActors(_Script_CoreUObject::Object* WorldContext);
    void* GetAllGatewayActorsOfType(_Script_CoreUObject::Object* WorldContext, void* GatewayType);
    void* GetAllGatewayActors(_Script_CoreUObject::Object* WorldContext);
    void* GetAllDoorActorsOfType(_Script_CoreUObject::Object* WorldContext, void* GatewayType);
    void* GetAllDoorActors(_Script_CoreUObject::Object* WorldContext);
    void EnableRootLevelWorldMapAutoStreaming(_Script_CoreUObject::Object* WorldContext, bool bEnabled);
    void AddMapSectionToTranslationBounds(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
}; // Size: 0x28
#pragma pack(pop)
}
