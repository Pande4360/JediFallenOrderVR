#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleSystemLOD.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleSystemLOD::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleSystemLOD");
    return result;
}
