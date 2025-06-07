#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocation.hpp"
#include "ParticleModuleLocation_Seeded.hpp"
void* _Script_Engine::ParticleModuleLocation_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocation_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocation_Seeded");
    return result;
}
