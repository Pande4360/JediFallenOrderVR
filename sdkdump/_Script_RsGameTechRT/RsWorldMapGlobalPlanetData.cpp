#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsWorldMapGlobalPlanetData.hpp"
void* _Script_RsGameTechRT::RsWorldMapGlobalPlanetData::get_WorldName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsWorldMapGlobalPlanetData::get_CollectablesTotal() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapGlobalPlanetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapGlobalPlanetData");
    return result;
}
int32_t& _Script_RsGameTechRT::RsWorldMapGlobalPlanetData::get_MapSectionTotals() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
