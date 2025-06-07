#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\RsAbilityState.hpp"
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
struct RsAbilityUserComponent;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_Engine {
struct Controller;
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
namespace _Game_Characters__Shared_Abilities_States_State_ForcePull {
#pragma pack(push, 1)
struct State_ForcePull_C : public _Script_SwGame::RsAbilityState {
    private: char pad_268[0x28]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsCharacter*& get_Attacker();
    _Script_SwGame::RsAbilityUserComponent*& get_RsAbilityUser();
    void* get_Pull_Timer();
    _Script_RsGameTechRT::RsAICharacter*& get_forcePullHold_Target();
    static _Script_CoreUObject::Class* static_class();
    void CombatNotify_TriggerPull();
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_LiftObject();
    void CombatNotify_TriggerPullAoE();
    void TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void Nav_State_Changed(void* NewState, void* PrevState);
    void Check_Exit_Cases();
    void Force_Pull_Timer_Expired();
    void OnTakeDamage(_Script_RsGameTechRT::RsCharacter* TheDefender, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void ExecuteUbergraph_State_ForcePull(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
