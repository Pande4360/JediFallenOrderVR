#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "SkeletalMeshLODInfo.hpp"
void* _Script_Engine::SkeletalMeshLODInfo::get_ScreenSize() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::SkeletalMeshLODInfo::get_bHasBeenSimplified() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void* _Script_Engine::SkeletalMeshLODInfo::get_ReductionSettings() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::SkeletalMeshLODInfo::get_LODHysteresis() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::SkeletalMeshLODInfo::get_SourceImportFilename() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::SkeletalMeshLODInfo::get_LODMaterialMap() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkeletalMeshLODInfo::get_BonesToRemove() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::AnimSequence*& _Script_Engine::SkeletalMeshLODInfo::get_BakePose() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x48);
}
void _Script_Engine::SkeletalMeshLODInfo::set_bHasBeenSimplified(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshLODInfo::get_bHasPerLODVertexColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshLODInfo::set_bHasPerLODVertexColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkeletalMeshLODInfo::get_bAllowCPUAccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 4 != 0;
}
void _Script_Engine::SkeletalMeshLODInfo::set_bAllowCPUAccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SkeletalMeshLODInfo::get_bSupportUniformlyDistributedSampling() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 8 != 0;
}
void _Script_Engine::SkeletalMeshLODInfo::set_bSupportUniformlyDistributedSampling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshLODInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshLODInfo");
    return result;
}
