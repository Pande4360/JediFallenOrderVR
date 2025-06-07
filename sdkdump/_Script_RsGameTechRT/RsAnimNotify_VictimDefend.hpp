#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotify_VictimDefend : public _Script_Engine::AnimNotify {
    private: char pad_38[0x28]; public:
    void* get_AttackDirection();
    void* get_DefenseType();
    void* get_Offset();
    void* get_OffsetEnd();
    float& get_Radius();
    bool get_bAllowDefendingWeaponIk();
    void set_bAllowDefendingWeaponIk(bool value);
    bool get_bManuallySetCollisionParts();
    void set_bManuallySetCollisionParts(bool value);
    void* get_CollisionParts();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
