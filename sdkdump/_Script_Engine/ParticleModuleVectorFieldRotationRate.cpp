#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
#include "ParticleModuleVectorFieldRotationRate.hpp"
void* _Script_Engine::ParticleModuleVectorFieldRotationRate::get_RotationRate() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldRotationRate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldRotationRate");
    return result;
}
