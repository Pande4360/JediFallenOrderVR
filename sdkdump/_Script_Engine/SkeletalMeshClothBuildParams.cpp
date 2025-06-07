#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshClothBuildParams.hpp"
int32_t& _Script_Engine::SkeletalMeshClothBuildParams::get_SourceSection() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::SkeletalMeshClothBuildParams::get_TargetAsset() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::SkeletalMeshClothBuildParams::get_TargetLod() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::SkeletalMeshClothBuildParams::get_bRemapParameters() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshClothBuildParams::set_bRemapParameters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkeletalMeshClothBuildParams::get_AssetName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::SkeletalMeshClothBuildParams::get_LODIndex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void _Script_Engine::SkeletalMeshClothBuildParams::set_bRemoveFromMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshClothBuildParams::get_bRemoveFromMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_Engine::SkeletalMeshClothBuildParams::get_PhysicsAsset() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshClothBuildParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshClothBuildParams");
    return result;
}
