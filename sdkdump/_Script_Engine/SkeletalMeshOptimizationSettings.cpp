#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshOptimizationSettings.hpp"
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_ReductionMethod() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NumOfTrianglesPercentage() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxDeviationPercentage() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_SkinningImportance() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_SilhouetteImportance() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_TextureImportance() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_ShadingImportance() {
    return (void*)((uintptr_t)this + 0xb);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bRemapMorphTargets() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bRemapMorphTargets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bRecalcNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bRecalcNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NormalsThreshold() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_WeldingThreshold() {
    return *(float*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxBonesPerVertex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::SkeletalMeshOptimizationSettings::get_BaseLOD() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshOptimizationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshOptimizationSettings");
    return result;
}
