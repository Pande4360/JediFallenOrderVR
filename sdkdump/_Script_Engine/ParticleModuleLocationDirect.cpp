#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleLocationDirect.hpp"
void* _Script_Engine::ParticleModuleLocationDirect::get_ScaleFactor() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::ParticleModuleLocationDirect::get_Location() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleLocationDirect::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::ParticleModuleLocationDirect::get_Direction() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationDirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationDirect");
    return result;
}
