#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapDataOwner : public _Script_Engine::Actor {
    private: char pad_360[0x898]; public:
    void* get_WorldMapName();
    void* get_InitiallyExploredMapSections();
    void* get_ExploredMapSections();
    void* get_UnexploredMapSections();
    void* get_SecreteMapSections();
    void* get_MapSectionsPerRegion();
    void* get_InteriorLevels();
    void* get_ExploredInteriorLevels();
    void* get_SectionCentroidPositionMap();
    void* get_RegionCentroidPositionMap();
    void* get_InteriorLevelPerMapSection();
    void* get_MapSectionStaticMeshActors();
    void* get_NonMapSectionStaticMeshActors();
    void* get_GatewayActors();
    void* get_StateTransitionGatewayActors();
    void* get_StateTransitionStaticMeshActors();
    void* get_DoorActors();
    void* get_WorldMapActors();
    void* get_StaticMeshActorsPerMapSection();
    void* get_StaticMeshActorsPerRegion();
    void* get_GatewayActorsPerMapSection();
    void* get_DoorActorsPerMapSection();
    void* get_GatewayActorsPerType();
    void* get_DoorActorsPerType();
    void* get_StaticMeshActorsPerType();
    void* get_WorldMapActorsPerMapSection();
    void* get_WorldMapActorsPerRegion();
    void* get_StaticMeshActorsPerInteriorLevel();
    void* get_DoorComponentIdToDoorActorMap();
    void* get_StateTransitionGatewayComponentIdToActorMap();
    void* get_StateTransitionStaticMeshComponentIdToActorMap();
    void* get_CollectableComponentIdToRegionMap();
    void* get_AcquiredCollectablesPerRegionMap();
    void* get_NonAcquiredCollectablesPerRegionMap();
    void* get_RegionCollectableCompletionStatusMap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xbf8
#pragma pack(pop)
}
