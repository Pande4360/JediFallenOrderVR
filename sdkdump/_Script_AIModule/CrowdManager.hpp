#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NavigationSystem\CrowdManagerBase.hpp"
namespace _Script_NavigationSystem {
struct NavigationData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct CrowdManager : public _Script_NavigationSystem::CrowdManagerBase {
    private: char pad_28[0xc8]; public:
    _Script_NavigationSystem::NavigationData*& get_MyNavData();
    void* get_AvoidanceConfig();
    void* get_SamplingPatterns();
    int32_t& get_MaxAgents();
    float& get_MaxAgentRadius();
    int32_t& get_MaxAvoidedAgents();
    int32_t& get_MaxAvoidedWalls();
    float& get_NavmeshCheckInterval();
    float& get_PathOptimizationInterval();
    float& get_SeparationDirClamp();
    float& get_PathOffsetRadiusMultiplier();
    bool get_bResolveCollisions();
    void set_bResolveCollisions(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
