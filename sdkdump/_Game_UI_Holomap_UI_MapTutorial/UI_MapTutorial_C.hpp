#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Game_UI_Map_UI_TutorialCompleteCheck {
struct UI_TutorialCompleteCheck_C;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_UI_3DMap_UI_MapMenu {
struct UI_MapMenu_C;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_MapTutorial {
#pragma pack(push, 1)
struct UI_MapTutorial_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x3d0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Tutorial1Intro_0();
    _Script_UMG::WidgetAnimation*& get_Tutorial1IntroFull();
    _Script_UMG::WidgetAnimation*& get_Tutorial1_Passive();
    _Script_UMG::WidgetAnimation*& get_TutorialRedGreen();
    _Script_UMG::WidgetAnimation*& get_TutorialElevationIntro();
    _Script_UMG::WidgetAnimation*& get_Tutorial1Outro();
    _Script_UMG::WidgetAnimation*& get_FrameIntro();
    _Script_UMG::Border*& get_Border_5();
    _Script_UMG::HorizontalBox*& get_Buttons();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_DownElevationButtonPrompt();
    _Script_UMG::TextBlock*& get_DownLabel();
    _Script_UMG::Overlay*& get_DownOverlay();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_1();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_3();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_7();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_8();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_9();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_12();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_14();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_6();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::Image*& get_Image_8();
    _Script_UMG::Image*& get_Image_9();
    _Script_UMG::Image*& get_Image_11();
    _Script_UMG::Image*& get_Image_12();
    _Script_UMG::Image*& get_Image_13();
    _Script_UMG::Image*& get_Image_14();
    _Script_UMG::Image*& get_Image_15();
    _Script_UMG::Image*& get_Linework();
    _Script_UMG::CanvasPanel*& get_MainCanvas();
    _Script_UMG::VerticalBox*& get_MoveBox();
    _Script_UMG::TextBlock*& get_MoveLabel();
    _Script_UMG::Overlay*& get_MoveOverlay();
    _Script_UMG::Image*& get_Outline();
    _Script_UMG::Overlay*& get_Overlay_3();
    _Script_UMG::Overlay*& get_Overlay_4();
    _Script_UMG::Image*& get_PulseOutline();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::VerticalBox*& get_RotateBox();
    _Script_UMG::TextBlock*& get_RotateLabel();
    _Script_UMG::Overlay*& get_RotateOverlay();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    _Script_UMG::TextBlock*& get_TextBlock_2();
    _Script_UMG::TextBlock*& get_TextBlock_11();
    _Script_UMG::TextBlock*& get_TextBlock_25();
    _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& get_TutCompleteCheck_Move();
    _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& get_TutCompleteCheck_Rotate();
    _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& get_TutCompleteCheck_Zoom();
    _Script_UMG::Overlay*& get_Tutorial1_Content();
    _Script_UMG::TextBlock*& get_Tutorial1Text();
    _Script_UMG::HorizontalBox*& get_Tutorial2_EleContent();
    _Script_UMG::SizeBox*& get_Tutorial2_RedGreen();
    _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& get_TutorialComplete_EleDown();
    _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& get_TutorialComplete_EleUp();
    _Script_UMG::SizeBox*& get_TutorialContainer();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_9();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UpElevationButtonPrompt();
    _Script_UMG::TextBlock*& get_UpLabel();
    _Script_UMG::Overlay*& get_UpOverlay();
    _Script_UMG::TextBlock*& get_ZoomLabel();
    _Script_UMG::Overlay*& get_ZoomOverlay();
    void* get_StyleSheet();
    float& get_RenderOpacityFloat();
    _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& get_MapMenuRef();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUD_Ref();
    void* get_Tutorial1Complete();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_HolomapRef();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void CheckZoomedOut();
    void CheckZoomedIn();
    void EndTutorial();
    void ShowTutorialSteps();
    void ShowElevationTutorial();
    void CheckElevationDown();
    void CheckElevationUp();
    void TutStepComplete_MapMove();
    void TutStepComplete_MapRotate();
    void TutStepComplete_MapZoom();
    void StartTutorial1();
    void EndTutorial1();
    void StartTutorial2_Elevation();
    void EndTutorial2_Elevation();
    void StartTutorial2___RedGreen();
    void EndTutorial2___RedGreen();
    void TutStepComplete_ElevationUp();
    void TutStepComplete_ElevationDown();
    void CustomEvent_0();
    void StartTutorial1Passive();
    void InitializedWorldMapHologram();
    void ExecuteUbergraph_UI_MapTutorial(int32_t EntryPoint);
    void Tutorial1Complete__DelegateSignature();
}; // Size: 0x9d8
#pragma pack(pop)
}
