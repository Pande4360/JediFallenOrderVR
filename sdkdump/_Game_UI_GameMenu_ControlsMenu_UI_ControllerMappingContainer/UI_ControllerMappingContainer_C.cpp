#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton\UI_ControllerMappingButton_C.hpp"
#include "UI_ControllerMappingContainer_C.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_PS4\UI_ControllerMappingLayout_PS4_C.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_Xbox\UI_ControllerMappingLayout_Xbox_C.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls\UI_LoadableScreenWidget_Settings_Controls_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InputActionKeyMapping.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_Xbox::UI_ControllerMappingLayout_Xbox_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_XboxLayout() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_Xbox::UI_ControllerMappingLayout_Xbox_C**)((uintptr_t)this + 0x220);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::ExecuteUbergraph_UI_ControllerMappingContainer(int32_t EntryPoint) {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_MainCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x210);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_IsInputSwapMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::SetControllerImage() {
    return;
}
_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_PS4::UI_ControllerMappingLayout_PS4_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_PS4Layout() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_PS4::UI_ControllerMappingLayout_PS4_C**)((uintptr_t)this + 0x218);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_ActionNameButtonMap() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::SetInputSwapMode(bool IsSwapMode) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::set_IsInputSwapMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_ButtonLayoutMap() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_LayoutButtonArray() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_SwapModeTempButton() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C**)((uintptr_t)this + 0x2e0);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_SwapModeSourceButton() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C**)((uintptr_t)this + 0x2e8);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_SwapModeTargetButton() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C**)((uintptr_t)this + 0x2f0);
}
_Script_RsGameTechRT::RsUiWindow*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_Parent_UIWindow_Ref() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x2f8);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_EmptyActionMappingsArray() {
    return (void*)((uintptr_t)this + 0x300);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::RemappingScreenFocus() {
    return;
}
_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::get_LoadableScreenWidgetRef() {
    return *(_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C**)((uintptr_t)this + 0x310);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/ControlsMenu/UI_ControllerMappingContainer.UI_ControllerMappingContainer_C");
    return result;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::RebuildInputBindings() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::IsSameButtonSelected(void* TargetName) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::ResetControlsToDefault() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::DisableButtonFocus() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::RemapActionInput(void* Action, _Script_Engine::InputActionKeyMapping Key) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::UpdateControllerButtonVisuals() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::SwapInputActions(void* Actions) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::Construct0() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::OnEnterSwapMode(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C* ButtonWidget) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::Destruct0() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C::RefreshRemapButtons() {
    return;
}
