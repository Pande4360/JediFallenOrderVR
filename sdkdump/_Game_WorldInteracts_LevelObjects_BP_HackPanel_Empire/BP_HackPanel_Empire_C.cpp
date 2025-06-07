#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_HackPanel\BP_HackPanel_C.hpp"
#include "BP_HackPanel_Empire_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
void _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::PanelHacked(_Script_RsGameTechRT::RsAIPOI* POI) {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x690);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x698);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::get_HackPanel_Empire_BodyCase_01() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6a0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_HackPanel_Empire.BP_HackPanel_Empire_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::ExecuteUbergraph_BP_HackPanel_Empire(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_HackPanel_Empire::BP_HackPanel_Empire_C::ReceiveBeginPlay() {
    return;
}
