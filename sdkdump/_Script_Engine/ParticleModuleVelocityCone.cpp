#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVelocityBase.hpp"
#include "ParticleModuleVelocityCone.hpp"
void* _Script_Engine::ParticleModuleVelocityCone::get_Angle() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVelocityCone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVelocityCone");
    return result;
}
void* _Script_Engine::ParticleModuleVelocityCone::get_Direction() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::ParticleModuleVelocityCone::get_Velocity() {
    return (void*)((uintptr_t)this + 0x70);
}
