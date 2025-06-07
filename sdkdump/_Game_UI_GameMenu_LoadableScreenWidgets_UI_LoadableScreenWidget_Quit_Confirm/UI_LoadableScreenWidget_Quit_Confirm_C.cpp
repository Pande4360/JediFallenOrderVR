#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Quit_Confirm_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::get_QuitToDesktop() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x250);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::get_btn_QuitConfirm() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x240);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::ExecuteUbergraph_UI_LoadableScreenWidget_Quit_Confirm(int32_t EntryPoint) {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::get_btn_QuitToTItle() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Quit_Confirm.UI_LoadableScreenWidget_Quit_Confirm_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::BndEvt__btn_QuitConfirm_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::BndEvt__btn_QuitToTItle_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm::UI_LoadableScreenWidget_Quit_Confirm_C::Construct() {
    return;
}
