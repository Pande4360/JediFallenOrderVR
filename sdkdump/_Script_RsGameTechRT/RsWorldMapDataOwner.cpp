#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsWorldMapDataOwner.hpp"
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_ExploredMapSections() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_WorldMapName() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_SecreteMapSections() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_InitiallyExploredMapSections() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_ExploredInteriorLevels() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_UnexploredMapSections() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_MapSectionsPerRegion() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_InteriorLevels() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_SectionCentroidPositionMap() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_RegionCentroidPositionMap() {
    return (void*)((uintptr_t)this + 0x528);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StaticMeshActorsPerRegion() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_InteriorLevelPerMapSection() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_MapSectionStaticMeshActors() {
    return (void*)((uintptr_t)this + 0x5c8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_NonMapSectionStaticMeshActors() {
    return (void*)((uintptr_t)this + 0x5d8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_GatewayActors() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StateTransitionGatewayActors() {
    return (void*)((uintptr_t)this + 0x5f8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StateTransitionStaticMeshActors() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_DoorActors() {
    return (void*)((uintptr_t)this + 0x618);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_WorldMapActors() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StaticMeshActorsPerMapSection() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_GatewayActorsPerMapSection() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_DoorActorsPerMapSection() {
    return (void*)((uintptr_t)this + 0x728);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_GatewayActorsPerType() {
    return (void*)((uintptr_t)this + 0x778);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_DoorActorsPerType() {
    return (void*)((uintptr_t)this + 0x7c8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StaticMeshActorsPerType() {
    return (void*)((uintptr_t)this + 0x818);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_WorldMapActorsPerMapSection() {
    return (void*)((uintptr_t)this + 0x868);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_WorldMapActorsPerRegion() {
    return (void*)((uintptr_t)this + 0x8b8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StaticMeshActorsPerInteriorLevel() {
    return (void*)((uintptr_t)this + 0x908);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_DoorComponentIdToDoorActorMap() {
    return (void*)((uintptr_t)this + 0x958);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StateTransitionGatewayComponentIdToActorMap() {
    return (void*)((uintptr_t)this + 0x9a8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_StateTransitionStaticMeshComponentIdToActorMap() {
    return (void*)((uintptr_t)this + 0x9f8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_CollectableComponentIdToRegionMap() {
    return (void*)((uintptr_t)this + 0xa48);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_AcquiredCollectablesPerRegionMap() {
    return (void*)((uintptr_t)this + 0xa98);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_NonAcquiredCollectablesPerRegionMap() {
    return (void*)((uintptr_t)this + 0xae8);
}
void* _Script_RsGameTechRT::RsWorldMapDataOwner::get_RegionCollectableCompletionStatusMap() {
    return (void*)((uintptr_t)this + 0xb38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapDataOwner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapDataOwner");
    return result;
}
