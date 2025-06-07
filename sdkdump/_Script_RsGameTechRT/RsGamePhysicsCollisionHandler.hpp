#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PhysicsCollisionHandler.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGamePhysicsCollisionHandler : public _Script_Engine::PhysicsCollisionHandler {
    private: char pad_40[0x60]; public:
    _Script_AkAudio::AkAudioEvent*& get_ImpactEvent();
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    void* get_m_LastPlayedRagdollSounds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
