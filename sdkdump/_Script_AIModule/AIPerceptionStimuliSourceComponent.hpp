#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIPerceptionStimuliSourceComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x18]; public:
    bool get_bAutoRegisterAsSource();
    void set_bAutoRegisterAsSource(bool value);
    void* get_RegisterAsSourceForSenses();
    static _Script_CoreUObject::Class* static_class();
    void UnregisterFromSense(void* SenseClass);
    void UnregisterFromPerceptionSystem();
    void RegisterWithPerceptionSystem();
    void RegisterForSense(void* SenseClass);
}; // Size: 0x188
#pragma pack(pop)
}
