#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Effects_Blueprints_BPFX_Damage {
struct BPFX_Damage_C;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Game_Effects_Blueprints_BPFX_LowHP {
struct BPFX_LowHP_C;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid {
struct AB_BuddyDroid_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Health {
#pragma pack(push, 1)
struct HC_Health_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0xb8]; public:
    void* get_UberGraphFrame();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUD_ROOT_Ref();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    float& get_healthOrb();
    void* get_HeroAddHealth();
    void* get_HeroReduceHealth();
    void* get_LVL_HeroDying();
    _Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C*& get_LowHealthFX();
    float& get_Damage_Taken();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Player_Receive_Damage();
    float& get_HeroOnFireTime();
    bool get_HeroBurningFXActive();
    void set_HeroBurningFXActive(bool value);
    _Script_Engine::ParticleSystemComponent*& get_FX_Ref();
    _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& get_AB_BuddyDroid();
    bool get_JediInCombat();
    void set_JediInCombat(bool value);
    float& get_HeroCurrentMaxHealth();
    float& get_HeroCurrentHealth();
    bool get_DidHealDuringCombat();
    void set_DidHealDuringCombat(bool value);
    void* get_OnTrueDeath();
    bool get_DeathIsFallDeath();
    void set_DeathIsFallDeath(bool value);
    bool get_SetInvulnerabilityTimerHandle();
    void set_SetInvulnerabilityTimerHandle(bool value);
    void* get_DeathLocation();
    _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C*& get_DamagePostProcess();
    static _Script_CoreUObject::Class* static_class();
    void OnGameStateChangedEvent_Event_0(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void ReceiveBeginPlay();
    void Death();
    void AddHealth(void* NewParam);
    void CallTakeDamage(float Damage, _Script_Engine::DamageType* DamageType);
    void OnDied(_Script_Engine::Actor* DeadActor);
    void Heal();
    void DoDamageAudio(_Script_Engine::DamageType* DamageType);
    void PreHeal();
    void StopHeal();
    void Set_Bracca_Mode(bool Set);
    void Revive();
    void TrueDeath();
    void ExecuteUbergraph_HC_Health(int32_t EntryPoint);
    void OnTrueDeath__DelegateSignature();
    void LVL_HeroDying__DelegateSignature();
    void HeroReduceHealth__DelegateSignature(float DamageTaken);
    void HeroAddHealth__DelegateSignature();
}; // Size: 0x238
#pragma pack(pop)
}
