#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
#include "ParticleModuleVectorFieldScaleOverLife.hpp"
_Script_Engine::DistributionFloat*& _Script_Engine::ParticleModuleVectorFieldScaleOverLife::get_VectorFieldScaleOverLife() {
    return *(_Script_Engine::DistributionFloat**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleVectorFieldScaleOverLife::get_VectorFieldScaleOverLifeRaw() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldScaleOverLife::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldScaleOverLife");
    return result;
}
