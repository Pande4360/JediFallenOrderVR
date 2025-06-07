#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Items_Lightsaber_BP_Lightsaber {
struct BP_Lightsaber_C;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Flashlight {
#pragma pack(push, 1)
struct HC_Flashlight_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x48]; public:
    void* get_UberGraphFrame();
    void* get_Lightsaber();
    _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C*& get_BP_Lightsaber();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    void* get_LVL_FlashlightOn();
    void* get_LVL_FlashlightOff();
    static _Script_CoreUObject::Class* static_class();
    void FlashlightAway(bool saveFlashlight);
    void ReceiveBeginPlay();
    void Action_FlashlightAway();
    void Action_FlashlightOut();
    void Exited_Flashlight_Zone();
    void Entered_Flashlight_Zone();
    void SetUpFlashlight();
    void ExecuteUbergraph_HC_Flashlight(int32_t EntryPoint);
    void LVL_FlashlightOff__DelegateSignature();
    void LVL_FlashlightOn__DelegateSignature();
}; // Size: 0x1c8
#pragma pack(pop)
}
