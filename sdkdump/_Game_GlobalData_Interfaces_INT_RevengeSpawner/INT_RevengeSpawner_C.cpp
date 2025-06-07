#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "INT_RevengeSpawner_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_RevengeSpawner::INT_RevengeSpawner_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_RevengeSpawner.INT_RevengeSpawner_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_RevengeSpawner::INT_RevengeSpawner_C::IsNotRevengeTarget(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C* BaseAIRef, bool& NotRevengeTarget) {
    return;
}
