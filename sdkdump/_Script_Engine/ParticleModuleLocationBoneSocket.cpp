#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleLocationBoneSocket.hpp"
void* _Script_Engine::ParticleModuleLocationBoneSocket::get_SelectionMethod() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::ParticleModuleLocationBoneSocket::get_SourceType() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleModuleLocationBoneSocket::get_bOrientMeshEmitters() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 2 != 0;
}
void* _Script_Engine::ParticleModuleLocationBoneSocket::get_UniversalOffset() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::ParticleModuleLocationBoneSocket::get_SourceLocations() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleLocationBoneSocket::get_bUpdatePositionEachFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationBoneSocket::set_bUpdatePositionEachFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleLocationBoneSocket::set_bOrientMeshEmitters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleLocationBoneSocket::get_bInheritBoneVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleLocationBoneSocket::set_bInheritBoneVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleModuleLocationBoneSocket::get_InheritVelocityScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::ParticleModuleLocationBoneSocket::get_SkelMeshActorParamName() {
    return (void*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::ParticleModuleLocationBoneSocket::get_NumPreSelectedIndices() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationBoneSocket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationBoneSocket");
    return result;
}
