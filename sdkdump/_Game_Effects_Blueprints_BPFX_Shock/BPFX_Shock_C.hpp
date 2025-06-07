#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Blueprints_BPFX_Shock {
#pragma pack(push, 1)
struct BPFX_Shock_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Script_Engine::ParticleSystemComponent*& get_ShockEffect();
    void* get_Shock_Color();
    _Script_AkAudio::AkAudioEvent*& get_SFX();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void ParticleSystemFinished(_Script_Engine::ParticleSystemComponent* PSystem);
    void ExecuteUbergraph_BPFX_Shock(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
}
