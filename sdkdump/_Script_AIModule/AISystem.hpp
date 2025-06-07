#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AISystemBase.hpp"
namespace _Script_AIModule {
struct BehaviorTreeManager;
}
namespace _Script_AIModule {
struct EnvQueryManager;
}
namespace _Script_AIModule {
struct AIPerceptionSystem;
}
namespace _Script_AIModule {
struct AIHotSpotManager;
}
namespace _Script_AIModule {
struct NavLocalGridManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISystem : public _Script_Engine::AISystemBase {
    private: char pad_58[0xd8]; public:
    void* get_PerceptionSystemClassName();
    void* get_HotSpotManagerClassName();
    float& get_AcceptanceRadius();
    float& get_PathfollowingRegularPathPointAcceptanceRadius();
    float& get_PathfollowingNavLinkAcceptanceRadius();
    bool get_bFinishMoveOnGoalOverlap();
    void set_bFinishMoveOnGoalOverlap(bool value);
    bool get_bAcceptPartialPaths();
    void set_bAcceptPartialPaths(bool value);
    bool get_bAllowStrafing();
    void set_bAllowStrafing(bool value);
    bool get_bEnableBTAITasks();
    void set_bEnableBTAITasks(bool value);
    bool get_bAllowControllersAsEQSQuerier();
    void set_bAllowControllersAsEQSQuerier(bool value);
    bool get_bEnableDebuggerPlugin();
    void set_bEnableDebuggerPlugin(bool value);
    void* get_DefaultSightCollisionChannel();
    _Script_AIModule::BehaviorTreeManager*& get_BehaviorTreeManager();
    _Script_AIModule::EnvQueryManager*& get_EnvironmentQueryManager();
    _Script_AIModule::AIPerceptionSystem*& get_PerceptionSystem();
    void* get_AllProxyObjects();
    _Script_AIModule::AIHotSpotManager*& get_HotSpotManager();
    _Script_AIModule::NavLocalGridManager*& get_NavLocalGrids();
    static _Script_CoreUObject::Class* static_class();
    void AILoggingVerbose();
    void AIIgnorePlayers();
}; // Size: 0x130
#pragma pack(pop)
}
