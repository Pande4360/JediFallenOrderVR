#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
struct R4PlayerController;
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
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Leap_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x30]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    bool get_HasCollided();
    void set_HasCollided(bool value);
    bool get_HasAttacked();
    void set_HasAttacked(bool value);
    _Script_RsGameTechRT::RsCharacter*& get_Attack_Target();
    _Script_SwGame::R4PlayerController*& get_PlayerController();
    bool get_CanRotate();
    void set_CanRotate(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_AllowAim();
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void CombatNotify_StartTracking();
    void CombatNotify_StopTracking();
    void CombatNotify_Attack();
    void ExecuteUbergraph_BP_Hero_AttackDescription_Leap(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
