#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "RsParticleModuleLocationParticleField.hpp"
float& _Script_Engine::RsParticleModuleLocationParticleField::get_ParticleFieldSize() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::RsParticleModuleLocationParticleField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsParticleModuleLocationParticleField");
    return result;
}
