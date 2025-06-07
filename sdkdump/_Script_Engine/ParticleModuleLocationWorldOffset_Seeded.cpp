#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationWorldOffset.hpp"
#include "ParticleModuleLocationWorldOffset_Seeded.hpp"
void* _Script_Engine::ParticleModuleLocationWorldOffset_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationWorldOffset_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationWorldOffset_Seeded");
    return result;
}
