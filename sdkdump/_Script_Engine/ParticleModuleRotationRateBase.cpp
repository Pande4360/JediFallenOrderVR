#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleRotationRateBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRotationRateBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRotationRateBase");
    return result;
}
