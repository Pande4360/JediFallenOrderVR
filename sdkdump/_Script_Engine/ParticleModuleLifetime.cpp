#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLifetime.hpp"
#include "ParticleModuleLifetimeBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLifetime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLifetime");
    return result;
}
void* _Script_Engine::ParticleModuleLifetime::get_LifeTime() {
    return (void*)((uintptr_t)this + 0x30);
}
