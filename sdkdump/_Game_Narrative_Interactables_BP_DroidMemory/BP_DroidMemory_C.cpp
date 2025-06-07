#include "..\FUObjectArray.hpp"
#include "BP_DroidMemory_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_DroidMemory::BP_DroidMemory_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_DroidMemory.BP_DroidMemory_C");
    return result;
}
