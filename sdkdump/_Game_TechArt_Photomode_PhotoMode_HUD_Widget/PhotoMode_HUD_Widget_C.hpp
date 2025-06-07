#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Slider;
}
namespace _Script_UMG {
struct TextBlock;
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
struct Overlay;
}
namespace _Script_SwGame {
struct SwPhotomodeCameraController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_TechArt_Photomode_PhotoMode_HUD_Widget {
#pragma pack(push, 1)
struct PhotoMode_HUD_Widget_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x408]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Image*& get_ChromaticBorder();
    _Script_UMG::Image*& get_ChromaticLArrow();
    _Script_UMG::Image*& get_ChromaticRArrow();
    _Script_UMG::Slider*& get_ChromaticSlider();
    _Script_UMG::TextBlock*& get_ChromaticTitle();
    _Script_UMG::TextBlock*& get_ChromaticValue();
    _Script_UMG::Border*& get_ControlTray();
    _Script_UMG::HorizontalBox*& get_Divider4();
    _Script_UMG::Image*& get_ExposureBorder();
    _Script_UMG::Image*& get_ExposureLArrow();
    _Script_UMG::Image*& get_ExposureRArrow();
    _Script_UMG::Slider*& get_ExposureSlider();
    _Script_UMG::TextBlock*& get_ExposureTitle();
    _Script_UMG::TextBlock*& get_ExposureValue();
    _Script_UMG::Image*& get_FDistanceBorder();
    _Script_UMG::Image*& get_FDistanceLArrow();
    _Script_UMG::Image*& get_FDistanceRArrow();
    _Script_UMG::Slider*& get_FDistanceSlider();
    _Script_UMG::TextBlock*& get_FDistanceTitle();
    _Script_UMG::TextBlock*& get_FDistanceValue();
    _Script_UMG::Image*& get_FilmBorder();
    _Script_UMG::Image*& get_FilmLArrow();
    _Script_UMG::Image*& get_FilmRArrow();
    _Script_UMG::Slider*& get_FilmSlider();
    _Script_UMG::TextBlock*& get_FilmTitle();
    _Script_UMG::TextBlock*& get_FilmValue();
    _Script_UMG::Image*& get_FilterBorder();
    _Script_UMG::Image*& get_FilterLArrow();
    _Script_UMG::Image*& get_FilterRArrow();
    _Script_UMG::Image*& get_FilterStrengthBorder();
    _Script_UMG::Image*& get_FilterStrengthLArrow();
    _Script_UMG::Image*& get_FilterStrengthRArrow();
    _Script_UMG::TextBlock*& get_FilterStrengthTitle();
    _Script_UMG::TextBlock*& get_FilterStrengthValue();
    _Script_UMG::TextBlock*& get_FilterTitle();
    _Script_UMG::TextBlock*& get_FilterValue();
    _Script_UMG::HorizontalBox*& get_FineTuneGamepad();
    _Script_UMG::HorizontalBox*& get_FineTunePC();
    _Script_UMG::WidgetSwitcher*& get_FineTuneWidgetSwitcher();
    _Script_UMG::Image*& get_FStopBorder();
    _Script_UMG::Image*& get_FStopLArrow();
    _Script_UMG::Image*& get_FStopRArrow();
    _Script_UMG::Slider*& get_FStopSlider();
    _Script_UMG::TextBlock*& get_FStopTItle();
    _Script_UMG::TextBlock*& get_FStopValue();
    _Script_UMG::Image*& get_HideAIBorder();
    _Script_UMG::Image*& get_HideAILArrow();
    _Script_UMG::Image*& get_HideAIRArrow();
    _Script_UMG::TextBlock*& get_HideAITitle();
    _Script_UMG::TextBlock*& get_HideAIValue();
    _Script_UMG::Image*& get_HidePlayerBorder();
    _Script_UMG::Image*& get_HidePlayerLArrow();
    _Script_UMG::Image*& get_HidePlayerRArrow();
    _Script_UMG::TextBlock*& get_HidePlayerTItle();
    _Script_UMG::TextBlock*& get_HidePlayerValue();
    _Script_UMG::Image*& get_Image_53();
    _Script_UMG::Image*& get_Image_54();
    _Script_UMG::Image*& get_Image_55();
    _Script_UMG::Image*& get_Image_56();
    _Script_UMG::Image*& get_Image_57();
    _Script_UMG::Image*& get_Image_58();
    _Script_UMG::Image*& get_Image_59();
    _Script_UMG::Image*& get_Image_60();
    _Script_UMG::Image*& get_Image_61();
    _Script_UMG::Image*& get_Image_62();
    _Script_UMG::Image*& get_Image_63();
    _Script_UMG::Image*& get_Image_64();
    _Script_UMG::Image*& get_MouseScrollWheel();
    _Script_UMG::CanvasPanel*& get_PhotomodePanel();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptLeftShoulder();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptLeftTrigger();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptMove();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptReturn();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptRightShoulder();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptRightTrigger();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptRotate();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptSpotlight();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptTakePhoto();
    _Script_UMG::TextBlock*& get_ScreenshotButtonLabel();
    _Script_UMG::Overlay*& get_SpotBrightness();
    _Script_UMG::Image*& get_SpotBrightnessBorder();
    _Script_UMG::Image*& get_SpotBrightnessLArrow();
    _Script_UMG::Image*& get_SpotBrightnessRArrow();
    _Script_UMG::TextBlock*& get_SpotBrightnessTitle();
    _Script_UMG::TextBlock*& get_SpotBrightnessValue();
    _Script_UMG::Overlay*& get_SpotColor();
    _Script_UMG::Image*& get_SpotColorBorder();
    _Script_UMG::Image*& get_SpotColorLArrow();
    _Script_UMG::Image*& get_SpotColorRArrow();
    _Script_UMG::TextBlock*& get_SpotColorTitle();
    _Script_UMG::TextBlock*& get_SpotColorValue();
    _Script_UMG::TextBlock*& get_SpotlightButtonLabel();
    _Script_UMG::HorizontalBox*& get_TakePhoto();
    _Script_UMG::TextBlock*& get_TextBlock_3();
    _Script_UMG::TextBlock*& get_TextBlock_4();
    _Script_UMG::Image*& get_TiltBorder();
    _Script_UMG::Image*& get_TiltLArrow();
    _Script_UMG::Image*& get_TiltRArrow();
    _Script_UMG::Slider*& get_TiltSlider();
    _Script_UMG::TextBlock*& get_TiltTitle();
    _Script_UMG::TextBlock*& get_TiltValue();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_7();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_8();
    _Script_UMG::Image*& get_VignetteBorder();
    _Script_UMG::Image*& get_VignetteLArrow();
    _Script_UMG::Image*& get_VignetteRArrow();
    _Script_UMG::Slider*& get_VignetteSlider();
    _Script_UMG::TextBlock*& get_VignetteTitle();
    _Script_UMG::TextBlock*& get_VignetteValue();
    _Script_UMG::Image*& get_ZoomBorder();
    _Script_UMG::Image*& get_ZoomLArrow();
    _Script_UMG::Image*& get_ZoomRArrow();
    _Script_UMG::Slider*& get_ZoomSlider();
    _Script_UMG::TextBlock*& get_ZoomTitle();
    _Script_UMG::TextBlock*& get_ZoomValue();
    _Script_SwGame::SwPhotomodeCameraController*& get_PhotoModeController();
    void* get_Text_Color();
    void* get_Selected_Text_Color();
    void* get_NewVar_0();
    static _Script_CoreUObject::Class* static_class();
    void ToUpperText();
    void UpdateSelectedVisuals(_Script_UMG::Image* LArrrow, _Script_UMG::Image* RArrow, _Script_UMG::Image* SelectedBorder, void* TweakID);
    void UpdateSliderValues(void* TweakID, _Script_UMG::Slider* Slider, _Script_UMG::TextBlock* TextValue, _Script_UMG::TextBlock* Title);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void OnInitialized0();
    void ExecuteUbergraph_PhotoMode_HUD_Widget(int32_t EntryPoint);
}; // Size: 0x610
#pragma pack(pop)
}
