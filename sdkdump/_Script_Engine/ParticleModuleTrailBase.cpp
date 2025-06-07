#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleTrailBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTrailBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTrailBase");
    return result;
}
