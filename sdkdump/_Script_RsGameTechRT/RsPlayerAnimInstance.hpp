#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsGameAnimInstance.hpp"
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPlayerAnimInstance : public RsGameAnimInstance {
    private: char pad_1110[0xb0]; public:
    void* get_BalanceBeamState();
    void* get_JumpState();
    void* get_LedgeState();
    void* get_climbState();
    void* get_ZiplineState();
    void* get_SwimState();
    void* get_QuicksandState();
    void* get_NavTransitionState();
    void* get_HeroState();
    void* get_SpeederBikeState();
    bool get_bAnimIsBlocking();
    void set_bAnimIsBlocking(bool value);
    int32_t& get_Hero_AttackDir();
    _Script_RsGameTechRT::RsHero*& get_RsHeroRef();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x11c0
#pragma pack(pop)
}
