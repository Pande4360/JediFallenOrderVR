#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsMapSectionTag.hpp"
#include "RsWorldMapFunctionLibrary.hpp"
#include "RsWorldMapHologramBase.hpp"
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::AddMapSectionToTranslationBounds(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::SetMapSectionExplored(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapFunctionLibrary");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::LoadWorldMapVisLevel(_Script_CoreUObject::Object* WorldContext, void* WorldMapName) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::SetMapSectionUnexplored(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::UnloadWorldMapStreamingLevels(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::SetRegionCollectableCompletionStatus(_Script_CoreUObject::Object* WorldContext, void*& Region) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::ResetRsWorldMap(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::LoadWorldMapStreamingLevels(_Script_CoreUObject::Object* WorldContext, void* WorldMapName) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::IsWorldMapLoaded(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::IsShowUnexploredEnabled(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::IsPendingWorldMapStreaming(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::IsMapSectionSecrete(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::IsMapSectionExplored(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::IsAutoExploreEnabled(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_Engine::DataAsset* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetWorldMapHologramSettings(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_RsGameTechRT::RsWorldMapHologramBase* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetWorldMapHologramActor(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetWorldMapActorsForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetTotalMapSectionsForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetTotalMapSectionsForRegion(_Script_CoreUObject::Object* WorldContext, void*& RegionName) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetTotalCollectablesForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName, void* CollectableType) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetTotalCollectablesForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region, void* CollectableType) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetStaticMeshActorsWithInteriorLevel(_Script_CoreUObject::Object* WorldContext, void* InteriorLevel) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetStaticMeshActorsForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetStaticMeshActorsForMapSection(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetRootLevelWorldMapName(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetRegionCentroidPosition(_Script_CoreUObject::Object* WorldContext, void*& RegionName) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetNumExploredMapSectionsForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllDoorActorsOfType(_Script_CoreUObject::Object* WorldContext, void* GatewayType) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetNumExploredMapSectionsForRegion(_Script_CoreUObject::Object* WorldContext, void*& RegionName) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetNumCollectablesAcquiredForWorld(_Script_CoreUObject::Object* WorldContext, void*& WorldName, void* CollectableType) {
    return;
}
int32_t _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetNumAcquiredCollectablesForRegion(_Script_CoreUObject::Object* WorldContext, void*& Region, void* CollectableType) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetMapSectionInteriorLevel(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllGatewayActors(_Script_CoreUObject::Object* WorldContext) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetMapSectionCentroidPosition(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetLoaded3DMapVisLevelName(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapFunctionLibrary::EnableRootLevelWorldMapAutoStreaming(_Script_CoreUObject::Object* WorldContext, bool bEnabled) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetLoaded3DMapColLevelName(_Script_CoreUObject::Object* WorldContext) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetIsRootLevelWorldMapAutoStreamingEnabled(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetGatewayActorsForMapSection(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetExploredInteriorLevels(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetDoorActorsForMapSection(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
_Script_RsGameTechRT::RsMapSectionTag _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetCurrentPlayerMapSection(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetCurrentlyLoadedWorldMapName(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllStaticMeshActorsOfType(_Script_CoreUObject::Object* WorldContext, void* MeshType) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllRegionNames(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllStateTransitionGatewayActors(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllNonMapSectionStaticMeshActors(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllMapSectionStaticMeshActors(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllGatewayActorsOfType(_Script_CoreUObject::Object* WorldContext, void* GatewayType) {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapFunctionLibrary::GetAllDoorActors(_Script_CoreUObject::Object* WorldContext) {
    return;
}
