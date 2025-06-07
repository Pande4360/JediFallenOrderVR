#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics\HC_Cosmetics_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_UI_CustomizationBtn\UI_CustomizationBtn_C.hpp"
#include "..\_Game_UI_GameMenu_Widgets_UI_SwatchNode\UI_SwatchNode_C.hpp"
#include "UI_CosmeticCustomization_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench\BP_CustomizationWorkbench_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\PanelWidget.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
#include "..\_Script_UMG\WrapBox.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BtnEmitter() {
    return *(_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C**)((uintptr_t)this + 0x640);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_UI() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BtnCere() {
    return *(_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C**)((uintptr_t)this + 0x630);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedSwitch() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_LoadInSwatches() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BtnColor() {
    return *(_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C**)((uintptr_t)this + 0x638);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Back() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x628);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PromptHideUI() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x780);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BtnMaterial() {
    return *(_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C**)((uintptr_t)this + 0x648);
}
_Script_UMG::WrapBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SwitchBox() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x828);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BtnSleeve() {
    return *(_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C**)((uintptr_t)this + 0x650);
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::set_UIHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BtnSwitch() {
    return *(_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C**)((uintptr_t)this + 0x658);
}
_Script_UMG::WrapBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_CereEmittBox() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x660);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_CereEmitter() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x668);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_CereSpacerDot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_CereVertBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x678);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PromptToggleCereHidden() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x7a0);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NodeColor() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x750);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Color() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x680);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ControlsTray() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x690);
}
_Script_UMG::WrapBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ColorBox() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x688);
}
_Script_RsTechRT::RsLine*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_RsLine_4() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x7c0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Emitter() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x698);
}
_Script_RsTechRT::RsLine*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x7b0);
}
_Script_UMG::WrapBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EmitterBox() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedSleeve() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedCereEmit() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x720);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedColor() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedEmitter() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SpacerDot1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7f8);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NodeMetal() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x760);
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::UpdateTopNavSwitchNode(void* TopNavType, void* CosmeticEnum, void* SaberColor) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedMetal() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::WrapBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_MetalBox() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x738);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedSleeve() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6c8);
}
_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_HC_Cosmetics() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C**)((uintptr_t)this + 0x900);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x718);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedCereEmit() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d8);
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::ApplyCosmetic() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedColor() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6e0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PromptReturn() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x788);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedEmitter() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6e8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PromptRotate() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x790);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedMetal() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6f0);
}
_Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::GetBtnFromCosmetic(void* Index) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedSwitch() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x700);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x708);
}
_Script_RsTechRT::RsLine*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_RsLine_10() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x7d0);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x710);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Select() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7e0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PromptSelect() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x798);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Image_20() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x728);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Material() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x730);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NextTab() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x740);
}
_Script_UMG::WrapBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SleeveBox() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x7f0);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NodeCereEmit() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x748);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PrevTab() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x778);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_FocusedCosmeticPanel() {
    return (void*)((uintptr_t)this + 0x909);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NodeEmitter() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x758);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NodeSleeve() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x768);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_NodeSwitch() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x770);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Rotate() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7a8);
}
_Script_RsTechRT::RsLine*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_RsLine_2() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x7b8);
}
_Script_RsTechRT::RsLine*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_RsLine_8() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x7c8);
}
_Script_RsTechRT::RsLine*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_RsLine_12() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x7d8);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Sleeve() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7e8);
}
bool _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ButtonPressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d8 + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SpacerDot2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x800);
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::AddNewSaberColorButton(void* NewSaberColor) {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SpacerDot3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x808);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SpacerDot4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x810);
}
_Script_UMG::Image*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_SpacerDot6() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x818);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Switch() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x820);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ToggleCereHidden() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x830);
}
_Script_UMG::TextBlock*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ToggleUI() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x838);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedSwatches_0() {
    return (void*)((uintptr_t)this + 0x980);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_VerticalBox_0() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x840);
}
_Script_UMG::WidgetSwitcher*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_WidgetSwitcher_0() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x848);
}
_Script_UMG::Overlay*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_WrapBox() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x850);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ButtonToCosmeticEnum() {
    return (void*)((uintptr_t)this + 0x858);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_ButtonToSaberColor() {
    return (void*)((uintptr_t)this + 0x8a8);
}
_Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C*& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_BP_CustomizationWorkbench() {
    return *(_Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C**)((uintptr_t)this + 0x8f8);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_CurrentCosmeticPanel() {
    return (void*)((uintptr_t)this + 0x908);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_EquippedSwatches() {
    return (void*)((uintptr_t)this + 0x910);
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnCere_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature() {
    return;
}
bool _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_IsFocusingOnPanel() {
    return (*(uint8_t*)((uintptr_t)this + 0x960 + 0)) & 1 != 0;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnSleeve_K2Node_ComponentBoundEvent_32_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::set_IsFocusingOnPanel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x960 + 0);
    *(uint8_t*)((uintptr_t)this + 0x960 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_CosmeticDisplayName() {
    return (void*)((uintptr_t)this + 0x968);
}
bool _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_UIHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d0 + 0)) & 1 != 0;
}
float& _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_HoldProgress() {
    return *(float*)((uintptr_t)this + 0x9d4);
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::set_ButtonPressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_Tab_FirstTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d9 + 0)) & 1 != 0;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::set_Tab_FirstTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::get_PrevCosmeticPanel() {
    return (void*)((uintptr_t)this + 0x9da);
}
_Script_CoreUObject::Class* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_CosmeticCustomization.UI_CosmeticCustomization_C");
    return result;
}
_Script_UMG::TextBlock* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::GetEquippedElemFromCosmetic(void* Index) {
    return;
}
_Script_UMG::TextBlock* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::GetTextElementFromCosmetic(void* Index) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::RefreshTopNavEquippedButtons() {
    return;
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::Get_CosmeticNameText_Text_0() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::GetDisplayNameAndSwatchTexture(void* TopNavType, void* CosmeticEnum, void* SaberColor, bool& DataFound, void*& OutputDisplayName, void*& OutputSwatchTexture) {
    return;
}
void* _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::GetText_0() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::SetCosmetic() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::PopulateColorBox() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::PopulateWrapBox(void* CosmeticTypeEnum, _Script_UMG::PanelWidget* ParentWidget, bool IsCereEmitter) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::CreateNewButton(_Script_UMG::PanelWidget* ParentWidget, _Script_RsGameTechRT::RsUiButton*& CreatedButton) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::InitializeCustomizationOptions() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::Construct() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::OnWindowClosed0() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::HandleButtonFocused() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::HandleButtonAccepted() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::OnAcceptedTopNavButton() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::FocusOnPanel() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::OnCancelInput(void* ActionName) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::FocusOnTopNav() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::UpdatePanelButtonFocus() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::HideUI(void* Input) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnCere_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnColor_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnColor_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnEmitter_K2Node_ComponentBoundEvent_6_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnEmitter_K2Node_ComponentBoundEvent_8_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnMaterial_K2Node_ComponentBoundEvent_10_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnMaterial_K2Node_ComponentBoundEvent_11_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnSleeve_K2Node_ComponentBoundEvent_31_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnSwitch_K2Node_ComponentBoundEvent_34_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::BndEvt__BtnSwitch_K2Node_ComponentBoundEvent_35_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::OnWindowOpened0() {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::Tab(void* ActionName) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::OnUnfocusedTopNavButton(void* Cosmetic) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::OnFocusedTopNavButton(void* FocusedCosmeticPanel) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::ToggleHideCereSwitch(void* ActionName) {
    return;
}
void _Game_UI_UI_CosmeticCustomization::UI_CosmeticCustomization_C::ExecuteUbergraph_UI_CosmeticCustomization(int32_t EntryPoint) {
    return;
}
