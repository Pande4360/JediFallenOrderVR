#include "..\FUObjectArray.hpp"
#include "ST_PlanetUnlockedBookInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Game_Narrative_Enums_ST_PlanetUnlockedBookInfo::ST_PlanetUnlockedBookInfo::get_BookUnlockedStoryCount_6_AA28CE2C4E427F8D1F9AFE99E721650E() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Game_Narrative_Enums_ST_PlanetUnlockedBookInfo::ST_PlanetUnlockedBookInfo::get_BookName_2_2A6B76F64202D4918A6D1888E39B4109() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Game_Narrative_Enums_ST_PlanetUnlockedBookInfo::ST_PlanetUnlockedBookInfo::get_BookTotalStoryCount_8_38F1F1374574DF7EA7798D9A3086F10A() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_PlanetUnlockedBookInfo::ST_PlanetUnlockedBookInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_PlanetUnlockedBookInfo.ST_PlanetUnlockedBookInfo");
    return result;
}
