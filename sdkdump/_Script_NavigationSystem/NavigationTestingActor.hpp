#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_NavigationSystem {
struct NavigationData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationTestingActor : public _Script_Engine::Actor {
    private: char pad_360[0xe0]; public:
    _Script_Engine::CapsuleComponent*& get_CapsuleComponent();
    void* get_NavAgentProps();
    void* get_QueryingExtent();
    _Script_NavigationSystem::NavigationData*& get_MyNavData();
    void* get_ProjectedLocation();
    bool get_bProjectedLocationValid();
    void set_bProjectedLocationValid(bool value);
    bool get_bSearchStart();
    void set_bSearchStart(bool value);
    bool get_bUseHierarchicalPathfinding();
    void set_bUseHierarchicalPathfinding(bool value);
    bool get_bGatherDetailedInfo();
    void set_bGatherDetailedInfo(bool value);
    bool get_bDrawDistanceToWall();
    void set_bDrawDistanceToWall(bool value);
    bool get_bShowNodePool();
    void set_bShowNodePool(bool value);
    bool get_bShowBestPath();
    void set_bShowBestPath(bool value);
    bool get_bShowDiffWithPreviousStep();
    void set_bShowDiffWithPreviousStep(bool value);
    bool get_bShouldBeVisibleInGame();
    void set_bShouldBeVisibleInGame(bool value);
    void* get_CostDisplayMode();
    void* get_TextCanvasOffset();
    bool get_bPathExist();
    void set_bPathExist(bool value);
    bool get_bPathIsPartial();
    void set_bPathIsPartial(bool value);
    bool get_bPathSearchOutOfNodes();
    void set_bPathSearchOutOfNodes(bool value);
    float& get_PathfindingTime();
    float& get_PathCost();
    int32_t& get_PathfindingSteps();
    _Script_NavigationSystem::NavigationTestingActor*& get_OtherActor();
    void* get_FilterClass();
    int32_t& get_ShowStepIndex();
    float& get_OffsetFromCornersDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x440
#pragma pack(pop)
}
