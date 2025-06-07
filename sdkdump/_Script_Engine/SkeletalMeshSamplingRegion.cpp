#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshSamplingRegion.hpp"
void* _Script_Engine::SkeletalMeshSamplingRegion::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SkeletalMeshSamplingRegion::get_BoneFilters() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::SkeletalMeshSamplingRegion::get_LODIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::SkeletalMeshSamplingRegion::get_bSupportUniformlyDistributedSampling() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshSamplingRegion::set_bSupportUniformlyDistributedSampling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSamplingRegion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshSamplingRegion");
    return result;
}
void* _Script_Engine::SkeletalMeshSamplingRegion::get_MaterialFilters() {
    return (void*)((uintptr_t)this + 0x10);
}
