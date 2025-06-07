#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationPrimitiveSphere.hpp"
#include "ParticleModuleLocationPrimitiveSphere_Seeded.hpp"
void* _Script_Engine::ParticleModuleLocationPrimitiveSphere_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationPrimitiveSphere_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
    return result;
}
