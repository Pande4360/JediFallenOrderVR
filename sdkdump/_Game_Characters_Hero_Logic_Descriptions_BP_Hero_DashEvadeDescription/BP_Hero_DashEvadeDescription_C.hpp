#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription\BP_Hero_RollEvadeDescription_C.hpp"
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
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription {
#pragma pack(push, 1)
struct BP_Hero_DashEvadeDescription_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C {
    private: char pad_148[0x8]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void* OnDefenseSuccess(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser);
    void OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void CheckEvadeAttack();
    void ExecuteUbergraph_BP_Hero_DashEvadeDescription(int32_t EntryPoint);
}; // Size: 0x150
#pragma pack(pop)
}
