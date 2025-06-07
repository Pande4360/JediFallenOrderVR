#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLifetime.hpp"
#include "ParticleModuleLifetime_Seeded.hpp"
void* _Script_Engine::ParticleModuleLifetime_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLifetime_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLifetime_Seeded");
    return result;
}
