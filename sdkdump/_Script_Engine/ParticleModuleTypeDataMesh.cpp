#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTypeDataBase.hpp"
#include "ParticleModuleTypeDataMesh.hpp"
#include "StaticMesh.hpp"
void* _Script_Engine::ParticleModuleTypeDataMesh::get_MeshAlignment() {
    return (void*)((uintptr_t)this + 0x44);
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_DoCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::StaticMesh*& _Script_Engine::ParticleModuleTypeDataMesh::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bUseStaticMeshLODs() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bUseStaticMeshLODs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataMesh::get_LODSizeScale() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_CastShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_CastShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_DoCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bOverrideMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bOverrideMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bOverrideDefaultMotionBlurSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bOverrideDefaultMotionBlurSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bEnableMotionBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bEnableMotionBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataMesh::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::ParticleModuleTypeDataMesh::get_Roll() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::ParticleModuleTypeDataMesh::get_Yaw() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_RollPitchYawRange() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_AxisLockOption() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bCameraFacing() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bCameraFacing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_CameraFacingUpAxisOption() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::ParticleModuleTypeDataMesh::get_CameraFacingOption() {
    return (void*)((uintptr_t)this + 0xb9);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bApplyParticleRotationAsSpin() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bApplyParticleRotationAsSpin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bFaceCameraDirectionRatherThanPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bFaceCameraDirectionRatherThanPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataMesh::get_bCollisionsConsiderPartilceSize() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataMesh::set_bCollisionsConsiderPartilceSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataMesh");
    return result;
}
