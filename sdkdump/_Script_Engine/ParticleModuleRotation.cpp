#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleRotation.hpp"
#include "ParticleModuleRotationBase.hpp"
void* _Script_Engine::ParticleModuleRotation::get_StartRotation() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRotation");
    return result;
}
