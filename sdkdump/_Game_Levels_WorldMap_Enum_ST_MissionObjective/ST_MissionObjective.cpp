#include "..\FUObjectArray.hpp"
#include "ST_MissionObjective.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::get_ObjectiveName_30_29D4A4564EEDEAD74D27668EBBADEF6D() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::set_Autoplay__39_5AF6254D406070ED003B2C859EA674C1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::get_ObjectiveDescription_31_62FCED1445B26A7711E123BD2C8B985A() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::get_ObjectiveType_29_70F8EE3E4CBB706BA56544970F77E3CB() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Levels/WorldMap/Enum/ST_MissionObjective.ST_MissionObjective");
    return result;
}
void* _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::get_MapSectionVolumeTag_22_AA6C613444EA959CE47691AE65629DF9() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::get_Location_26_4B4D760E46DA24634EDDBEA88DFA6F6E() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective::get_Autoplay__39_5AF6254D406070ED003B2C859EA674C1() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
