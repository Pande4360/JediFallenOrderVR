#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
#include "ParticleModuleVectorFieldScale.hpp"
_Script_Engine::DistributionFloat*& _Script_Engine::ParticleModuleVectorFieldScale::get_VectorFieldScale() {
    return *(_Script_Engine::DistributionFloat**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleVectorFieldScale::get_VectorFieldScaleRaw() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldScale");
    return result;
}
