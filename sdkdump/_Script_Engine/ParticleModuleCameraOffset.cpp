#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleCameraBase.hpp"
#include "ParticleModuleCameraOffset.hpp"
void* _Script_Engine::ParticleModuleCameraOffset::get_CameraOffset() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleCameraOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleCameraOffset");
    return result;
}
bool _Script_Engine::ParticleModuleCameraOffset::get_bSpawnTimeOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleCameraOffset::set_bSpawnTimeOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleCameraOffset::get_UpdateMethod() {
    return (void*)((uintptr_t)this + 0x6c);
}
