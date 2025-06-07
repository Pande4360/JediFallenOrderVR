#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_EventZones_Zone_LoadAreaNEW\Zone_LoadAreaNEW_C.hpp"
#include "Zone_LoadAreaOLD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_EventZones_Zone_LoadAreaOLD::Zone_LoadAreaOLD_C::get_Cube_0() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x438);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Zone_LoadAreaOLD::Zone_LoadAreaOLD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Zone_LoadAreaOLD.Zone_LoadAreaOLD_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Zone_LoadAreaOLD::Zone_LoadAreaOLD_C::UserConstructionScript0() {
    return;
}
