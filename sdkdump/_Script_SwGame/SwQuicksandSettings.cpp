#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "SwQuicksandSettings.hpp"
_Script_Engine::ParticleSystem*& _Script_SwGame::SwQuicksandSettings::get_ParticlesToSpawnWhenImmersed() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwQuicksandSettings::get_SinkingSpeed() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwQuicksandSettings::get_RisingUpSpeed() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwQuicksandSettings::get_TimeToDestroyEffectAfterActorRemovalFromQuicksand() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwQuicksandSettings::get_ImmersionPercentageToFloatOnSurface() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwQuicksandSettings::get_ImmersionPercentageWhenHeroStandsOnTop() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwQuicksandSettings::get_ImmersionPercentageToTriggerCharacterDeath() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_SwGame::SwQuicksandSettings::get_KeepParticlesAlignedWithQuicksandSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_SwGame::SwQuicksandSettings::set_KeepParticlesAlignedWithQuicksandSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwQuicksandSettings::get_ActorClassSurfaceDeformation() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::SwQuicksandSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwQuicksandSettings");
    return result;
}
