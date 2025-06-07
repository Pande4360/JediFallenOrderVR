#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleCollisionBase.hpp"
#include "ParticleModuleCollisionGPU.hpp"
void* _Script_Engine::ParticleModuleCollisionGPU::get_Resilience() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleCollisionGPU::get_Response() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_Engine::ParticleModuleCollisionGPU::get_Friction() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::ParticleModuleCollisionGPU::get_ResilienceScaleOverLife() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::ParticleModuleCollisionGPU::get_RandomSpread() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_Engine::ParticleModuleCollisionGPU::get_RandomDistribution() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_Engine::ParticleModuleCollisionGPU::get_RadiusScale() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_Engine::ParticleModuleCollisionGPU::get_RadiusBias() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::ParticleModuleCollisionGPU::get_CollisionMode() {
    return (void*)((uintptr_t)this + 0xb5);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleCollisionGPU::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleCollisionGPU");
    return result;
}
