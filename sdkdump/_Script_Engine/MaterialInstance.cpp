#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInstance.hpp"
#include "MaterialInterface.hpp"
#include "PhysicalMaterial.hpp"
void* _Script_Engine::MaterialInstance::get_VectorParameterValues() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::MaterialInstance::get_PhysMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x88);
}
_Script_Engine::MaterialInterface*& _Script_Engine::MaterialInstance::get_Parent() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x90);
}
bool _Script_Engine::MaterialInstance::get_bHasStaticPermutationResource() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void* _Script_Engine::MaterialInstance::get_ScalarParameterValues() {
    return (void*)((uintptr_t)this + 0xa0);
}
void _Script_Engine::MaterialInstance::set_bHasStaticPermutationResource(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialInstance::get_TextureParameterValues() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::MaterialInstance::get_bOverrideSubsurfaceProfile() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 2 != 0;
}
void _Script_Engine::MaterialInstance::set_bOverrideSubsurfaceProfile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::MaterialInstance::get_FontParameterValues() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_Engine::MaterialInstance::get_bOverrideBaseProperties() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstance::set_bOverrideBaseProperties(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialInstance::get_BasePropertyOverrides() {
    return (void*)((uintptr_t)this + 0xe4);
}
void* _Script_Engine::MaterialInstance::get_PermutationTextureReferences() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Engine::MaterialInstance::get_StaticParameters() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInstance");
    return result;
}
