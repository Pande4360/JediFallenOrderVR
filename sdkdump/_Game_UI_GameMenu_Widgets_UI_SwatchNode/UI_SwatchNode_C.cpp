#include "..\FUObjectArray.hpp"
#include "UI_SwatchNode_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_SelectedLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_PulseLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Pulse() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Backing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_RetainerBox_2() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x288);
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::LVL_FocusButton() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_DropShadow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_SelectedFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::OnAccepted0() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Selector() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::ExecuteUbergraph_UI_SwatchNode(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::OnFocusGroupEnabled0() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_SwatchIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_FocusedIcon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2b0);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Name() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Description() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_FocusedColor() {
    return (void*)((uintptr_t)this + 0x2fc);
}
bool _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_HasUnlockFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::set_HasUnlockFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_CalAbility() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 1 != 0;
}
bool _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Equipped() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::set_CalAbility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_FrameColor_Equipped() {
    return (void*)((uintptr_t)this + 0x31c);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_InputButton() {
    return (void*)((uintptr_t)this + 0x2ea);
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::Construct() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::UpdateFocusState() {
    return;
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_DefaultColor() {
    return (void*)((uintptr_t)this + 0x2ec);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Cosmetic() {
    return (void*)((uintptr_t)this + 0x30c);
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::OnLoaded_1E283F2A45D70CACE1877FBA3686AC70(_Script_CoreUObject::Object* Loaded) {
    return;
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_SwatchTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x310);
}
bool _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_IsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x33c + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::set_Equipped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_Focused() {
    return (*(uint8_t*)((uintptr_t)this + 0x319 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::set_Focused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x319 + 0);
    *(uint8_t*)((uintptr_t)this + 0x319 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::get_FrameColor_Default() {
    return (void*)((uintptr_t)this + 0x32c);
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::set_IsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x33c + 0);
    *(uint8_t*)((uintptr_t)this + 0x33c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Widgets/UI_SwatchNode.UI_SwatchNode_C");
    return result;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::UpdateEquippedState(bool NewEquipped) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::OnFocused0() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::LVL_UnfocusButton() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::OnUnfocused0() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::UpdateSwatchTexture(_Script_Engine::Texture2D* Swatch) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::ShowLockedState() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::AsyncLoadTexture(void* TextureSoftRef) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C::OnFocusGroupDisabled0() {
    return;
}
