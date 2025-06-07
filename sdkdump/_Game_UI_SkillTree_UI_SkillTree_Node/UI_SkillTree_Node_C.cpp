#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_SkillTree_UI_SkillTree_Main\UI_SkillTree_Main_C.hpp"
#include "UI_SkillTree_Node_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillPurchaseGlow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_OnTutorialPurchase() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Inner() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillAvailableAnim3() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_NewSkillAvailable() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_OnLoad() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Clr_Unavailable() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillAvailableAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_IsGameMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x529 + 0)) & 1 != 0;
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_OnSkillPurchased() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x290);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillPurchaseFailed() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_DefaultBacking() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_MediaAssets::MediaSource*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillVideo() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x4f0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Focus() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Img_SkillIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::PlayOnLoad() {
    return;
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_LearnedBacking() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_LockIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Mid() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::RetainerBox*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Overlay*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Ripple() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2d8);
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_FirstTimeHasUnlockFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillAvailable() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillAvailableBacking() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Overlay*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillNode() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillPurchaseRing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x300);
}
int32_t& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillID() {
    return *(int32_t*)((uintptr_t)this + 0x308);
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_UsesForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x510 + 0);
    *(uint8_t*)((uintptr_t)this + 0x510 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillIcon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x310);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillName() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_CachedTableRow() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillDesc() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Clr_Learned() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Clr_Available() {
    return (void*)((uintptr_t)this + 0x358);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_IsSkillPurchased() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_IsSkillPurchased(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_FanfareDesc() {
    return (void*)((uintptr_t)this + 0x530);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_IsPrerequisiteMet() {
    return (*(uint8_t*)((uintptr_t)this + 0x379 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_IsPrerequisiteMet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x379 + 0);
    *(uint8_t*)((uintptr_t)this + 0x379 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillPointsRequired() {
    return *(int32_t*)((uintptr_t)this + 0x37c);
}
int32_t& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_CurrentSkillPoints() {
    return *(int32_t*)((uintptr_t)this + 0x380);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_UpgradeFlag() {
    return (void*)((uintptr_t)this + 0x384);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Focused() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Unfocused() {
    return (void*)((uintptr_t)this + 0x398);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_IsAvailable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_IsAvailable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_ST_SkillRow() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillType() {
    return (void*)((uintptr_t)this + 0x438);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_HasUnlockFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x439 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_HasUnlockFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x439 + 0);
    *(uint8_t*)((uintptr_t)this + 0x439 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c8 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_UI_Menu_State() {
    return (void*)((uintptr_t)this + 0x4d0);
}
_Script_Engine::Texture2D*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_LearnedSkillIcon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x4d8);
}
_Script_MediaAssets::MediaPlayer*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_AbilityVideo() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x4e0);
}
_Script_MediaAssets::MediaPlayer*& _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SkillMediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x4e8);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_PrimaryInput() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Branches() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_SecondaryInput() {
    return (void*)((uintptr_t)this + 0x4f9);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_UsesForce() {
    return (*(uint8_t*)((uintptr_t)this + 0x510 + 0)) & 1 != 0;
}
void* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_Decals() {
    return (void*)((uintptr_t)this + 0x518);
}
bool _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::get_FirstTimeHasUnlockFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::set_IsGameMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x529 + 0);
    *(uint8_t*)((uintptr_t)this + 0x529 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/SkillTree/UI_SkillTree_Node.UI_SkillTree_Node_C");
    return result;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::GetSkillTreeMain(_Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C*& UISkillTreeMain) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::PlaySkillPurchaseAnimation() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::GetCurrentSkillPoints(int32_t& SkillPoints) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Construct() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Set_Available_State() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Set_Locked_State() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Set_Unavailable_State() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Set_Learned_State() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::HandleSkillStates() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::OnAccepted0() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::OnFocused0() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::OnUnfocused0() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Refresh() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::Audio_Skill_Purchased() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::PlayOnTutorialPurchase() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::PlayOnFirstUnlock(void* Ability) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C::ExecuteUbergraph_UI_SkillTree_Node(int32_t EntryPoint) {
    return;
}
