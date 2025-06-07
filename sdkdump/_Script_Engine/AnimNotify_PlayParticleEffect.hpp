#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNotify.hpp"
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotify_PlayParticleEffect : public AnimNotify {
    private: char pad_38[0x58]; public:
    _Script_Engine::ParticleSystem*& get_PSTemplate();
    void* get_LocationOffset();
    void* get_RotationOffset();
    void* get_Scale();
    bool get_Attached();
    void set_Attached(bool value);
    void* get_SocketName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
