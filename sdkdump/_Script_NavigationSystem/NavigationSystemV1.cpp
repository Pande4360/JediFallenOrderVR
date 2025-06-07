#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\NavigationSystemBase.hpp"
#include "CrowdManagerBase.hpp"
#include "NavMeshBoundsVolume.hpp"
#include "NavigationData.hpp"
#include "NavigationPath.hpp"
#include "NavigationSystemV1.hpp"
void* _Script_NavigationSystem::NavigationSystemV1::get_RegisteredNavData() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationSystemV1::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationSystemV1");
    return result;
}
void* _Script_NavigationSystem::NavigationSystemV1::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_NavigationSystem::NavigationSystemV1::get_CrowdManagerClass() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_NavigationSystem::NavigationSystemV1::get_DirtyAreasUpdateFrequency() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_NavigationSystem::CrowdManagerBase*& _Script_NavigationSystem::NavigationSystemV1::get_CrowdManager() {
    return *(_Script_NavigationSystem::CrowdManagerBase**)((uintptr_t)this + 0x48);
}
_Script_NavigationSystem::NavigationData*& _Script_NavigationSystem::NavigationSystemV1::get_AbstractNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x58);
}
_Script_NavigationSystem::NavigationData*& _Script_NavigationSystem::NavigationSystemV1::get_MainNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x50);
}
bool _Script_NavigationSystem::NavigationSystemV1::get_bInitialBuildingLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x311 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationSystemV1::set_bInitialBuildingLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x311 + 0);
    *(uint8_t*)((uintptr_t)this + 0x311 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::NavigationSystemV1::IsNavigationBeingBuilt(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_NavigationSystem::NavigationSystemV1::OnNavigationBoundsUpdated(_Script_NavigationSystem::NavMeshBoundsVolume* NavVolume) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::NavigationRaycast(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& RayStart, _Script_CoreUObject::Vector& RayEnd, _Script_CoreUObject::Vector& HitLocation, void* FilterClass, _Script_Engine::Controller* Querier) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& ProjectedLocation, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::K2_GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
bool _Script_NavigationSystem::NavigationSystemV1::IsNavigationBeingBuiltOrLocked(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_NavigationSystem::NavigationSystemV1::GetPathLength(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathLength, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
void* _Script_NavigationSystem::NavigationSystemV1::GetPathCost(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathCost, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass) {
    return;
}
_Script_NavigationSystem::NavigationSystemV1* _Script_NavigationSystem::NavigationSystemV1::GetNavigationSystem(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_NavigationSystem::NavigationPath* _Script_NavigationSystem::NavigationSystemV1::FindPathToLocationSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, _Script_Engine::Actor* PathfindingContext, void* FilterClass) {
    return;
}
_Script_NavigationSystem::NavigationPath* _Script_NavigationSystem::NavigationSystemV1::FindPathToActorSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_Engine::Actor* GoalActor, float TetherDistance, _Script_Engine::Actor* PathfindingContext, void* FilterClass) {
    return;
}
