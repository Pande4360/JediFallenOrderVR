#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsModelSwapActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsTKDoorActor : public RsModelSwapActor {
    private: char pad_368[0x60]; public:
    void* get_ModelSwapOut();
    void* get_ModelSwapIn();
    float& get_SpawnedActorLifetime();
    void* get_SpawnedActors();
    bool get_bIsActivated();
    void set_bIsActivated(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool SwapAndSpawnObjects();
    bool IsActivated();
    void* GetSpawnedActors();
}; // Size: 0x3c8
#pragma pack(pop)
}
