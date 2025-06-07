#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Progression {
#pragma pack(push, 1)
struct HC_Progression_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    static _Script_CoreUObject::Class* static_class();
    void Purchase_Upgrade(int32_t Force_Points, void* Unlocked_Upgrade_Flag);
    void ReceiveBeginPlay();
    void Upgrade_Health();
    void Upgrade_Force_Meter();
    void Upgrade_Block();
    void Initialize_Upgrades();
    void Force_Slow_Upgrade(int32_t Upgrade);
    void Force_Push_Upgrade(int32_t Upgrade);
    void Force_Pull_Upgrade(int32_t Upgrade);
    void Upgrade_Lightsaber_Damage();
    void UnlockFocusAttack();
    void ExecuteUbergraph_HC_Progression(int32_t EntryPoint);
}; // Size: 0x190
#pragma pack(pop)
}
