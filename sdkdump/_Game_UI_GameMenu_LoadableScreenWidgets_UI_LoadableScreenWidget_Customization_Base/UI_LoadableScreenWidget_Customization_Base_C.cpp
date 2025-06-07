#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics\HC_Cosmetics_C.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Customization_Base_C.hpp"
#include "..\_Game_UI_GameMenu_Widgets_UI_SwatchNode\UI_SwatchNode_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\PanelWidget.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_Engine::Actor*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_MenuCapture() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x238);
}
_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_HC_Cosmetics() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C**)((uintptr_t)this + 0x240);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_TextWidget() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_CosmeticTypeEnum() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_ButtonToEnum() {
    return (void*)((uintptr_t)this + 0x248);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_EquippedSwatch() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x2a8);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_CurrentBDBitmask() {
    return *(int32_t*)((uintptr_t)this + 0x2b0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_StartingFocusCosmetic() {
    return (void*)((uintptr_t)this + 0x2b4);
}
_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_JustUnlockedFocusSwatch() {
    return *(_Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C**)((uintptr_t)this + 0x2b8);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::get_IsDestructing() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::set_IsDestructing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Customization_Base.UI_LoadableScreenWidget_Customization_Base_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::CheckAchievement(void* SettingsName, void* Cosmetic) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::InitCosmeticTextWidget(_Script_UMG::TextBlock* Widget) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::UpdateCurrentBDCosmetic(void* SelectedCosmetic) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::CreateNewButton_OVERRIDDEN(void* CosmeticEnum, _Script_UMG::PanelWidget* ParentWidget, _Script_RsGameTechRT::RsUiButton*& CreatedButton) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::HandleButtonAccepted() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::CosmeticSelected(void* CosmeticEnum) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::ClearPreviewButtonContainer() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::HandleButtonFocused() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::CosmeticPreview(void* Cosmetic) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::ReceivedFocus0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::UpdateCosmeticText(void* Cosmetic) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::RevertCosmeticToEquipped() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::LostFocus0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::Destruct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C::ExecuteUbergraph_UI_LoadableScreenWidget_Customization_Base(int32_t EntryPoint) {
    return;
}
