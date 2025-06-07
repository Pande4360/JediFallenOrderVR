#include "..\FUObjectArray.hpp"
#include "PhotoMode_HUD_Widget_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SwGame\SwPhotomodeCameraController.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\Slider.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ChromaticBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void* _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Backing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ChromaticLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FDistanceLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ChromaticRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FStopValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x378);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ChromaticSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x230);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_53() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3d0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptLeftShoulder() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x440);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ChromaticTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x238);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ChromaticValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::Border*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ControlTray() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x248);
}
_Script_UMG::HorizontalBox*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Divider4() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x250);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ExposureBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x258);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HidePlayerRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3b8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ExposureLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ExposureRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TiltTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x530);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ExposureSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x328);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ExposureTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilmSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ExposureValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FDistanceBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FDistanceRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_58() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3f8);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FDistanceSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FDistanceTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FDistanceValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_59() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x400);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilmBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_57() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3f0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilmLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilmRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilmTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FStopBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x350);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilmValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterStrengthBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HideAIValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3a0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterStrengthLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x308);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TextBlock_3() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x500);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HideAILArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x388);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterStrengthRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x310);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterStrengthTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x318);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterStrengthValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x320);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FilterValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x330);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_55() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3e0);
}
_Script_UMG::HorizontalBox*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FineTuneGamepad() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x338);
}
_Script_UMG::HorizontalBox*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FineTunePC() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x340);
}
_Script_UMG::WidgetSwitcher*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FineTuneWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x348);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FStopLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x358);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FStopRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x360);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FStopSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x368);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_FStopTItle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HideAIBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x380);
}
void _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::UpdateSliderValues(void* TweakID, _Script_UMG::Slider* Slider, _Script_UMG::TextBlock* TextValue, _Script_UMG::TextBlock* Title) {
    return;
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotColorBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4c8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HideAIRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x390);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HideAITitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x398);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HidePlayerBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3a8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HidePlayerLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HidePlayerTItle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3c0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_HidePlayerValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3c8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_54() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3d8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_56() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3e8);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_60() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x408);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_61() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x410);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_62() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x418);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_63() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x420);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Image_64() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x428);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_MouseScrollWheel() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x430);
}
_Script_UMG::CanvasPanel*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PhotomodePanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x438);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptLeftTrigger() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x448);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptMove() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x450);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptReturn() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x458);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptRightShoulder() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x460);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptRightTrigger() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x468);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptRotate() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x470);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptSpotlight() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x478);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PromptTakePhoto() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x480);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ScreenshotButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x488);
}
_Script_UMG::Overlay*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotBrightness() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x490);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotBrightnessBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x498);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotBrightnessLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4a0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotBrightnessRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4a8);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotBrightnessTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4b0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotBrightnessValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4b8);
}
_Script_UMG::Overlay*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotColor() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x4c0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotColorLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4d0);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotColorRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4d8);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotColorTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4e0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotColorValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4e8);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_SpotlightButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4f0);
}
void _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::OnInitialized0() {
    return;
}
_Script_UMG::HorizontalBox*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TakePhoto() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x4f8);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TextBlock_4() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x508);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TiltBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x510);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TiltLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x518);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TiltRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x520);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TiltSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x528);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_TiltValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x538);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_UI_MenuButtonPrompt_C_7() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x540);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_UI_MenuButtonPrompt_C_8() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x548);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_VignetteBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x550);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_VignetteLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x558);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_VignetteRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x560);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_VignetteSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x568);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_VignetteTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x570);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_VignetteValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x578);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ZoomBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x580);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ZoomLArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x588);
}
_Script_UMG::Image*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ZoomRArrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x590);
}
_Script_UMG::Slider*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ZoomSlider() {
    return *(_Script_UMG::Slider**)((uintptr_t)this + 0x598);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ZoomTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x5a0);
}
_Script_UMG::TextBlock*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_ZoomValue() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x5a8);
}
_Script_SwGame::SwPhotomodeCameraController*& _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_PhotoModeController() {
    return *(_Script_SwGame::SwPhotomodeCameraController**)((uintptr_t)this + 0x5b0);
}
void* _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Text_Color() {
    return (void*)((uintptr_t)this + 0x5b8);
}
void* _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_Selected_Text_Color() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::get_NewVar_0() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_CoreUObject::Class* _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/TechArt/Photomode/PhotoMode_HUD_Widget.PhotoMode_HUD_Widget_C");
    return result;
}
void _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::ToUpperText() {
    return;
}
void _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::UpdateSelectedVisuals(_Script_UMG::Image* LArrrow, _Script_UMG::Image* RArrow, _Script_UMG::Image* SelectedBorder, void* TweakID) {
    return;
}
void _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C::ExecuteUbergraph_PhotoMode_HUD_Widget(int32_t EntryPoint) {
    return;
}
