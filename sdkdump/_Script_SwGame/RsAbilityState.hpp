#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwAttackState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityState : public SwAttackState {
    private: char pad_258[0x10]; public:
    bool get_bAllowDefense();
    void set_bAllowDefense(bool value);
    bool get_bIsDefenseActive();
    void set_bIsDefenseActive(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* OnDefenseSuccess(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser);
}; // Size: 0x268
#pragma pack(pop)
}
