#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\NavigationSystemBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
struct CrowdManagerBase;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_NavigationSystem {
struct NavigationData;
}
namespace _Script_NavigationSystem {
struct NavMeshBoundsVolume;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_NavigationSystem {
struct NavigationPath;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationSystemV1 : public _Script_Engine::NavigationSystemBase {
    private: char pad_28[0x348]; public:
    void* get_SupportedAgents();
    void* get_CrowdManagerClass();
    float& get_DirtyAreasUpdateFrequency();
    _Script_NavigationSystem::CrowdManagerBase*& get_CrowdManager();
    _Script_NavigationSystem::NavigationData*& get_MainNavData();
    _Script_NavigationSystem::NavigationData*& get_AbstractNavData();
    void* get_RegisteredNavData();
    bool get_bInitialBuildingLocked();
    void set_bInitialBuildingLocked(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnNavigationBoundsUpdated(_Script_NavigationSystem::NavMeshBoundsVolume* NavVolume);
    bool NavigationRaycast(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& RayStart, _Script_CoreUObject::Vector& RayEnd, _Script_CoreUObject::Vector& HitLocation, void* FilterClass, _Script_Engine::Controller* Querier);
    bool K2_ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& ProjectedLocation, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent);
    bool K2_GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    bool K2_GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    bool IsNavigationBeingBuiltOrLocked(_Script_CoreUObject::Object* WorldContextObject);
    bool IsNavigationBeingBuilt(_Script_CoreUObject::Object* WorldContextObject);
    void* GetPathLength(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathLength, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    void* GetPathCost(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathCost, _Script_NavigationSystem::NavigationData* NavData, void* FilterClass);
    _Script_NavigationSystem::NavigationSystemV1* GetNavigationSystem(_Script_CoreUObject::Object* WorldContextObject);
    _Script_NavigationSystem::NavigationPath* FindPathToLocationSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, _Script_Engine::Actor* PathfindingContext, void* FilterClass);
    _Script_NavigationSystem::NavigationPath* FindPathToActorSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_Engine::Actor* GoalActor, float TetherDistance, _Script_Engine::Actor* PathfindingContext, void* FilterClass);
}; // Size: 0x370
#pragma pack(pop)
}
