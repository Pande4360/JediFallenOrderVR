#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA\BP_Hero_AttackDescription_DFA_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_DFA_Sync_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C {
    private: char pad_278[0x10]; public:
    void* get_UberGraphFrame0();
    bool get_SyncStarted();
    void set_SyncStarted(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime);
    void CombatNotify_KillSyncTarget();
    void ExecuteUbergraph_BP_Hero_AttackDescription_DFA_Sync(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
