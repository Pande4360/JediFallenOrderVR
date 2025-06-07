#include "..\FUObjectArray.hpp"
#include "BP_DeathXP_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::Interacted0() {
    return;
}
void _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::ReceiveBeginPlay() {
    return;
}
void* _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x418);
}
void _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::UserConstructionScript() {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::get_P_Psychometry_Revenge() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x420);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/BP_DeathXP.BP_DeathXP_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x428);
}
void _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::LVL_activate() {
    return;
}
void _Game_WorldInteracts_BP_DeathXP::BP_DeathXP_C::ExecuteUbergraph_BP_DeathXP(int32_t EntryPoint) {
    return;
}
