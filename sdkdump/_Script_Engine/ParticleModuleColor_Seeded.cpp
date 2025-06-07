#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleColor.hpp"
#include "ParticleModuleColor_Seeded.hpp"
void* _Script_Engine::ParticleModuleColor_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleColor_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleColor_Seeded");
    return result;
}
