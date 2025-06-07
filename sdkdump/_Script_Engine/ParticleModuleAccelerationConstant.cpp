#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleAccelerationBase.hpp"
#include "ParticleModuleAccelerationConstant.hpp"
void* _Script_Engine::ParticleModuleAccelerationConstant::get_Acceleration() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAccelerationConstant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAccelerationConstant");
    return result;
}
