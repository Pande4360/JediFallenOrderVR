#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Game_UI_3DMap_UI_MapMenu\UI_MapMenu_C.hpp"
#include "UI_MapTutorial_C.hpp"
#include "..\_Game_UI_Map_UI_TutorialCompleteCheck\UI_TutorialCompleteCheck_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TextBlock_25() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x798);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1Intro_0() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
void* _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutorialRedGreen() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TextBlock_0() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x780);
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::Tutorial1Complete__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1_Passive() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TextBlock_11() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x790);
}
_Script_UMG::VerticalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_MoveBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x728);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1IntroFull() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_DownLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x660);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutorialElevationIntro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_14() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x708);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1Outro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x638);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_FrameIntro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x640);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UpElevationButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x810);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_12() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x698);
}
_Script_UMG::Border*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Border_5() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x648);
}
_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutCompleteCheck_Zoom() {
    return *(_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C**)((uintptr_t)this + 0x7b0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Buttons() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x650);
}
_Script_UMG::SizeBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial2_RedGreen() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x7d0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial2_EleContent() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x7c8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_DownElevationButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x658);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_DownOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x668);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_1() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x670);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_3() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x678);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_7() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x680);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_8() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x688);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_9() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x690);
}
_Script_UMG::HorizontalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HorizontalBox_14() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6a0);
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::TutStepComplete_MapRotate() {
    return;
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_PulseOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x758);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b8);
}
_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutCompleteCheck_Move() {
    return *(_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C**)((uintptr_t)this + 0x7a0);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_RotateOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x778);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_5() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_6() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_7() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UI_MenuButtonPrompt_C_2() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x7f8);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_8() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_9() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6e8);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_11() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6f0);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_12() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_13() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x700);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Image_15() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x710);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Linework() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x718);
}
_Script_UMG::CanvasPanel*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_MainCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x720);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_MoveLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x730);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7c0);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_MoveOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x738);
}
_Script_UMG::Image*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x740);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Overlay_3() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x748);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Overlay_4() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x750);
}
_Script_UMG::RetainerBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x760);
}
_Script_UMG::VerticalBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_RotateBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x768);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_RotateLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x770);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TextBlock_2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x788);
}
_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutCompleteCheck_Rotate() {
    return *(_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C**)((uintptr_t)this + 0x7a8);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1_Content() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x7b8);
}
_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutorialComplete_EleDown() {
    return *(_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C**)((uintptr_t)this + 0x7d8);
}
_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutorialComplete_EleUp() {
    return *(_Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C**)((uintptr_t)this + 0x7e0);
}
_Script_UMG::SizeBox*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_TutorialContainer() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x7e8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UI_MenuButtonPrompt_C_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x7f0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UI_MenuButtonPrompt_C_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x800);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UI_MenuButtonPrompt_C_9() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x808);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UpLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x818);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_UpOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x820);
}
_Script_UMG::TextBlock*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_ZoomLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x828);
}
_Script_UMG::Overlay*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_ZoomOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x830);
}
void* _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x838);
}
float& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_RenderOpacityFloat() {
    return *(float*)((uintptr_t)this + 0x9a8);
}
_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_MapMenuRef() {
    return *(_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C**)((uintptr_t)this + 0x9b0);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HUD_Ref() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x9b8);
}
void* _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_Tutorial1Complete() {
    return (void*)((uintptr_t)this + 0x9c0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::get_HolomapRef() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x9d0);
}
_Script_CoreUObject::Class* _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Holomap/UI_MapTutorial.UI_MapTutorial_C");
    return result;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::Construct() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::CheckZoomedOut() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::CheckZoomedIn() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::EndTutorial() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::ShowTutorialSteps() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::ShowElevationTutorial() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::CheckElevationDown() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::CheckElevationUp() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::TutStepComplete_MapMove() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::TutStepComplete_MapZoom() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::StartTutorial1() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::EndTutorial1() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::StartTutorial2_Elevation() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::EndTutorial2_Elevation() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::StartTutorial2___RedGreen() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::EndTutorial2___RedGreen() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::TutStepComplete_ElevationUp() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::TutStepComplete_ElevationDown() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::CustomEvent_0() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::StartTutorial1Passive() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::InitializedWorldMapHologram() {
    return;
}
void _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C::ExecuteUbergraph_UI_MapTutorial(int32_t EntryPoint) {
    return;
}
