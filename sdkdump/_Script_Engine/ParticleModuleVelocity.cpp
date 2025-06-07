#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVelocity.hpp"
#include "ParticleModuleVelocityBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVelocity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVelocity");
    return result;
}
void* _Script_Engine::ParticleModuleVelocity::get_StartVelocity() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleVelocity::get_StartVelocityRadial() {
    return (void*)((uintptr_t)this + 0x88);
}
