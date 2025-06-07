#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwStaminaMeterComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina {
#pragma pack(push, 1)
struct HC_Stamina_C : public _Script_SwGame::SwStaminaMeterComponent {
    private: char pad_1f0[0x18]; public:
    void* get_UberGraphFrame();
    float& get_UpgradeBlockMultiplier();
    bool get_DEBUGInfiniteStamina();
    void set_DEBUGInfiniteStamina(bool value);
    float& get_DEBUGNormalStamina();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void Update_Stamina_Value();
    void Upgrade_Stamina_Meter();
    void DebugToggleInfiniteStamina();
    void ExecuteUbergraph_HC_Stamina(int32_t EntryPoint);
}; // Size: 0x208
#pragma pack(pop)
}
