#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "BP_StateTransitionStaticMesh_General_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionStaticMeshActor.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void* _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::get_StateTwo() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::SceneComponent*& _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b8);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::get_StateOne() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::get_bStateChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3c8);
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::set_bStateChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/StaticMesh/BP_StateTransitionStaticMesh_General.BP_StateTransitionStaticMesh_General_C");
    return result;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::UserConstructionScript() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::ReceiveStateChanged0(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::OnRegionChange() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::SetVisibility() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General::BP_StateTransitionStaticMesh_General_C::ExecuteUbergraph_BP_StateTransitionStaticMesh_General(int32_t EntryPoint) {
    return;
}
