#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleBeamBase.hpp"
#include "ParticleModuleBeamModifier.hpp"
void* _Script_Engine::ParticleModuleBeamModifier::get_ModifierType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleBeamModifier::get_PositionOptions() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::ParticleModuleBeamModifier::get_TangentOptions() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::ParticleModuleBeamModifier::get_Position() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleBeamModifier::get_StrengthOptions() {
    return (void*)((uintptr_t)this + 0xe4);
}
bool _Script_Engine::ParticleModuleBeamModifier::get_bAbsoluteTangent() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleBeamModifier::get_Tangent() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_Engine::ParticleModuleBeamModifier::set_bAbsoluteTangent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamModifier::get_Strength() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleBeamModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleBeamModifier");
    return result;
}
