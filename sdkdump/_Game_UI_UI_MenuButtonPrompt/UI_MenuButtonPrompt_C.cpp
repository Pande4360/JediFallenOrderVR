#include "..\FUObjectArray.hpp"
#include "UI_MenuButtonPrompt_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt_Content\UI_MenuButtonPrompt_Content_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::PreConstruct(bool IsDesignTime) {
    return;
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_UI_Accept() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_Pulsing() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_HorizontalBox_0() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x270);
}
_Script_UMG::ScaleBox*& _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_Scaler() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x278);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_InputButton() {
    return (void*)((uintptr_t)this + 0x288);
}
_Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C*& _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_UI_MenuButtonPrompt_Content() {
    return *(_Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C**)((uintptr_t)this + 0x280);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_UI_Cancel() {
    return (void*)((uintptr_t)this + 0x2a8);
}
bool _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_Don_tUpdateOnConstruct() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::RemoveExtraButtons() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::set_Don_tUpdateOnConstruct(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_IsAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b1 + 0)) & 1 != 0;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::set_IsAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::UpdateScale() {
    return;
}
bool _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_IsPositiveAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b2 + 0)) & 1 != 0;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::set_IsPositiveAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_InputAction() {
    return (void*)((uintptr_t)this + 0x2b3);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_ButtonSize() {
    return (void*)((uintptr_t)this + 0x2b4);
}
int32_t& _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_ButtonType() {
    return *(int32_t*)((uintptr_t)this + 0x2b8);
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::ExecuteUbergraph_UI_MenuButtonPrompt(int32_t EntryPoint) {
    return;
}
bool _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_SkipResettingKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c4 + 0)) & 1 != 0;
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_ButtonPosition() {
    return (void*)((uintptr_t)this + 0x2bc);
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::set_SkipResettingKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_ExtraButtons() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_KeyToString() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::get_KeyToImage() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_MenuButtonPrompt.UI_MenuButtonPrompt_C");
    return result;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::KMBKeyOverride(void* Action, _Script_InputCore::Key Override) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::ShowButtonPrompt(_Script_InputCore::Key InputButton, bool IsPulsing) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::GetMovementAxisKey(bool IsVertical, bool IsPositive, _Script_InputCore::Key& Key) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::SetMKBContent(_Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C* Content, _Script_InputCore::Key InputKey) {
    return;
}
bool _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::ActionIsRightStick(void* InputPin) {
    return;
}
bool _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::ActionIsLeftStick(void* InputPin) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::SetKeyForAction() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::Construct() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::CreateNewContent(_Script_InputCore::Key InputKey) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::UpdateButton() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::DirectSetKeyUpdateButton(_Script_InputCore::Key InputButton) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::InputDeviceChanged(void* NewInputDevice) {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::HideButton() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::ShowKMBLook() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::ShowKMBMove() {
    return;
}
void _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C::UpdateInputAction(void* InputAction) {
    return;
}
