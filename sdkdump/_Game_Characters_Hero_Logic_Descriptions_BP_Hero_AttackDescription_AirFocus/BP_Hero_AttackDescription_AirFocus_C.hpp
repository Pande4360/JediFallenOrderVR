#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAttackState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_AirFocus {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_AirFocus_C : public _Script_SwGame::SwAttackState {
    private: char pad_258[0x10]; public:
    void* get_UberGraphFrame();
    void* get_TimedOutTimer();
    static _Script_CoreUObject::Class* static_class();
    void AttackTimedOut();
    void OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void Ground_State_Entered(void* NewState, void* PrevState);
    void CombatNotify_PushMotion();
    void Swim_State_Entered(void* NewState, void* PrevState);
    void ExecuteUbergraph_BP_Hero_AttackDescription_AirFocus(int32_t EntryPoint);
}; // Size: 0x268
#pragma pack(pop)
}
