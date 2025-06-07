#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleMeshRotation.hpp"
#include "ParticleModuleRotationBase.hpp"
void _Script_Engine::ParticleModuleMeshRotation::set_bInheritParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleMeshRotation::get_StartRotation() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleModuleMeshRotation::get_bInheritParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleMeshRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleMeshRotation");
    return result;
}
