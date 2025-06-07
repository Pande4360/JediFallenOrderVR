#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "RsAbility.hpp"
#include "SwRadialForcePushAbility.hpp"
void* _Script_SwGame::SwRadialForcePushAbility::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_SwGame::SwRadialForcePushAbility::get_PushInnerRadius() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Script_SwGame::SwRadialForcePushAbility::get_PushSecondaryMaxStrength() {
    return *(float*)((uintptr_t)this + 0xe0);
}
void _Script_SwGame::SwRadialForcePushAbility::set_bNoNegativeZDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwRadialForcePushAbility::get_TraceType() {
    return (void*)((uintptr_t)this + 0xdc);
}
float& _Script_SwGame::SwRadialForcePushAbility::get_PushOuterRadius() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void* _Script_SwGame::SwRadialForcePushAbility::get_PushRadialCenterOffset() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_SwGame::SwRadialForcePushAbility::get_bNoNegativeZDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 1 != 0;
}
float& _Script_SwGame::SwRadialForcePushAbility::get_PushSecondaryMinStrength() {
    return *(float*)((uintptr_t)this + 0xe4);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwRadialForcePushAbility::get_AbilityAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xe8);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwRadialForcePushAbility::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0xf0);
}
void* _Script_SwGame::SwRadialForcePushAbility::get_EffectType() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRadialForcePushAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwRadialForcePushAbility");
    return result;
}
