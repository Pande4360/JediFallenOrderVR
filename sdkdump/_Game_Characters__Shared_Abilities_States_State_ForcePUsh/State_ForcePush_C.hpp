#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\RsAbilityState.hpp"
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters__Shared_Abilities_States_State_ForcePUsh {
#pragma pack(push, 1)
struct State_ForcePush_C : public _Script_SwGame::RsAbilityState {
    private: char pad_268[0x18]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsCharacter*& get_Owner();
    bool get_PushButtonHeld();
    void set_PushButtonHeld(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* OnDefenseSuccess0(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser);
    void CombatNotify_BranchPush();
    void CombatNotify_BranchPush_2to3();
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_SaberBranch(void* Identifier);
    void CombatNotify_SaberBranch_2to3(void* Identifier);
    void TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void ExecuteUbergraph_State_ForcePush(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
