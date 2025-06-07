#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics\HC_Cosmetics_C.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_Cheats_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector\UI_PauseMenuBtn_Selector_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacterDefinition.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\PanelWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WrapBox.hpp"
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_ForceLevel2Upgrades() {
    return (void*)((uintptr_t)this + 0x4a0);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnToggleGodMode() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x268);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_Abilities() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x238);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnAllForcePowers() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x240);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnToggleMaxForce_K2Node_ComponentBoundEvent_120_RsButtonEvent__DelegateSignature() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnAllPlanets() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x248);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnKillAI() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x250);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnKillNearby() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x258);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_AllPlanets() {
    return (void*)((uintptr_t)this + 0x318);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnSpawnAI() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x260);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnToggleMaxForce() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x270);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnToggleMaxStamina() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x278);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_AllUpgrades() {
    return (void*)((uintptr_t)this + 0x308);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnToggleNoHUD() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x280);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockSpecificAbility() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x2b0);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnToggleSlomo() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x288);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_Skills() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x2e8);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockAllCosmetics() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x290);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockForceLevel1() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x298);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockForceLevel2() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x2a0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnKillAI_K2Node_ComponentBoundEvent_252_RsButtonEvent__DelegateSignature() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockNewGamePlus() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x2a8);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockSpecificPlanet() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_btnUnlockSpecificSkill() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_CheatButtonVerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2c8);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_PlanetLoadoutFlags() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_Enemies() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x2d0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_ButtonsToSkillUnlocks() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_LoadingPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_Planets() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_WrapBox_0() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x2f0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_AllAbilities() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnToggleGodMode_K2Node_ComponentBoundEvent_291_RsButtonEvent__DelegateSignature() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_AbilityLoadoutFlags() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_ButtonsToLoadoutUnlocks() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_SpawnAIList() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_ButtonsToAICharacters() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_LocalCharVal() {
    return (void*)((uintptr_t)this + 0x448);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::InitializeLoadoutUnlocksPanel(void*& FlagSet, _Script_UMG::PanelWidget*& ParentPanel) {
    return;
}
_Script_UMG::PanelWidget*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_CurrentFocusedPanel() {
    return *(_Script_UMG::PanelWidget**)((uintptr_t)this + 0x470);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_LoadingEnemy() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::set_LoadingEnemy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_SkillUpgradeFlags() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_ForceLevel1Loadouts() {
    return (void*)((uintptr_t)this + 0x490);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::GetHCCosmetics(_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& HC_Cosmetics) {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_NewVar_0() {
    return (void*)((uintptr_t)this + 0x4b0);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_NewVar_1() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x4c0);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::get_NewVar_2() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x4c8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_Cheats.UI_LoadableScreenWidget_Settings_Cheats_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnToggleSlomo_K2Node_ComponentBoundEvent_196_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::InitializeSkillUnlocksPanel(void*& FlagSet) {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::Get_LoadingPanel_Visibility_0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::InitCheckboxes() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::OptionalConsumeBackButton0(bool& Consumed) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::ButtonClicked() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::ShowMenu(_Script_UMG::PanelWidget* NewPanel) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::InitializeAISpawnPanel() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::CleanupEnumString(void* Enum, void*& CleanName) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::OnLoaded_096D0B57408EC9FB98297D9706EF5DA4(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnAllForcePowers_K2Node_ComponentBoundEvent_36_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnToggleNoHUD_K2Node_ComponentBoundEvent_239_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnToggleMaxStamina_K2Node_ComponentBoundEvent_102_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnAllPlanets_K2Node_ComponentBoundEvent_104_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockSpecificAbility_K2Node_ComponentBoundEvent_1131_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockSpecificPlanet_K2Node_ComponentBoundEvent_1347_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnSpawnAI_K2Node_ComponentBoundEvent_40_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::TrySpawnSoftRef(void* Character) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::SpawnFromDef(_Script_RsGameTechRT::RsAICharacterDefinition* Def) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnKillNearby_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockSpecificSkill_K2Node_ComponentBoundEvent_2_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockAllCosmetics_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::UnlockAllForceAbilities() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockForceLevel1_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockForceLevel2_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::BndEvt__btnUnlockNewGamePlus_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats::UI_LoadableScreenWidget_Settings_Cheats_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Cheats(int32_t EntryPoint) {
    return;
}
