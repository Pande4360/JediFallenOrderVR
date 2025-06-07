#include "..\FUObjectArray.hpp"
#include "BP_POI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOIRenderComponent.hpp"
void* _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x570);
}
_Script_Engine::BillboardComponent*& _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_Billboard_Broadcast() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x580);
}
_Script_RsGameTechRT::RsAIPOIRenderComponent*& _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_RsAIPOIRender() {
    return *(_Script_RsGameTechRT::RsAIPOIRenderComponent**)((uintptr_t)this + 0x578);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x588);
}
_Script_Engine::SphereComponent*& _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_Radius_EditorOnly() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x590);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_SyncLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x598);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_AI_BP_POI::BP_POI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/AI/BP_POI.BP_POI_C");
    return result;
}
_Script_Engine::BillboardComponent*& _Game_WorldInteracts_AI_BP_POI::BP_POI_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x5a0);
}
void _Game_WorldInteracts_AI_BP_POI::BP_POI_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_AI_BP_POI::BP_POI_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_AI_BP_POI::BP_POI_C::ExecuteUbergraph_BP_POI(int32_t EntryPoint) {
    return;
}
