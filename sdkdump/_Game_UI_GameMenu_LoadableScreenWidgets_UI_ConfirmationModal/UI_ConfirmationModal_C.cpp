#include "..\FUObjectArray.hpp"
#include "UI_ConfirmationModal_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
float& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Timer() {
    return *(float*)((uintptr_t)this + 0x6f0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_BorderAnimLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_AcceptHover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_ConfirmationModal.UI_ConfirmationModal_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_AcceptText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x658);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_AcceptBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x640);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_CancelHover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_AcceptFocus() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x650);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_CancelBtnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_AcceptBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x638);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__Accept_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_BorderAnim() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::Button*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Accept() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x630);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_AcceptBtn() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x648);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Backing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x660);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Border() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x668);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_CancelBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
_Script_UMG::Button*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_CancelBtn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x680);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_CancelFocused() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x688);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_CancelText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x690);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_ConfirmationModal() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x698);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Txt_SaveThisRes() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d8);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::Image*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Linework() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_RsLine_0() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_Time() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_OnModalClosed() {
    return (void*)((uintptr_t)this + 0x6e0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::get_OnModalCanceled() {
    return (void*)((uintptr_t)this + 0x6f8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::CancelResolution(void* Action) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__UI_PauseMenuToggle_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::ExecuteUbergraph_UI_ConfirmationModal(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::OnModalCanceled__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal::UI_ConfirmationModal_C::OnModalClosed__DelegateSignature() {
    return;
}
