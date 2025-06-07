#include "..\FUObjectArray.hpp"
#include "ST_AI_Health.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_Characters__Shared_Logic_ST_AI_Health::ST_AI_Health::get_EnemyHealth_2_824C272C42C7558019AD7DB023B30EF3() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_Characters__Shared_Logic_ST_AI_Health::ST_AI_Health::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Characters/_Shared/Logic/ST_AI_Health.ST_AI_Health");
    return result;
}
