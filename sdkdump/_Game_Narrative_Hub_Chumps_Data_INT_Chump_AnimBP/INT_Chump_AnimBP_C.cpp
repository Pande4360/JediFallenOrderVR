#include "..\FUObjectArray.hpp"
#include "INT_Chump_AnimBP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Hub_Chumps_Data_INT_Chump_AnimBP::INT_Chump_AnimBP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Hub/Chumps/Data/INT_Chump_AnimBP.INT_Chump_AnimBP_C");
    return result;
}
void _Game_Narrative_Hub_Chumps_Data_INT_Chump_AnimBP::INT_Chump_AnimBP_C::SetChumpIdleAnim(int32_t Number, bool& Success) {
    return;
}
