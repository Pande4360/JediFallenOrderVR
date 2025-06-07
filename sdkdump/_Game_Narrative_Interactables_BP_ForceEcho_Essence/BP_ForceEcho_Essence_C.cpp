#include "..\FUObjectArray.hpp"
#include "..\_Game_Narrative_Interactables_BP_ForceEcho_Base\BP_ForceEcho_Base_C.hpp"
#include "BP_ForceEcho_Essence_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
void _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::UserConstructionScript() {
    return;
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x5e8);
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::get_ForceEssence() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x5f0);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::ExecuteUbergraph_BP_ForceEcho_Essence(int32_t EntryPoint) {
    return;
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::get_EssenceType() {
    return (void*)((uintptr_t)this + 0x5f8);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_ForceEcho_Essence.BP_ForceEcho_Essence_C");
    return result;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Essence::BP_ForceEcho_Essence_C::ScriptedAnimBinding0() {
    return;
}
