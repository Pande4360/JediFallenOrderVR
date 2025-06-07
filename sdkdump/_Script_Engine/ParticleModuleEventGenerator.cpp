#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleEventBase.hpp"
#include "ParticleModuleEventGenerator.hpp"
void* _Script_Engine::ParticleModuleEventGenerator::get_Events() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleEventGenerator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleEventGenerator");
    return result;
}
