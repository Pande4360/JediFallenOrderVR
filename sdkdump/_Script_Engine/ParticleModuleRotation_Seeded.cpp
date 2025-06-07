#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleRotation.hpp"
#include "ParticleModuleRotation_Seeded.hpp"
void* _Script_Engine::ParticleModuleRotation_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRotation_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRotation_Seeded");
    return result;
}
