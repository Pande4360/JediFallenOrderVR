#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_Stat_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::get_LoadingEnemy() {
    return (*(uint8_t*)((uintptr_t)this + 0x258 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::get_btnToggleFPS() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_Stat.UI_LoadableScreenWidget_Settings_Stat_C");
    return result;
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::get_btnToggleLevels() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x240);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::get_btnToggleUnit() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x248);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::get_CheatButtonVerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x250);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::set_LoadingEnemy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x258 + 0);
    *(uint8_t*)((uintptr_t)this + 0x258 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::BndEvt__btnToggleNoHUD_K2Node_ComponentBoundEvent_239_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::BndEvt__btnToggleMaxForce_K2Node_ComponentBoundEvent_120_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::BndEvt__btnToggleSlomo_K2Node_ComponentBoundEvent_196_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat::UI_LoadableScreenWidget_Settings_Stat_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Stat(int32_t EntryPoint) {
    return;
}
