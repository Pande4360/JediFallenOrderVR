#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_CinematicSelect_C.hpp"
#include "..\_Game_UI_PauseMenu_LevelLoadManager\LevelLoadManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\Throbber.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WrapBox.hpp"
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_TextBlock_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x260);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_UMG::Throbber*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_InitializeThrobber() {
    return *(_Script_UMG::Throbber**)((uintptr_t)this + 0x238);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_ButtonsNamesMap() {
    return (void*)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_InitText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_StartMenuGrid() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x258);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_LoaderButtonVerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x248);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_LoadingPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x250);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_InPlanetsList() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::LostFocus_1() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::set_InPlanetsList(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_CurrentPlanet() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_LevelLoadmanager() {
    return *(_Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C**)((uintptr_t)this + 0x2c8);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_Loading() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_CurrentSubMenuLevel() {
    return *(int32_t*)((uintptr_t)this + 0x2d4);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::set_Loading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_LoadingStartPoints() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d1 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::set_LoadingStartPoints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::get_StartMenuGrid_0() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_CinematicSelect.UI_LoadableScreenWidget_Settings_CinematicSelect_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::ButtonClicked() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::OptionalConsumeBackButton0(bool& Consumed) {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::GetText_0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::ChangeSubMenuLevel(int32_t NewLevel, bool& Handled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::ShowPlanetsList() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::Get_PlanetButtonVerticalBox_Visibility_0() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::Get_LoadingPanel_Visibility_0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::PopulateButtonsFromNames(void*& Names, bool Alphabetical) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::LevelLoadDone() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::ListenForLevelLoadDone() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::LoadAndWaitForPlanetStartList(void* PlanetName) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::ReceivedFocus0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_CinematicSelect::UI_LoadableScreenWidget_Settings_CinematicSelect_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_CinematicSelect(int32_t EntryPoint) {
    return;
}
