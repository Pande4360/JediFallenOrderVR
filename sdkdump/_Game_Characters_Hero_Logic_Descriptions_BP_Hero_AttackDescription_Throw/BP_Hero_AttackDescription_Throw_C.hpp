#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_SwGame {
struct SwLightsaberMovementComponent;
}
namespace _Game_Items_Lightsaber_BP_Lightsaber {
struct BP_Lightsaber_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Throw_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x28]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C*& get_ThrownLightsaber();
    _Script_SwGame::SwLightsaberMovementComponent*& get_SaberMovement();
    int32_t& get_EnemiesKilled();
    static _Script_CoreUObject::Class* static_class();
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_Throw();
    void CombatNotify_Catch();
    void CountEnemiesKilled(_Script_RsGameTechRT::RsCharacter* CharacterKilled);
    void ThrowReturn();
    void ExecuteUbergraph_BP_Hero_AttackDescription_Throw(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
