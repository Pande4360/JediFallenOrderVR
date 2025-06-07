#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_LoadGame_C.hpp"
#include "..\_Game_UI_PauseMenu_LevelLoadManager\LevelLoadManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_LoadingPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x238);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::set_InPlanetsList(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_NoSaveFileText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_SaveGameButtonVerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x248);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_ButtonsSaveNamesMap() {
    return (void*)((uintptr_t)this + 0x250);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_InPlanetsList() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_CurrentPlanet() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_LevelLoadmanager() {
    return *(_Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C**)((uintptr_t)this + 0x2b0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_NewVar_0_0() {
    return (void*)((uintptr_t)this + 0x2d0);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_Loading() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::set_Loading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::get_SaveGames() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_LoadGame.UI_LoadableScreenWidget_Settings_LoadGame_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::HandleButtonClicked() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::RefreshSaveGameSelection() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::Get_InitText_Visibility_0() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::Get_PlanetButtonVerticalBox_Visibility_0() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::Get_LoadingPanel_Visibility_0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame::UI_LoadableScreenWidget_Settings_LoadGame_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_LoadGame(int32_t EntryPoint) {
    return;
}
