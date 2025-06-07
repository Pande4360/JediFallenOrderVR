#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Structs_ST_AbilityInfo {
#pragma pack(push, 1)
struct ST_AbilityInfo {
    private: char pad_0[0x90]; public:
    _Script_Engine::Texture2D*& get_Icon_8_0D3E9E22403853C48CD9BC9B3ADE165C();
    _Script_Engine::Texture2D*& get_FocusedIcon_10_12D147804477B7C245B9CB81A93EC5B6();
    void* get_Name_2_987B3B59482B7EB87A61899E46E5422C();
    void* get_CombatTip_37_027815C345A34E71463049983A1AEE26();
    void* get_UpgradeTip_49_48C6AB5946E98FFC968017B1D7810519();
    void* get_Description_13_A9450E314F0F602CF6A9039EEBD47937();
    void* get_PrimaryInput_38_2BAF52F64B94866EC6730BB593CD29B4();
    void* get_SecondaryInput_41_B40D52AF4B097B5D6DDE44B245012767();
    bool get_CalAbility_22_2F6BA3F843E3FB7393EB7D8BBC9BA0DE();
    void set_CalAbility_22_2F6BA3F843E3FB7393EB7D8BBC9BA0DE(bool value);
    void* get_HeroLoadoutFlag_43_7EBB9C6741305C35C7D127B7953E09E6();
    void* get_HeroUpgradeFlag_46_7D786DB94E6467FFBEE8849C0953B184();
    void* get_AcquireText_34_4200776E46DE6565999D3F854844CBA9();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
