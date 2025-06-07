#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleAttractorBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAttractorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAttractorBase");
    return result;
}
