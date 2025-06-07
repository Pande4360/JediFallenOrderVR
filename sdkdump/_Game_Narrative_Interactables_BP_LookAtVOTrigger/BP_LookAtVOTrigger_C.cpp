#include "..\FUObjectArray.hpp"
#include "BP_LookAtVOTrigger_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_RadioCallInObject\BP_RadioCallInObject_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_LookAtVOTrigger::BP_LookAtVOTrigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_LookAtVOTrigger.BP_LookAtVOTrigger_C");
    return result;
}
