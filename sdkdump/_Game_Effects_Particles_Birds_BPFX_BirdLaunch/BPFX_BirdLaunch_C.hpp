#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Effects_Particles_Birds_BPFX_BirdLaunch {
#pragma pack(push, 1)
struct BPFX_BirdLaunch_C : public _Script_Engine::Actor {
    private: char pad_360[0x38]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneComponent*& get_Scene();
    void* get_LaunchLocation();
    void* get_BirdScale();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BPFX_BirdLaunch(int32_t EntryPoint);
}; // Size: 0x398
#pragma pack(pop)
}
