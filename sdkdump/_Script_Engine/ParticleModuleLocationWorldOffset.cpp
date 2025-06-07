#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocation.hpp"
#include "ParticleModuleLocationWorldOffset.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationWorldOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationWorldOffset");
    return result;
}
