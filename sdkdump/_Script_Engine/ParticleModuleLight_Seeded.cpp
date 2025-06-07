#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLight.hpp"
#include "ParticleModuleLight_Seeded.hpp"
void* _Script_Engine::ParticleModuleLight_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLight_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLight_Seeded");
    return result;
}
