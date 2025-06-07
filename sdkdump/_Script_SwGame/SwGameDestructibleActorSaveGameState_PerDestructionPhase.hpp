#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGameDestructibleActorSaveGameState_PerDestructionPhase {
    private: char pad_0[0x28]; public:
    void* get_m_ComponentsToShowOriginalCollisionSettings();
    void* get_m_ComponentsToStartPhysics();
    void* get_m_DamageSourceType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
