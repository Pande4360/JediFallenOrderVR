#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleAttractorBase.hpp"
#include "ParticleModuleAttractorLine.hpp"
void* _Script_Engine::ParticleModuleAttractorLine::get_EndPoint1() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::ParticleModuleAttractorLine::get_EndPoint0() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleAttractorLine::get_Range() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ParticleModuleAttractorLine::get_Strength() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAttractorLine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAttractorLine");
    return result;
}
