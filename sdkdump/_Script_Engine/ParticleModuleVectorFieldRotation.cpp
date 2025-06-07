#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
#include "ParticleModuleVectorFieldRotation.hpp"
void* _Script_Engine::ParticleModuleVectorFieldRotation::get_MinInitialRotation() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleVectorFieldRotation::get_MaxInitialRotation() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldRotation");
    return result;
}
