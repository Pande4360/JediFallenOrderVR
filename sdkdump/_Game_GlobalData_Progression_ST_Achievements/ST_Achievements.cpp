#include "..\FUObjectArray.hpp"
#include "ST_Achievements.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Game_GlobalData_Progression_ST_Achievements::ST_Achievements::get_TotalProgressRequired_4_F7CA77514DEC7559CD3C05A046C8C16F() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_GlobalData_Progression_ST_Achievements::ST_Achievements::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Progression/ST_Achievements.ST_Achievements");
    return result;
}
