#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleTypeDataBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataBase");
    return result;
}
