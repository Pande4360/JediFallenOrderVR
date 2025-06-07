#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VOIPTalker : public ActorComponent {
    private: char pad_170[0x38]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void RegisterWithPlayerState(_Script_Engine::PlayerState* OwningState);
    float GetVoiceLevel();
    _Script_Engine::VOIPTalker* CreateTalkerForPlayer(_Script_Engine::PlayerState* OwningState);
    void BPOnTalkingEnd();
    void BPOnTalkingBegin(_Script_Engine::AudioComponent* AudioComponent);
}; // Size: 0x1a8
#pragma pack(pop)
}
