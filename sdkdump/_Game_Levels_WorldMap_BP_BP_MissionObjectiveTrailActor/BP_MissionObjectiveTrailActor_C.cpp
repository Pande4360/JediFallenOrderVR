#include "..\FUObjectArray.hpp"
#include "BP_MissionObjectiveTrailActor_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::get_Target() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_MissionObjectiveTrailActor.BP_MissionObjectiveTrailActor_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::get_SM_WorldMapHologram_MissionEventDirectionArrow() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
float& _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::get_Zoom() {
    return *(float*)((uintptr_t)this + 0x378);
}
int32_t& _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::get_AnimationPosition() {
    return *(int32_t*)((uintptr_t)this + 0x37c);
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor::BP_MissionObjectiveTrailActor_C::UserConstructionScript0() {
    return;
}
