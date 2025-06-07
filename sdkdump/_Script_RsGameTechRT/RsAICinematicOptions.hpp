#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICinematicOptions {
    private: char pad_0[0x4]; public:
    bool get_bSpawnAggroToPlayer();
    void set_bSpawnAggroToPlayer(bool value);
    bool get_bForceAggroToPlayer();
    void set_bForceAggroToPlayer(bool value);
    bool get_bIsAwake();
    void set_bIsAwake(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
