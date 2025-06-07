#include "..\FUObjectArray.hpp"
#include "Struct_WorldMapTraits.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTraits::Struct_WorldMapTraits::get_BlinkingVar_5_06C09A87462236842BDF8EAD3AC6B2A5() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTraits::Struct_WorldMapTraits::get_BlinkingSpeedVar_6_7A021B2F4C47745C62AA9DB45F9B0FA9() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTraits::Struct_WorldMapTraits::get_MultiplierVar_9_8C660AC54AB30812F92784B0CD8DE018() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTraits::Struct_WorldMapTraits::get_CorrespondingName_11_8C8969DD4C87E6ECE05A6B94A2767591() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTraits::Struct_WorldMapTraits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Levels/WorldMap/BP/WorldMapStructs/Struct_WorldMapTraits.Struct_WorldMapTraits");
    return result;
}
