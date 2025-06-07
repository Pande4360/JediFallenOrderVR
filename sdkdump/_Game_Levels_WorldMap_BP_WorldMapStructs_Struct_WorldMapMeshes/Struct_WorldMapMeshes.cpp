#include "..\FUObjectArray.hpp"
#include "Struct_WorldMapMeshes.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapMeshes::Struct_WorldMapMeshes::get_StaticMeshes_3_D6AD42D74E2EF9833F83C0B090B8FE84() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapMeshes::Struct_WorldMapMeshes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Levels/WorldMap/BP/WorldMapStructs/Struct_WorldMapMeshes.Struct_WorldMapMeshes");
    return result;
}
