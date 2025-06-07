#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleVectorFieldBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleVectorFieldBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleVectorFieldBase");
    return result;
}
