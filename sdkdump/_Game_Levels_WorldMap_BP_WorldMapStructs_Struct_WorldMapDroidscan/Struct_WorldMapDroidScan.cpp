#include "..\FUObjectArray.hpp"
#include "Struct_WorldMapDroidScan.hpp"
#include "..\_Game_UI_Holomap_UI_CriticalPath\UI_CriticalPath_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C*& _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapDroidscan::Struct_WorldMapDroidScan::get_UI_13_3D44C803486960C8B20D6D832A98227F() {
    return *(_Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C**)((uintptr_t)this + 0x0);
}
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapDroidscan::Struct_WorldMapDroidScan::get_Location_15_311F2A61463DCB7B855483A0B77D57EF() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapDroidscan::Struct_WorldMapDroidScan::get_Planet_18_8917F13D415AC3BECF6C058D0C983C3D() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapDroidscan::Struct_WorldMapDroidScan::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Levels/WorldMap/BP/WorldMapStructs/Struct_WorldMapDroidscan.Struct_WorldMapDroidScan");
    return result;
}
