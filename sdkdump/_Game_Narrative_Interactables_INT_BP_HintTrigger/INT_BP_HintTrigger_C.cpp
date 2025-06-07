#include "..\FUObjectArray.hpp"
#include "INT_BP_HintTrigger_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Interactables_INT_BP_HintTrigger::INT_BP_HintTrigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/INT_BP_HintTrigger.INT_BP_HintTrigger_C");
    return result;
}
void _Game_Narrative_Interactables_INT_BP_HintTrigger::INT_BP_HintTrigger_C::PassDroidConfirmMessage() {
    return;
}
