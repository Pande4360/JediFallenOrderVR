#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbilityEffectTask.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwFallAETask : public RsAbilityEffectTask {
    private: char pad_48[0x70]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnBumperTopologyChanged(void* previousMode, void* newMode, float Proximity);
}; // Size: 0xb8
#pragma pack(pop)
}
