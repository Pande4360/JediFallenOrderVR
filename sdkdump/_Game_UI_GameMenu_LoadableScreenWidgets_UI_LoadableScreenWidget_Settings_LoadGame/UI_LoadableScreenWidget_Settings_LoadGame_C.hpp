#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_LevelLoadManager {
struct LevelLoadManager_C;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LoadGame {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_LoadGame_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0xb0]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::CanvasPanel*& get_LoadingPanel();
    _Script_UMG::TextBlock*& get_NoSaveFileText();
    _Script_UMG::VerticalBox*& get_SaveGameButtonVerticalBox();
    void* get_ButtonsSaveNamesMap();
    bool get_InPlanetsList();
    void set_InPlanetsList(bool value);
    void* get_CurrentPlanet();
    _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C*& get_LevelLoadmanager();
    bool get_Loading();
    void set_Loading(bool value);
    void* get_SaveGames();
    void* get_NewVar_0_0();
    static _Script_CoreUObject::Class* static_class();
    void HandleButtonClicked();
    void RefreshSaveGameSelection();
    void* Get_InitText_Visibility_0();
    void* Get_PlanetButtonVerticalBox_Visibility_0();
    void* Get_LoadingPanel_Visibility_0();
    void Construct();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_LoadGame(int32_t EntryPoint);
}; // Size: 0x2e0
#pragma pack(pop)
}
