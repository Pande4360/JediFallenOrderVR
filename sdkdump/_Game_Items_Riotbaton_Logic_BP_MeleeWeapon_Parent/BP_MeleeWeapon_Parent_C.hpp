#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent {
#pragma pack(push, 1)
struct BP_MeleeWeapon_Parent_C : public _Script_Engine::Actor {
    private: char pad_360[0x50]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_MeleeWeapon();
    _Script_Engine::ParticleSystemComponent*& get_Weapon_Idle_VFX();
    _Script_AkAudio::AkComponent*& get_Weapon_Idle_AkComponent();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Weapon_Idle_Loop_Start();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Weapon_Idle_Loop_Stop();
    float& get_Max_Relative_Velocity();
    int32_t& get_Audio_Interp_Rate();
    bool get_ShouldPlayMeleeStrikingSaberVFX();
    void set_ShouldPlayMeleeStrikingSaberVFX(bool value);
    bool get_ExtendWeapon();
    void set_ExtendWeapon(bool value);
    void* get_RTPC_Actor_MeleeWeapon_BlockBreak();
    static _Script_CoreUObject::Class* static_class();
    void CosmeticEffects(bool Enabled, _Script_AkAudio::AkComponent* AkComponent, _Script_AkAudio::AkAudioEvent* AkEventStart, _Script_AkAudio::AkAudioEvent* AkEventStop, _Script_Engine::SceneComponent* VFX_Idle);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void BatonOn(bool Off);
    void OnDiedEvent(_Script_Engine::Actor* DeadActor);
    void BatonOff();
    void WeaponActivate(bool ActivateWeapon, _Script_AkAudio::AkAudioEvent* SFX_Weapon_Idle_Loop_Start, _Script_AkAudio::AkAudioEvent* SFX_Weapon_Idle_Loop_Stop);
    void ExecuteUbergraph_BP_MeleeWeapon_Parent(int32_t EntryPoint);
}; // Size: 0x3b0
#pragma pack(pop)
}
