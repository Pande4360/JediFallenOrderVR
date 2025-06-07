#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_Map_UI_Map_Loader {
struct UI_Map_Loader_C;
}
namespace _Game_UI_Map_UI_MapLevelLow {
struct UI_MapLevelLow_C;
}
namespace _Game_UI_Map_UI_MapLevelTop {
struct UI_MapLevelTop_C;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_3DMap_UI_MapCursor {
#pragma pack(push, 1)
struct UI_MapCursor_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x2d8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ElevationControlsTutorial();
    _Script_UMG::Image*& get_ele_botline();
    _Script_UMG::Image*& get_ele_topline();
    _Script_UMG::VerticalBox*& get_EleLevel();
    _Script_UMG::VerticalBox*& get_ElevationPromptContainer();
    _Script_UMG::TextBlock*& get_ExploredPercentLabel();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_6();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::VerticalBox*& get_LevelContainer();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_LevelDown();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_LevelUp();
    _Script_UMG::CanvasPanel*& get_MainCanvas();
    _Script_UMG::Border*& get_PromptHolder();
    _Script_UMG::Image*& get_Ret_Default();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::RetainerBox*& get_RetainerBox_6();
    _Script_UMG::CanvasPanel*& get_Reticule();
    _Script_UMG::RetainerBox*& get_RoamingTarget();
    _Script_UMG::SizeBox*& get_SizeBox_0();
    _Script_UMG::HorizontalBox*& get_TargetContainer();
    _Script_UMG::TextBlock*& get_TextBlock_3();
    _Game_UI_Map_UI_Map_Loader::UI_Map_Loader_C*& get_UI_Map_Loader();
    _Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& get_UI_MapLevelLow();
    _Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& get_UI_MapLevelLow_1();
    _Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& get_UI_MapLevelLow_C_1();
    _Game_UI_Map_UI_MapLevelLow::UI_MapLevelLow_C*& get_UI_MapLevelLow_C_2();
    _Game_UI_Map_UI_MapLevelTop::UI_MapLevelTop_C*& get_UI_MapLevelTop();
    _Script_UMG::Spacer*& get_wSpacerTarget1();
    _Script_UMG::Spacer*& get_wSpacerTarget2();
    _Script_UMG::Image*& get_ZoomIndicator();
    _Script_UMG::Image*& get_ZoomLines();
    _Script_UMG::Spacer*& get_ZoomSlideSpacer();
    float& get_hSpace();
    float& get_vSpace();
    float& get_ZoomScaleMultiplier();
    float& get_InitialZoomValue();
    int32_t& get_TotalLevels();
    int32_t& get_Current_Level();
    float& get_PaddingValue();
    float& get_SpacerSize();
    void* get_StyleSheet();
    void* get_SelectedRegion();
    int32_t& get_RegionCompletionPercent();
    bool get_IsGalaxy();
    void set_IsGalaxy(bool value);
    float& get_GalaxyScaleUpperBound();
    _Script_UMG::CanvasPanelSlot*& get_FlyoutCanvasSlotRef();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void UpdateElevationLevel(int32_t CurrentLevel, int32_t TotalLevels);
    void PlayElevationTutorialBlink(bool Blink);
    void HandleTargetMode(bool IsLoading);
    void HandleTargetInteriorLevel();
    void UpdateButtonPromptKeys();
    void ExecuteUbergraph_UI_MapCursor(int32_t EntryPoint);
}; // Size: 0x4e0
#pragma pack(pop)
}
