#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify.hpp"
#include "AnimNotify_PlayParticleEffect.hpp"
#include "ParticleSystem.hpp"
void _Script_Engine::AnimNotify_PlayParticleEffect::set_Attached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystem*& _Script_Engine::AnimNotify_PlayParticleEffect::get_PSTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimNotify_PlayParticleEffect::get_SocketName() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::AnimNotify_PlayParticleEffect::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimNotify_PlayParticleEffect::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::AnimNotify_PlayParticleEffect::get_Scale() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::AnimNotify_PlayParticleEffect::get_Attached() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotify_PlayParticleEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify_PlayParticleEffect");
    return result;
}
