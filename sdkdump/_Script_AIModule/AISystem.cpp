#include "..\FUObjectArray.hpp"
#include "AIHotSpotManager.hpp"
#include "AIPerceptionSystem.hpp"
#include "AISystem.hpp"
#include "BehaviorTreeManager.hpp"
#include "EnvQueryManager.hpp"
#include "NavLocalGridManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AISystemBase.hpp"
_Script_AIModule::EnvQueryManager*& _Script_AIModule::AISystem::get_EnvironmentQueryManager() {
    return *(_Script_AIModule::EnvQueryManager**)((uintptr_t)this + 0xa8);
}
float& _Script_AIModule::AISystem::get_AcceptanceRadius() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_AIModule::AISystem::get_PerceptionSystemClassName() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_AIModule::AIPerceptionSystem*& _Script_AIModule::AISystem::get_PerceptionSystem() {
    return *(_Script_AIModule::AIPerceptionSystem**)((uintptr_t)this + 0xb0);
}
void _Script_AIModule::AISystem::set_bAllowControllersAsEQSQuerier(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::AISystem::get_HotSpotManagerClassName() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_AIModule::AISystem::get_PathfollowingRegularPathPointAcceptanceRadius() {
    return *(float*)((uintptr_t)this + 0x8c);
}
bool _Script_AIModule::AISystem::get_bFinishMoveOnGoalOverlap() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
float& _Script_AIModule::AISystem::get_PathfollowingNavLinkAcceptanceRadius() {
    return *(float*)((uintptr_t)this + 0x90);
}
void _Script_AIModule::AISystem::set_bFinishMoveOnGoalOverlap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISystem::get_bAcceptPartialPaths() {
    return (*(uint8_t*)((uintptr_t)this + 0x95 + 0)) & 1 != 0;
}
_Script_AIModule::NavLocalGridManager*& _Script_AIModule::AISystem::get_NavLocalGrids() {
    return *(_Script_AIModule::NavLocalGridManager**)((uintptr_t)this + 0xd0);
}
void _Script_AIModule::AISystem::set_bAcceptPartialPaths(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x95 + 0);
    *(uint8_t*)((uintptr_t)this + 0x95 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISystem::get_bAllowStrafing() {
    return (*(uint8_t*)((uintptr_t)this + 0x96 + 0)) & 1 != 0;
}
void _Script_AIModule::AISystem::set_bAllowStrafing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96 + 0);
    *(uint8_t*)((uintptr_t)this + 0x96 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::AISystem::get_AllProxyObjects() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_AIModule::AISystem::get_bEnableBTAITasks() {
    return (*(uint8_t*)((uintptr_t)this + 0x97 + 0)) & 1 != 0;
}
void _Script_AIModule::AISystem::set_bEnableBTAITasks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x97 + 0);
    *(uint8_t*)((uintptr_t)this + 0x97 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISystem::get_bAllowControllersAsEQSQuerier() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
bool _Script_AIModule::AISystem::get_bEnableDebuggerPlugin() {
    return (*(uint8_t*)((uintptr_t)this + 0x99 + 0)) & 1 != 0;
}
void _Script_AIModule::AISystem::set_bEnableDebuggerPlugin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x99 + 0);
    *(uint8_t*)((uintptr_t)this + 0x99 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::AISystem::get_DefaultSightCollisionChannel() {
    return (void*)((uintptr_t)this + 0x9a);
}
_Script_AIModule::BehaviorTreeManager*& _Script_AIModule::AISystem::get_BehaviorTreeManager() {
    return *(_Script_AIModule::BehaviorTreeManager**)((uintptr_t)this + 0xa0);
}
_Script_AIModule::AIHotSpotManager*& _Script_AIModule::AISystem::get_HotSpotManager() {
    return *(_Script_AIModule::AIHotSpotManager**)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_AIModule::AISystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISystem");
    return result;
}
void _Script_AIModule::AISystem::AILoggingVerbose() {
    return;
}
void _Script_AIModule::AISystem::AIIgnorePlayers() {
    return;
}
