#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleChunkParameters {
    private: char pad_0[0x4]; public:
    bool get_bIsSupportChunk();
    void set_bIsSupportChunk(bool value);
    bool get_bDoNotFracture();
    void set_bDoNotFracture(bool value);
    bool get_bDoNotDamage();
    void set_bDoNotDamage(bool value);
    bool get_bDoNotCrumble();
    void set_bDoNotCrumble(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
