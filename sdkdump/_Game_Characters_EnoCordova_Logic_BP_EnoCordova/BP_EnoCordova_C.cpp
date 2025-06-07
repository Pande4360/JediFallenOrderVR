#include "..\FUObjectArray.hpp"
#include "BP_EnoCordova_C.hpp"
#include "..\_Game_Narrative_Hub_Chumps_BP_ChumpBase\BP_ChumpBase_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_EnoCordova_Logic_BP_EnoCordova::BP_EnoCordova_C::get_face() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2bc8);
}
_Script_CoreUObject::Class* _Game_Characters_EnoCordova_Logic_BP_EnoCordova::BP_EnoCordova_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/EnoCordova/Logic/BP_EnoCordova.BP_EnoCordova_C");
    return result;
}
void _Game_Characters_EnoCordova_Logic_BP_EnoCordova::BP_EnoCordova_C::UserConstructionScript0() {
    return;
}
