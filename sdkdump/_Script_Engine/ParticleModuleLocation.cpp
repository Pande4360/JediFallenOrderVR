#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocation.hpp"
#include "ParticleModuleLocationBase.hpp"
void* _Script_Engine::ParticleModuleLocation::get_StartLocation() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::ParticleModuleLocation::get_DistributeOverNPoints() {
    return *(float*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocation");
    return result;
}
float& _Script_Engine::ParticleModuleLocation::get_DistributeThreshold() {
    return *(float*)((uintptr_t)this + 0x84);
}
