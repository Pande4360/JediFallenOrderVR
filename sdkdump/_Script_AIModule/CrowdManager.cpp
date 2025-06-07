#include "..\FUObjectArray.hpp"
#include "CrowdManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_NavigationSystem\CrowdManagerBase.hpp"
#include "..\_Script_NavigationSystem\NavigationData.hpp"
_Script_NavigationSystem::NavigationData*& _Script_AIModule::CrowdManager::get_MyNavData() {
    return *(_Script_NavigationSystem::NavigationData**)((uintptr_t)this + 0x28);
}
int32_t& _Script_AIModule::CrowdManager::get_MaxAvoidedWalls() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_AIModule::CrowdManager::get_AvoidanceConfig() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::CrowdManager::get_SamplingPatterns() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_AIModule::CrowdManager::get_MaxAgents() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
float& _Script_AIModule::CrowdManager::get_MaxAgentRadius() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_AIModule::CrowdManager::get_NavmeshCheckInterval() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_AIModule::CrowdManager::get_PathOptimizationInterval() {
    return *(float*)((uintptr_t)this + 0x64);
}
int32_t& _Script_AIModule::CrowdManager::get_MaxAvoidedAgents() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
float& _Script_AIModule::CrowdManager::get_SeparationDirClamp() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_AIModule::CrowdManager::get_PathOffsetRadiusMultiplier() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_AIModule::CrowdManager::get_bResolveCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 16 != 0;
}
void _Script_AIModule::CrowdManager::set_bResolveCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::CrowdManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.CrowdManager");
    return result;
}
