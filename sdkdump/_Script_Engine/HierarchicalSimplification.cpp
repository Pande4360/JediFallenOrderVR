#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HierarchicalSimplification.hpp"
float& _Script_Engine::HierarchicalSimplification::get_TransitionScreenSize() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_Engine::HierarchicalSimplification::set_bSimplifyMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe + 0);
    *(uint8_t*)((uintptr_t)this + 0xe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::HierarchicalSimplification::get_OverrideDrawDistance() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::HierarchicalSimplification::get_bUseOverrideDrawDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
bool _Script_Engine::HierarchicalSimplification::get_bAllowSpecificExclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bUseOverrideDrawDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::HierarchicalSimplification::set_bAllowSpecificExclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HierarchicalSimplification::get_bSimplifyMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0xe + 0)) & 1 != 0;
}
void* _Script_Engine::HierarchicalSimplification::get_ProxySetting() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::HierarchicalSimplification::get_MergeSetting() {
    return (void*)((uintptr_t)this + 0xe4);
}
float& _Script_Engine::HierarchicalSimplification::get_DesiredBoundRadius() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
float& _Script_Engine::HierarchicalSimplification::get_DesiredFillingPercentage() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
bool _Script_Engine::HierarchicalSimplification::get_bReusePreviousLevelClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x1bd + 0)) & 1 != 0;
}
int32_t& _Script_Engine::HierarchicalSimplification::get_MinNumberOfActorsToBuild() {
    return *(int32_t*)((uintptr_t)this + 0x1b8);
}
bool _Script_Engine::HierarchicalSimplification::get_bOnlyGenerateClustersForVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1bc + 0)) & 1 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bOnlyGenerateClustersForVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::HierarchicalSimplification::set_bReusePreviousLevelClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x1bd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalSimplification::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HierarchicalSimplification");
    return result;
}
