#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Game_UI_3DMap_UI_MapCursor\UI_MapCursor_C.hpp"
#include "..\_Game_UI_3DMap_UI_MapCursorGalaxy\UI_MapCursorGalaxy_C.hpp"
#include "UI_MapMenu_C.hpp"
#include "..\_Game_UI_Holomap_UI_MapTutorial\UI_MapTutorial_C.hpp"
#include "..\_Game_UI_Map_UI_MapLevelIndicator\UI_MapLevelIndicator_C.hpp"
#include "..\_Game_UI_Messages_UI_LocationStamp\UI_LocationStamp_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Game_UI_UI_MissionEventToast\UI_MissionEventToast_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneCapture2D.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\CanvasPanelSlot.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\Widget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ExploredComplete() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x700);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_InputDetected() {
    return (void*)((uintptr_t)this + 0x988);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TravelButton_ProgressCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x8c8);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_AdvControls() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x620);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetNameForAurebesh() {
    return (void*)((uintptr_t)this + 0xe18);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TravelContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x8e8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RedGreenBlink() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestsBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x7f8);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_AffirmativeTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CompletionPercentBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x690);
}
_Script_UMG::WidgetAnimation*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HighlightObjective() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_AffirmativeBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x628);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_AffirmativeButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x630);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_AurebeshType() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x640);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LevelSwitchButton() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x7a8);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_BlackBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x648);
}
_Game_UI_Messages_UI_LocationStamp::UI_LocationStamp_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_LocationStamp() {
    return *(_Game_UI_Messages_UI_LocationStamp::UI_LocationStamp_C**)((uintptr_t)this + 0x8f8);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_BlockedLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x650);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LegendLabelTxt() {
    return (void*)((uintptr_t)this + 0xe38);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_BlockedPath() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x658);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Border_3() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x660);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Button() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x668);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ButtonBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::UniformGridPanel*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ButtonHolder() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x678);
}
_Script_UMG::Widget*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Widget() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x9b8);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ChestsBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x680);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CloseButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x688);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_15() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x750);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CompletionPercentTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x698);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ControlsBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x6a0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::InputDetected__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_13() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x740);
}
_Script_CoreUObject::Class* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/3DMap/UI_MapMenu.UI_MapMenu_C");
    return result;
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_DoesGalaxyCursorExist() {
    return (*(uint8_t*)((uintptr_t)this + 0xdb1 + 0)) & 1 != 0;
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ControlsTray() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CurrentPlanetButton() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlayerLocationGalaxyLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x848);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CurrentPlanetLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b8);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SelectedRegionName() {
    return (void*)((uintptr_t)this + 0xd48);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt_C_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x940);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_D_PadVert() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c0);
}
_Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_GalaxyCursor() {
    return *(_Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C**)((uintptr_t)this + 0xd80);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_DefaultControls() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x820);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Dot1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Dot2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d8);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsButtonPushed() {
    return (*(uint8_t*)((uintptr_t)this + 0xa50 + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_doublegradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PitchBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x7e8);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ElevationBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6e8);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_EscapeBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6f0);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsTotal() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x840);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_EscapeTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ExploredText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x708);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleContainerVisibility(int32_t A, _Script_UMG::Widget* Target, bool& IsHIdden) {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_FocusedRoundedRect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x710);
}
_Script_UMG::UniformGridPanel*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_GalaxyLegendGridPanel() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x718);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_GalaxyViewButtons() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x720);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Gradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x728);
}
_Script_SlateCore::SlateColor _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::GetPlanetSecretsColor() {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_5() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x730);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleWorldCompletionVisuals() {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_7() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x738);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_14() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x748);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CanInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x980 + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_18() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x758);
}
_Script_UMG::CanvasPanel*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TutorialCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x8f0);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_28() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x760);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_35() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x770);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_33() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x768);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TravelButton_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x8d0);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Image_40() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x778);
}
_Script_Engine::SceneCapture2D*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SceneCamera() {
    return *(_Script_Engine::SceneCapture2D**)((uintptr_t)this + 0x998);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_InteriorLevelLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x780);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LegendContainer() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x798);
}
_Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MapLevelIndicator() {
    return *(_Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C**)((uintptr_t)this + 0x908);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LegendBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x788);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UnexploredLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x948);
}
_Script_UMG::CanvasPanel*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LegendCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x790);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_AtHolotable() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d1 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LegendLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7a0);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Line() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7b0);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_MainObjectiveLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7c0);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_MainObjectiveGalaxyLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7b8);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_NewPath() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x7c8);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsBoganoTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6e + 0)) & 1 != 0;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x9b0);
}
_Script_UMG::Border*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SecretsBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x898);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_OpenLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7d0);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PercentSign() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7e0);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PanBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x7d8);
}
float& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0xa54);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestComplete() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7f0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ZoomButtonRight() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x978);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestsCurrent() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x800);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestsIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x808);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsToastOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd51 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ScansTotal() {
    return *(int32_t*)((uintptr_t)this + 0xa2c);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestsTotal() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x810);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsLegendTutorialPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6d + 0)) & 1 != 0;
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetList() {
    return (void*)((uintptr_t)this + 0x9d8);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x818);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsComplete() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x828);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsCurrent() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x830);
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x838);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlayerLocationLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x850);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_EchoesCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xa7c);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RecenterBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x858);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x860);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt_C_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x930);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RetainerBox_1() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x868);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RetainerBox_2() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x870);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RetainerBox_3() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x878);
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RetainerBox_4() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x880);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::CapitalizeThings() {
    return;
}
_Script_UMG::UniformGridPanel*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RoamingLegendGridPanel() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x888);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SavePointLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x890);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TextBlock_0() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x8a0);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TextBlock_9() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x8a8);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::SetPlanetName() {
    return;
}
_Script_UMG::Image*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_topgradient() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x8b0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::LegendToggle() {
    return;
}
_Script_UMG::RetainerBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TopLeft() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x8b8);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleChestCompletionVisuals() {
    return;
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TravelButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x8c0);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TravelButtonCenter() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x8d8);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TravelButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x8e0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::AddTutorial() {
    return;
}
_Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MapCursor() {
    return *(_Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C**)((uintptr_t)this + 0x900);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x910);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x918);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x920);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x928);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_MenuButtonPrompt_C_2() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x938);
}
_Script_UMG::TextBlock*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ViewPlanetButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x950);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ViewPlanetMapButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x958);
}
_Script_UMG::SizeBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ViewPlanetMapCenter() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x960);
}
_Script_UMG::HorizontalBox*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ZoomBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x968);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ZoomButtonLeft() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x970);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_CanInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x980 + 0);
    *(uint8_t*)((uintptr_t)this + 0x980 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x9a0);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_MapCameraFound() {
    return (*(uint8_t*)((uintptr_t)this + 0x9a8 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_MapCameraFound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HUDRoot() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x9c0);
}
float& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_Low() {
    return *(float*)((uintptr_t)this + 0x9c8);
}
float& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_High() {
    return *(float*)((uintptr_t)this + 0x9cc);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SpeedMenuUp_() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d0 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_SpeedMenuUp_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_AtHolotable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ScansCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xa28);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ChestsCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xa30);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ChestsTotal() {
    return *(int32_t*)((uintptr_t)this + 0xa34);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_EchoesTotal() {
    return *(int32_t*)((uintptr_t)this + 0xa38);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_UI_SetInteriorLevel() {
    return (void*)((uintptr_t)this + 0xa40);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsButtonPushed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa50 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0xa58);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsLoading() {
    return (*(uint8_t*)((uintptr_t)this + 0xa60 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsLoading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa60 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ProgressValue() {
    return *(float*)((uintptr_t)this + 0xa64);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HolomapRef() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0xa68);
}
_Script_UMG::CanvasPanelSlot*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RegionContainerSlot() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0xa70);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_NewVar_0() {
    return *(int32_t*)((uintptr_t)this + 0xa78);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_BlueDefaultColor() {
    return (void*)((uintptr_t)this + 0xa80);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_BlueHighlightColor() {
    return (void*)((uintptr_t)this + 0xaa8);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ActiveCollectTypes() {
    return *(int32_t*)((uintptr_t)this + 0xad0);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_EchoesColor() {
    return (void*)((uintptr_t)this + 0xad8);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ScansColor() {
    return (void*)((uintptr_t)this + 0xb00);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ChestsColor() {
    return (void*)((uintptr_t)this + 0xb28);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RoamingPlanet() {
    return (void*)((uintptr_t)this + 0xb50);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HolotablePlanet() {
    return (void*)((uintptr_t)this + 0xb60);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_CurrentPlanet() {
    return (void*)((uintptr_t)this + 0xb70);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HolotableGalaxy() {
    return (void*)((uintptr_t)this + 0xb78);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RoamingGalaxy() {
    return (void*)((uintptr_t)this + 0xb88);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0xb98);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SecretTokens() {
    return (void*)((uintptr_t)this + 0xd08);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestsCurrentCount() {
    return *(int32_t*)((uintptr_t)this + 0xd18);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetChestsTotalCount() {
    return *(int32_t*)((uintptr_t)this + 0xd1c);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsCurrentCount() {
    return *(int32_t*)((uintptr_t)this + 0xd20);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_PlanetSecretsTotalCount() {
    return *(int32_t*)((uintptr_t)this + 0xd24);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LifeEssenceTotal() {
    return *(int32_t*)((uintptr_t)this + 0xd28);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ForceEssenceTotal() {
    return *(int32_t*)((uintptr_t)this + 0xd2c);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HealCanisterTotal() {
    return *(int32_t*)((uintptr_t)this + 0xd30);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_LifeEssenceCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xd34);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_ForceEssenceCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xd38);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_HealCanisterCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xd3c);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsSecretInThisRegion() {
    return (*(uint8_t*)((uintptr_t)this + 0xd40 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsSecretInThisRegion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd40 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsToastResponse() {
    return (*(uint8_t*)((uintptr_t)this + 0xd50 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::CreateMapCursorGalaxy() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsToastResponse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd50 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsToastOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0xd51 + 0)) & 1 != 0;
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RegionsWithSecrets() {
    return (void*)((uintptr_t)this + 0xd58);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::CustomEvent_2() {
    return;
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_RegionCompletionPercent() {
    return *(int32_t*)((uintptr_t)this + 0xd68);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsLegendHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6c + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsLegendHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6c + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsLegendTutorialPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6d + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsBoganoTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6e + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_TutorialMessage() {
    return *(_Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C**)((uintptr_t)this + 0xd70);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0xd78 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd78 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SecretsCurrent() {
    return *(int32_t*)((uintptr_t)this + 0xe10);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SelectedWorld() {
    return (void*)((uintptr_t)this + 0xd88);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_MapMenuVisible() {
    return (void*)((uintptr_t)this + 0xd90);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_MapMenuHidden() {
    return (void*)((uintptr_t)this + 0xda0);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsMapMenuVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0xdb0 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsMapMenuVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xdb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_DoesGalaxyCursorExist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xdb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_UI_MissionEventToast::UI_MissionEventToast_C*& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_MissionObjectiveHeader() {
    return *(_Game_UI_UI_MissionEventToast::UI_MissionEventToast_C**)((uintptr_t)this + 0xdb8);
}
void* _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_WorldNamesMap() {
    return (void*)((uintptr_t)this + 0xdc0);
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::MapMenuHidden_Event() {
    return;
}
int32_t& _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_SecretsTotal() {
    return *(int32_t*)((uintptr_t)this + 0xe14);
}
bool _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::get_IsTutorialMode() {
    return (*(uint8_t*)((uintptr_t)this + 0xe30 + 0)) & 1 != 0;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UpdateLocationStampNumbers() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::set_IsTutorialMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe30 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::GetExplorationPercent(void*& WorldName) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Capitalize(_Script_UMG::TextBlock* Input) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::GetSecretsCount(void*& Region, bool& HaveAnySecrets, int32_t& Found, int32_t& Total) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ButtonHandlingTick() {
    return;
}
_Script_SlateCore::SlateColor _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::GetPlanetChestColor() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UI_SetMissionObjectiveUI_Event(void* MissionObjectiveName) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Construct() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UI_SetRegionAndTag(_Script_RsGameTechRT::RsMapSectionTag MapSectionTag, void* MapSectionTagString) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UI_SetInteriorLevel_Event(int32_t CurrentLevel, int32_t TotalLevels) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ConfirmSelection() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::OnPlanetLoading() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::OnPlanetLoaded() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Audio_OnButtonTravelButtonHoldStart() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Audio_OnButtonTravelButtonHoldRelease() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Audio_OnHoldComplete() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ShowHolotablePlanet(void* Region) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ShowRoamingPlanet() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleControlsTray() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UpdateMissions() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::CollapseAllChildren() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ShowHolotableGalaxy() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ShowRoamingGalaxy() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::AddButtonsToArrays() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::CustomEvent_0(void* Region) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::CustomEvent_1() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::RemoveExistingLocationStamps() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::OnMapClosed() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::OnMapOpen() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::OnCollectiblesAcquired(void* CollectableType, void*& WorldName, void*& RegionName) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::TutorialModeHide(bool IsTutorialMode) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::GalaxyModeSwitch() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleTargetedInteriorLevel(void* TargetInteriorLevel, void* CurrentInteriorLevel) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleInteriorLevelOff() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::MapMenuVisible_Event() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UI_Accept_is_Pushed() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UI_Accept_is_Released() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleUISecondaryConfirm() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleHiddenObjectivesVisuals() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::HandleCounters(void* RegionName, bool IsGalaxy) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UpdateInputPrompts(void* NewInputDevice) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UpdateAllButtonPrompts() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::Initialize_References_and_Event_Delegates() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::ExecuteUbergraph_UI_MapMenu(int32_t EntryPoint) {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::MapMenuHidden__DelegateSignature() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::MapMenuVisible__DelegateSignature() {
    return;
}
void _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C::UI_SetInteriorLevel__DelegateSignature(int32_t CurrentLevel) {
    return;
}
