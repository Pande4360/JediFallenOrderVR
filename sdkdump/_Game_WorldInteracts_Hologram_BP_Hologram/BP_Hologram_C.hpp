#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwHologramBase.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Hologram_BP_Hologram {
#pragma pack(push, 1)
struct BP_Hologram_C : public _Script_SwGame::SwHologramBase {
    private: char pad_910[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::SpotLightComponent*& get_SpotLight_Holo();
    _Script_Engine::ParticleSystemComponent*& get_P_Hologram_Light();
    _Script_Engine::SkeletalMeshComponent*& get_Character();
    _Script_Engine::SpotLightComponent*& get_SpotLight_Top();
    _Script_Engine::SpotLightComponent*& get_SpotLight_Eye();
    _Script_Engine::SpotLightComponent*& get_SpotLight_Rim();
    _Script_Engine::SpotLightComponent*& get_SpotLight_FillLow();
    _Script_Engine::SpotLightComponent*& get_SpotLight_Key();
    _Script_Engine::SceneComponent*& get_Character&LightingSetup();
    _Script_Engine::StaticMeshComponent*& get_HologramBase_01();
    _Script_Engine::SceneComponent*& get_HoloLightEffects();
    bool get_HoloIsActive();
    void set_HoloIsActive(bool value);
    _Script_AkAudio::AkAudioEvent*& get_AudioTrack();
    bool get_Infinite();
    void set_Infinite(bool value);
    float& get_PlayDuration();
    float& get_LightIntensityMultiplier();
    float& get_HoloLightsScale();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Start();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_End();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Loop_Stop();
    static _Script_CoreUObject::Class* static_class();
    void SetHoloLightsVisibility(bool IsVisible);
    void PlayScene();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void HologramActivated0();
    void HologramDeactivated0();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Hologram(int32_t EntryPoint);
}; // Size: 0x9b8
#pragma pack(pop)
}
