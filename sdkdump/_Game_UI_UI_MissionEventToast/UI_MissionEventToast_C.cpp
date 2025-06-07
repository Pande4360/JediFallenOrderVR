#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem\BP_MissionObjectiveSystem_C.hpp"
#include "..\_Game_UI_3DMap_UI_MapMenu\UI_MapMenu_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "UI_MissionEventToast_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::LVL_MissionToastAnimFinished__DelegateSignature() {
    return;
}
void* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x640);
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::Construct() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ToastToMapTransition() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_MapOpenDefault() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_UI_MenuButtonPrompt_C_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ObjectiveComplete() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_CoreUObject::Class* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_MissionEventToast.UI_MissionEventToast_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Outtro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_TravelBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
void* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_LVL_MissionToastAnimFinished() {
    return (void*)((uintptr_t)this + 0x858);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x638);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_AnimatedButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x648);
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::CleanUp() {
    return;
}
_Script_UMG::Border*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x650);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ButtonBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x658);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Canvascontainer() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x660);
}
_Script_UMG::Image*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ContentBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x668);
}
_Script_UMG::Image*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_JediLogo() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::CloseToast(void* NewParam) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_NewObjectiveTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x680);
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::set_IsAutoPlayEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x868 + 0);
    *(uint8_t*)((uintptr_t)this + 0x868 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ObjectiveComplete_ObjName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x688);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ObjectiveCompleteContentBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x690);
}
_Script_UMG::TextBlock*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ObjectiveCompleteLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x698);
}
_Script_UMG::Image*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::Image*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_PulseOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a8);
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::DebugUpdateMissionText(void* RowName) {
    return;
}
_Script_UMG::RetainerBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ReturntoMantisLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::ScaleBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_ScaleBox_0() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::SizeBox*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::TextBlock*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_Txt_ObjectiveTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d8);
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::InitialFanfare() {
    return;
}
void* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x6e8);
}
bool _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_IsAutoPlayEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x868 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_MissionObjectiveSysRef() {
    return *(_Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C**)((uintptr_t)this + 0x870);
}
_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_MapMenuRef() {
    return *(_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C**)((uintptr_t)this + 0x878);
}
void* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_LastMission() {
    return (void*)((uintptr_t)this + 0x880);
}
void* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_CurrentObjectiveTxt() {
    return (void*)((uintptr_t)this + 0x8d8);
}
void* _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_NewObjectiveAddedTxt() {
    return (void*)((uintptr_t)this + 0x8f0);
}
bool _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::get_IsFanfarePlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x908 + 0)) & 1 != 0;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::set_IsFanfarePlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x908 + 0);
    *(uint8_t*)((uintptr_t)this + 0x908 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SlateCore::SlateBrush _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::Get_Glow_Brush_0() {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::OnWindowOpened0() {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::UpdateMissionText() {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::DefaultOpen() {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::ShowObjectiveComplete(void* ObjectiveName) {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::UpdateScale(int32_t Value) {
    return;
}
void _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C::ExecuteUbergraph_UI_MissionEventToast(int32_t EntryPoint) {
    return;
}
