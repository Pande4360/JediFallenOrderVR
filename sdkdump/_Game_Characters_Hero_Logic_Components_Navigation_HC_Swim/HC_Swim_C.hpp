#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwSwimComponent.hpp"
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Game_Characters_Hero_Logic_AB_Hero {
struct AB_Hero_C;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim {
#pragma pack(push, 1)
struct HC_Swim_C : public _Script_SwGame::SwSwimComponent {
    private: char pad_220[0xa0]; public:
    void* get_UberGraphFrame();
    void* get_storedNav();
    _Script_Engine::AnimMontage*& get_Montage_Swim_Boost();
    bool get_IsUnderwater();
    void set_IsUnderwater(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Sound_Underwater_State_Activate();
    _Script_AkAudio::AkAudioEvent*& get_Sound_Underwater_State_Deactivate();
    _Script_Engine::ParticleSystemComponent*& get_WaterDripFX();
    _Script_Engine::ParticleSystemComponent*& get_L_Hand_FX();
    _Script_Engine::ParticleSystemComponent*& get_R_Hand_FX();
    _Script_Engine::ParticleSystemComponent*& get_L_Foot_FX();
    _Script_Engine::ParticleSystemComponent*& get_R_Foot_FX();
    _Script_CoreUObject::Object*& get_L_Hand_Deform();
    _Script_CoreUObject::Object*& get_R_Hand_Deform();
    _Script_Engine::ParticleSystemComponent*& get_Breather_FX();
    void* get_StartSwimming();
    void* get_StopSwimming();
    bool get_InCinematicSwim();
    void set_InCinematicSwim(bool value);
    _Script_Engine::StaticMeshActor*& get_breather();
    static _Script_CoreUObject::Class* static_class();
    void ShowBreather(bool Visibility);
    void GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero);
    void Swim_Shallow_Water_Enter();
    void Swim_Shallow_Water_Exit();
    void SwimBoost();
    void SwimStateEnter(void* NewState, void* PrevState);
    void ReceiveBeginPlay();
    void OnSwimStateChanged(void* previousSwimState, void* newSwimState);
    void SwimStateExit(void* NewState, void* PrevState);
    void EnableCinematicSwim();
    void DisableCinematicSwim();
    void ExecuteUbergraph_HC_Swim(int32_t EntryPoint);
    void StopSwimming__DelegateSignature();
    void StartSwimming__DelegateSignature();
}; // Size: 0x2c0
#pragma pack(pop)
}
