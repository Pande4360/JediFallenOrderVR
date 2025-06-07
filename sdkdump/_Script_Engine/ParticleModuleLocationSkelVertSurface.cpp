#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleLocationSkelVertSurface.hpp"
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_SourceType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_UniversalOffset() {
    return (void*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::ParticleModuleLocationSkelVertSurface::get_bUpdatePositionEachFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationSkelVertSurface::set_bUpdatePositionEachFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleLocationSkelVertSurface::set_bOrientMeshEmitters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleLocationSkelVertSurface::get_bOrientMeshEmitters() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleLocationSkelVertSurface::get_bInheritBoneVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleLocationSkelVertSurface::set_bInheritBoneVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleModuleLocationSkelVertSurface::get_InheritVelocityScale() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_SkelMeshActorParamName() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_ValidAssociatedBones() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::ParticleModuleLocationSkelVertSurface::get_bEnforceNormalCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationSkelVertSurface::set_bEnforceNormalCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_NormalToCompare() {
    return (void*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::ParticleModuleLocationSkelVertSurface::get_NormalCheckToleranceDegrees() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::ParticleModuleLocationSkelVertSurface::get_NormalCheckTolerance() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_ValidMaterialIndices() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::ParticleModuleLocationSkelVertSurface::get_bInheritVertexColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationSkelVertSurface::set_bInheritVertexColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleLocationSkelVertSurface::get_bInheritUV() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleLocationSkelVertSurface::set_bInheritUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleModuleLocationSkelVertSurface::get_InheritUVChannel() {
    return (void*)((uintptr_t)this + 0x8c);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationSkelVertSurface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationSkelVertSurface");
    return result;
}
