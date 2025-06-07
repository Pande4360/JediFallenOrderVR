#include "..\FUObjectArray.hpp"
#include "BP_MissionObjective_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
float& _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_SecondaryScale() {
    return *(float*)((uintptr_t)this + 0x390);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_ObjectiveName() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_SM_POI_DiamondTest() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::StaticMesh*& _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_StaticMesh_Primary() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x380);
}
_Script_Engine::StaticMesh*& _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_StaticMesh_Secondary() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x388);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_LVL_ObjectiveHidden() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::get_LVL_ObjectiveShown() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_MissionObjective.BP_MissionObjective_C");
    return result;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::ExecuteUbergraph_BP_MissionObjective(int32_t EntryPoint) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::LVL_ObjectiveShown__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjective::BP_MissionObjective_C::LVL_ObjectiveHidden__DelegateSignature() {
    return;
}
