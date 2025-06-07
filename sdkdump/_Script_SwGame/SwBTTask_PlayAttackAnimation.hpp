#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwBTTask_PlayCombatStateAnimation.hpp"
namespace _Script_SwGame {
struct SwAttackState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTTask_PlayAttackAnimation : public SwBTTask_PlayCombatStateAnimation {
    private: char pad_c8[0x10]; public:
    _Script_SwGame::SwAttackState*& get_AttackTemplate();
    bool get_bNeedsTarget();
    void set_bNeedsTarget(bool value);
    bool get_bRequiresLOS();
    void set_bRequiresLOS(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
