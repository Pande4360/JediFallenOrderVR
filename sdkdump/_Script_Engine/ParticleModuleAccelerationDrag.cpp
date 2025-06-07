#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "ParticleModuleAccelerationBase.hpp"
#include "ParticleModuleAccelerationDrag.hpp"
_Script_Engine::DistributionFloat*& _Script_Engine::ParticleModuleAccelerationDrag::get_DragCoefficient() {
    return *(_Script_Engine::DistributionFloat**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleAccelerationDrag::get_DragCoefficientRaw() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAccelerationDrag::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAccelerationDrag");
    return result;
}
