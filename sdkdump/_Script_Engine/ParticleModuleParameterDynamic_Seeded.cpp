#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleParameterDynamic.hpp"
#include "ParticleModuleParameterDynamic_Seeded.hpp"
void* _Script_Engine::ParticleModuleParameterDynamic_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleParameterDynamic_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleParameterDynamic_Seeded");
    return result;
}
