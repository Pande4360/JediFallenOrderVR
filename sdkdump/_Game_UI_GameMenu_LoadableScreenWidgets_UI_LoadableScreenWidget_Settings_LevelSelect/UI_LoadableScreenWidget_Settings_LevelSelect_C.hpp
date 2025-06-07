#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct Throbber;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct WrapBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_PauseMenu_LevelLoadManager {
struct LevelLoadManager_C;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_LevelSelect {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_LevelSelect_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0xa8]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::Throbber*& get_InitializeThrobber();
    _Script_UMG::TextBlock*& get_InitText();
    _Script_UMG::VerticalBox*& get_LoaderButtonVerticalBox();
    _Script_UMG::CanvasPanel*& get_LoadingPanel();
    _Script_UMG::WrapBox*& get_StartMenuGrid();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    void* get_ButtonsNamesMap();
    bool get_InPlanetsList();
    void set_InPlanetsList(bool value);
    void* get_CurrentPlanet();
    _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C*& get_LevelLoadmanager();
    bool get_Loading();
    void set_Loading(bool value);
    bool get_LoadingStartPoints();
    void set_LoadingStartPoints(bool value);
    int32_t& get_CurrentSubMenuLevel();
    static _Script_CoreUObject::Class* static_class();
    void ButtonClicked();
    void OptionalConsumeBackButton0(bool& Consumed);
    void* GetText_0();
    void ChangeSubMenuLevel(int32_t NewLevel, bool& Handled);
    void ShowPlanetsList();
    void* Get_PlanetButtonVerticalBox_Visibility_0();
    void* Get_LoadingPanel_Visibility_0();
    void PopulateButtonsFromNames(void*& Names, bool Alphabetical);
    void LevelLoadDone();
    void ListenForLevelLoadDone();
    void LoadAndWaitForPlanetStartList(void* PlanetName);
    void ReceivedFocus0();
    void LostFocus_1();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_LevelSelect(int32_t EntryPoint);
}; // Size: 0x2d8
#pragma pack(pop)
}
