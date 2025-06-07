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
struct SwProjectileOverrideInfo {
    private: char pad_0[0x28]; public:
    void* get_ProjectileType();
    void* get_NumShotsToMissWhenShotOffScreen();
    bool get_bOverrideOffScreenAccuracy();
    void set_bOverrideOffScreenAccuracy(bool value);
    float& get_ChanceToMissWhenShotOffScreen();
    bool get_bUseConsecutiveShots();
    void set_bUseConsecutiveShots(bool value);
    void* get_MaxNumConsecutiveShots();
    float& get_ChanceOfConsecutiveShot();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
