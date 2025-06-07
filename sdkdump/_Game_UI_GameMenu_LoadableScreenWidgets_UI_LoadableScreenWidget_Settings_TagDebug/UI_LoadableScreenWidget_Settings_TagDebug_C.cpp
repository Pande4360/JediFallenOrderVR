#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_TagDebug_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WrapBox.hpp"
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_ButtonsToTags() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_Loading() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_LoadingPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x238);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_txt_ParentTag() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::WrapBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_WrapBox_1() {
    return *(_Script_UMG::WrapBox**)((uintptr_t)this + 0x248);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_CurrentTagStack() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::get_SelectedItemIndices() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::set_Loading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_TagDebug.UI_LoadableScreenWidget_Settings_TagDebug_C");
    return result;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::Get_LoadingPanel_Visibility_0() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::Get_LoadingPanel_ToolTipText_0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::ButtonClicked() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::OptionalConsumeBackButton0(bool& Consumed) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::ProcessTags(_Script_GameplayTags::GameplayTag ParentTag) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::HandleButtonClick(_Script_RsGameTechRT::RsUiButton* Button, bool& Handled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::DoBaseProcess() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug::UI_LoadableScreenWidget_Settings_TagDebug_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_TagDebug(int32_t EntryPoint) {
    return;
}
