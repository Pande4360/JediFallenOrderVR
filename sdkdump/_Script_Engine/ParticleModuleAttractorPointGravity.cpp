#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "ParticleModuleAttractorBase.hpp"
#include "ParticleModuleAttractorPointGravity.hpp"
void* _Script_Engine::ParticleModuleAttractorPointGravity::get_Position() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::ParticleModuleAttractorPointGravity::get_Radius() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_Engine::DistributionFloat*& _Script_Engine::ParticleModuleAttractorPointGravity::get_Strength() {
    return *(_Script_Engine::DistributionFloat**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ParticleModuleAttractorPointGravity::get_StrengthRaw() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAttractorPointGravity::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAttractorPointGravity");
    return result;
}
