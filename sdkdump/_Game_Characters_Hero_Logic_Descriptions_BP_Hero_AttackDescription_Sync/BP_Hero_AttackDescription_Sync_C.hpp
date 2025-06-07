#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic\BP_Hero_AttackDescription_Basic_C.hpp"
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync {
#pragma pack(push, 1)
struct BP_Hero_AttackDescription_Sync_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic::BP_Hero_AttackDescription_Basic_C {
    private: char pad_270[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_RsGameTechRT::RsCharacter*& get_SyncTarget();
    void* get_SavedLightsaberType();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_KillSyncTarget();
    void CombatNotify_KillSyncTargetWithDeathAnim();
    void Reset_Lightsaber_Type();
    void OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void CombatNotify_ResetToStaff();
    void CombatNotify_SwitchToSaber();
    void ExecuteUbergraph_BP_Hero_AttackDescription_Sync(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
}
