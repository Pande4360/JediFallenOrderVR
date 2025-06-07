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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Heavy_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x28]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Script_RsGameTechRT::RsCharacter*& get_LeapTarget();
    bool get_AttackButtonReleased();
    void set_AttackButtonReleased(bool value);
    bool get_HasCollided();
    void set_HasCollided(bool value);
    bool get_HasAttacked();
    void set_HasAttacked(bool value);
    bool get_StartedLeap();
    void set_StartedLeap(bool value);
    void* get_StartLocation();
    static _Script_CoreUObject::Class* static_class();
    void CombatNotify_Heavy_ReAcquire();
    void CombatNotify_CheckHoldBranch();
    void TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ExecuteUbergraph_BP_Hero_AttackDescription_Heavy(int32_t EntryPoint);
}; // Size: 0x280
#pragma pack(pop)
}
