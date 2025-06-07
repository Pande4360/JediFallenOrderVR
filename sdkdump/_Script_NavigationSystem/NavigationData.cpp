#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "NavigationData.hpp"
void _Script_NavigationSystem::NavigationData::set_bEnableDrawing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::PrimitiveComponent*& _Script_NavigationSystem::NavigationData::get_RenderingComp() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x368);
}
void* _Script_NavigationSystem::NavigationData::get_NavDataConfig() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Script_NavigationSystem::NavigationData::get_bEnableDrawing() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationData::set_bForceRebuildOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::NavigationData::get_bForceRebuildOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 2 != 0;
}
bool _Script_NavigationSystem::NavigationData::get_bCanBeMainNavData() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::NavigationData::set_bCanBeMainNavData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::NavigationData::get_bCanSpawnOnRebuild() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 8 != 0;
}
void _Script_NavigationSystem::NavigationData::set_bCanSpawnOnRebuild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::NavigationData::get_bRebuildAtRuntime() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 16 != 0;
}
void _Script_NavigationSystem::NavigationData::set_bRebuildAtRuntime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_NavigationSystem::NavigationData::get_RuntimeGeneration() {
    return (void*)((uintptr_t)this + 0x42c);
}
float& _Script_NavigationSystem::NavigationData::get_ObservedPathsTickInterval() {
    return *(float*)((uintptr_t)this + 0x430);
}
void* _Script_NavigationSystem::NavigationData::get_DataVersion() {
    return (void*)((uintptr_t)this + 0x434);
}
void* _Script_NavigationSystem::NavigationData::get_SupportedAreas() {
    return (void*)((uintptr_t)this + 0x510);
}
bool _Script_NavigationSystem::NavigationData::get_bSaveDataForCommandlet() {
    return (*(uint8_t*)((uintptr_t)this + 0x578 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationData::set_bSaveDataForCommandlet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x578 + 0);
    *(uint8_t*)((uintptr_t)this + 0x578 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationData");
    return result;
}
