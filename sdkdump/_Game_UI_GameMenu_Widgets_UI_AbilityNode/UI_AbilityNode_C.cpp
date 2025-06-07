#include "..\FUObjectArray.hpp"
#include "UI_AbilityNode_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
bool _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_HasUpgradeFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x311 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_PulseLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_SecondaryInput() {
    return (void*)((uintptr_t)this + 0x310);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_AbilityIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Selector() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Backing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_FocusedIcon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Pulse() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_Engine::Texture2D*& _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x290);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Name() {
    return (void*)((uintptr_t)this + 0x2a0);
}
bool _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_HasUnlockFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_Description() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::set_HasUnlockFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_CalAbility() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d1 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::set_CalAbility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_PrimaryInput() {
    return (void*)((uintptr_t)this + 0x2d2);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_DefaultColor() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_FocusedColor() {
    return (void*)((uintptr_t)this + 0x2e4);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_AbilityID() {
    return (void*)((uintptr_t)this + 0x2f4);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_CombatTip() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::set_HasUpgradeFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x311 + 0);
    *(uint8_t*)((uintptr_t)this + 0x311 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::get_UpgradeTip() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Widgets/UI_AbilityNode.UI_AbilityNode_C");
    return result;
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::UpdateFocusState(bool Focused) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::UpdateAbilityStatus() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::OnFocused0() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::OnUnfocused0() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C::ExecuteUbergraph_UI_AbilityNode(int32_t EntryPoint) {
    return;
}
