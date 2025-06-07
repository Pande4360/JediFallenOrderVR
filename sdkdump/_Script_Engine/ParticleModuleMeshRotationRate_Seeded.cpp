#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleMeshRotationRate.hpp"
#include "ParticleModuleMeshRotationRate_Seeded.hpp"
void* _Script_Engine::ParticleModuleMeshRotationRate_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleMeshRotationRate_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleMeshRotationRate_Seeded");
    return result;
}
