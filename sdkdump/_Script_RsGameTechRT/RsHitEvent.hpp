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
struct RsHitEvent {
    private: char pad_0[0x40]; public:
    void* get_DamageTypeClass();
    void* get_AttackType();
    float& get_HeroDamageFactor();
    void* get_DamageLevel();
    void* get_BlockDepleteLevel();
    void* get_BlockLevel();
    float& get_BlockReactAngleCos();
    bool get_Undodgeable();
    void set_Undodgeable(bool value);
    bool get_Unparryable();
    void set_Unparryable(bool value);
    bool get_SingleHit();
    void set_SingleHit(bool value);
    bool get_NoDamageInSlowdown();
    void set_NoDamageInSlowdown(bool value);
    bool get_DamageFriendlies();
    void set_DamageFriendlies(bool value);
    void* get_HitPause();
    void* get_HitImpulse();
    int32_t& get_UniqueHitID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
