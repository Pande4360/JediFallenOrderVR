#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleMeshRotationRate.hpp"
#include "ParticleModuleRotationRateBase.hpp"
void* _Script_Engine::ParticleModuleMeshRotationRate::get_StartRotationRate() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleMeshRotationRate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleMeshRotationRate");
    return result;
}
