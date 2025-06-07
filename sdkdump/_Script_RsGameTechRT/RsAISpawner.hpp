#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsAILeashingActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawner : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    void* get_OnAISpawnedEvent();
    void* get_OnAIDespawnedEvent();
    _Script_RsGameTechRT::RsAILeashingActor*& get_LeashingBounds();
    static _Script_CoreUObject::Class* static_class();
    void PrimeSpawner();
    void EnableSpawner(bool bEnable);
    void DespawnAllAI(void* DespawnReason);
}; // Size: 0x390
#pragma pack(pop)
}
