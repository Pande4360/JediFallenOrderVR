#include "..\FUObjectArray.hpp"
#include "ST_AbilityInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_Name_2_987B3B59482B7EB87A61899E46E5422C() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_Icon_8_0D3E9E22403853C48CD9BC9B3ADE165C() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_Description_13_A9450E314F0F602CF6A9039EEBD47937() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_FocusedIcon_10_12D147804477B7C245B9CB81A93EC5B6() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x8);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_CombatTip_37_027815C345A34E71463049983A1AEE26() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_UpgradeTip_49_48C6AB5946E98FFC968017B1D7810519() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_PrimaryInput_38_2BAF52F64B94866EC6730BB593CD29B4() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_SecondaryInput_41_B40D52AF4B097B5D6DDE44B245012767() {
    return (void*)((uintptr_t)this + 0x71);
}
bool _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_CalAbility_22_2F6BA3F843E3FB7393EB7D8BBC9BA0DE() {
    return (*(uint8_t*)((uintptr_t)this + 0x72 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::set_CalAbility_22_2F6BA3F843E3FB7393EB7D8BBC9BA0DE(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x72 + 0);
    *(uint8_t*)((uintptr_t)this + 0x72 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_HeroLoadoutFlag_43_7EBB9C6741305C35C7D127B7953E09E6() {
    return (void*)((uintptr_t)this + 0x73);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_HeroUpgradeFlag_46_7D786DB94E6467FFBEE8849C0953B184() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::get_AcquireText_34_4200776E46DE6565999D3F854844CBA9() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Structs_ST_AbilityInfo::ST_AbilityInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/GameMenu/Structs/ST_AbilityInfo.ST_AbilityInfo");
    return result;
}
