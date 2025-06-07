#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVelocity.hpp"
#include "ParticleModuleVelocity_Seeded.hpp"
void* _Script_Engine::ParticleModuleVelocity_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVelocity_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVelocity_Seeded");
    return result;
}
