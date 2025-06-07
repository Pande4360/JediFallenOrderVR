#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCombatState.hpp"
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
struct SwDefenseState : public _Script_RsGameTechRT::RsCombatState {
    private: char pad_118[0x18]; public:
    bool get_bIsDefenseActive();
    void set_bIsDefenseActive(bool value);
    void* get_ConfigurableDefenseType();
    bool get_bHasTickImplemetation();
    void set_bHasTickImplemetation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TickDefense(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime);
    void OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void* OnDefenseSuccess(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser);
    void OnDefenseAborted(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
}; // Size: 0x130
#pragma pack(pop)
}
