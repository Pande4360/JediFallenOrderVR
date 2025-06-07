#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshSamplingRegionBoneFilter.hpp"
bool _Script_Engine::SkeletalMeshSamplingRegionBoneFilter::get_bApplyToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void* _Script_Engine::SkeletalMeshSamplingRegionBoneFilter::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::SkeletalMeshSamplingRegionBoneFilter::set_bIncludeOrExclude(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshSamplingRegionBoneFilter::get_bIncludeOrExclude() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshSamplingRegionBoneFilter::set_bApplyToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSamplingRegionBoneFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshSamplingRegionBoneFilter");
    return result;
}
