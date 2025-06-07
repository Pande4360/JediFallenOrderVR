#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleAccelerationBase.hpp"
#include "ParticleModuleAccelerationOverLifetime.hpp"
void* _Script_Engine::ParticleModuleAccelerationOverLifetime::get_AccelOverLife() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAccelerationOverLifetime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAccelerationOverLifetime");
    return result;
}
