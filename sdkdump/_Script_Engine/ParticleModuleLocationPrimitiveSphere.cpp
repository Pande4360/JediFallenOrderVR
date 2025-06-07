#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationPrimitiveBase.hpp"
#include "ParticleModuleLocationPrimitiveSphere.hpp"
void* _Script_Engine::ParticleModuleLocationPrimitiveSphere::get_StartRadius() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationPrimitiveSphere::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationPrimitiveSphere");
    return result;
}
