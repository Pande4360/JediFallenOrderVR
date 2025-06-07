#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_Struct_InputRemap\Struct_InputRemap.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn\UI_ControlRemapBtn_C.hpp"
#include "UI_ControlRemapDetector_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_InputSwapped() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_CheckKey() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::StoppedDetectingInput__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::set_ShouldIgnoreAccept(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_RemapCategory() {
    return (void*)((uintptr_t)this + 0x249);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::EscapeKeyPressed() {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_MasterList() {
    return (void*)((uintptr_t)this + 0x210);
}
_Script_SwGame::SWGameUserSettings*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x220);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::RemapAction(void* Action, bool isController, _Script_InputCore::Key NewKey) {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_ChosenAction() {
    return (void*)((uintptr_t)this + 0x228);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_CurrentIsController() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::set_CurrentIsController(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::ExecuteUbergraph_UI_ControlRemapDetector(int32_t EntryPoint) {
    return;
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_IsCheckingHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x24a + 0)) & 1 != 0;
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::IsSameInputType(bool IsGamepad, _Script_InputCore::Key& Key) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::set_IsCheckingHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24a + 0);
    *(uint8_t*)((uintptr_t)this + 0x24a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_OriginalKey() {
    return (void*)((uintptr_t)this + 0x2c8);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_IsCheckingInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x24b + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::set_IsCheckingInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24b + 0);
    *(uint8_t*)((uintptr_t)this + 0x24b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_HoldTime() {
    return *(float*)((uintptr_t)this + 0x24c);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::Construct0() {
    return;
}
float& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_HoldThreshhold() {
    return *(float*)((uintptr_t)this + 0x250);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_LandExcl() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_ActionData() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_ClimbingExcl() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_WaterExcl() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_CannotRemapMessage() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_MapExcl() {
    return (void*)((uintptr_t)this + 0x288);
}
float& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_HoldPercentage() {
    return *(float*)((uintptr_t)this + 0x298);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_InputRemapBtn() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C**)((uintptr_t)this + 0x2b0);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_StoppedDetectingInput() {
    return (void*)((uintptr_t)this + 0x2b8);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_ShouldIgnoreAccept() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_KeyUnboundFromAction() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::get_UnboundAxes() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::RemapActionAliases(void* Action, bool isController, _Script_InputCore::Key NewKey) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/ControlsMenu/UI_ControlRemapDetector.UI_ControlRemapDetector_C");
    return result;
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::KeyEqualsNone(_Script_InputCore::Key InputKey) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::KeyUnboundFromAction__DelegateSignature(_Script_InputCore::Key Key, void*& Actions) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::CheckIgnoredKeys(_Script_InputCore::Key InKey, bool& Ignore, bool& InitialAcceptIgnore, void*& IgnoredAction) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::RemapAxis(bool isController, _Script_InputCore::Key NewKey, _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap& RemapData) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::RemapActionHelper(void* Action, bool isController, _Script_InputCore::Key NewKey) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::TryUnbindKeyFromAction(void* Action, _Script_InputCore::Key NewKey, _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap& ActionRemapData, bool isController, bool& IsUnbound) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::ErrorIndexOutOfRange(int32_t inInt) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::GetExclContainingCategory(void*& ActionName, void*& Categories) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::GetExclusivityList(void* Category, void*& OutputPin) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::UnbindKeyFromAllActions(void* ActionName, _Script_InputCore::Key NewKey, bool isController) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::StartInputChecking(void* ChosenAction, _Script_InputCore::Key OriginalKey, bool CurrentIsController, _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* InputRemapBtn) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::EndCheck() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::Remap() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::CannotRemapMessage__DelegateSignature(void* IgnoredAction, _Script_InputCore::Key IgnoredKey) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C::InputSwapped__DelegateSignature() {
    return;
}
