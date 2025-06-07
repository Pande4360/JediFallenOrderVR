#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsWorldMapGlobalPlanetsDataOwner.hpp"
void* _Script_RsGameTechRT::RsWorldMapGlobalPlanetsDataOwner::get_PerPlanetCollectablesAcquired() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_RsGameTechRT::RsWorldMapGlobalPlanetsDataOwner::get_PerPlanetMapSectionsExplored() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_RsGameTechRT::RsWorldMapGlobalPlanetsDataOwner::get_GlobalPlanetDataMap() {
    return (void*)((uintptr_t)this + 0x400);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapGlobalPlanetsDataOwner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapGlobalPlanetsDataOwner");
    return result;
}
