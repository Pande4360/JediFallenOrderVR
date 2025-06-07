#include "..\FUObjectArray.hpp"
#include "BP_SwPlayerController_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "..\_Game_UI_Death_FadeScreen\FadeScreen_C.hpp"
#include "..\_Game_UI_Subtitles_UI_SubtitleManager\UI_SubtitleManager_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Game_zDoNotShip_DebugUI_UI_ObjectiveMarker\UI_ObjectiveMarker_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RAPLineStartedEventData.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsUiRoot.hpp"
#include "..\_Script_SwGame\R4PlayerController.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Game_UI_Death_FadeScreen::FadeScreen_C*& _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_FadeScreen() {
    return *(_Game_UI_Death_FadeScreen::FadeScreen_C**)((uintptr_t)this + 0x3730);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::RAPShowCinematicSubtitle(_Script_GameplayTags::GameplayTag Speaker, void* LineContent, int32_t UID) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3710);
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_SwPlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x3718);
}
_Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C*& _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_ObjectiveMap() {
    return *(_Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C**)((uintptr_t)this + 0x3720);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::set_InitializedFromPlayerState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3728 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3728 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::PlayerLoginChanged(int32_t ControllerId, bool bIsLoggedIn) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_InitializedFromPlayerState() {
    return (*(uint8_t*)((uintptr_t)this + 0x3728 + 0)) & 1 != 0;
}
_Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C*& _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_SubtitleManager() {
    return *(_Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C**)((uintptr_t)this + 0x3740);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_HUD_Root() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x3738);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_PauseMenuToggled() {
    return (void*)((uintptr_t)this + 0x3748);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::SetUpSubtitleMgr() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartRevengeTutorial() {
    return;
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_CanUsePauseMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x3758 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::set_CanUsePauseMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3758 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3758 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::get_E_VerifyProfileSignedIn() {
    return (void*)((uintptr_t)this + 0x3760);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/BP_SwPlayerController.BP_SwPlayerController_C");
    return result;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ExecuteUbergraph_BP_SwPlayerController(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::RAPHideCinematicSubtitle(int32_t UID) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::OpenUITutorialPopup(int32_t ZOrder, bool DeathScreen, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& Popup) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ShowCustomTutorial(_Script_UMG::UserWidget*& Tutorial) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartForceMeterEmptyTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::GetBPCustomizationMenuCapture(_Script_Engine::Actor*& iCustomizationMenuCapture) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ShowButtonBypassAutoButtonMash(_Script_InputCore::Key InputButton, bool IsPulsing) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::DestroyCustomizationMenuCapture() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::PauseMenuInitialization() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::PauseMenuCleanup() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::TogglePauseMenu() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::Hide_Grip_Input_Timer() {
    return;
}
_Script_RsGameTechRT::RsUiRoot* _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::GetHudRoot() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ShowUI() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::SetSubtitlesVisibility(bool Visible) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::HideUI() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::SetupUI() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::UserConstructionScript() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::OnBeginLoadWorld(void* WorldLoadType) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::InpActEvt_UI_OpenMenu_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartMonkeyBeamGrabTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartBalanceBeamClimbTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::PauseMenuToggled__DelegateSignature(bool PauseMenuOpened) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::EndRevengeTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartBlockBreakTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartXPTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::StartSwimBoostTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::PlayerPossesed(_Script_RsGameTechRT::RsCharacter* ControllerPlayer) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::E_VerifyProfileSignedIn__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ShowButton0(_Script_InputCore::Key Button, bool Pulsing) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::HideButton0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::Show_Grip_Input_Timer(float Duration) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::RAPLineStarted(_Script_RsGameTechRT::RAPLineStartedEventData Data) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::RAPLineInteraction(_Script_RsGameTechRT::RsConversation* Conversation, void*& Choices, int32_t ChoiceNumber) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::RAPLineEnded(int32_t UID) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::OnPauseChanged(bool bIsPaused) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::OnFinishedLoadWorld(void* WorldLoadType) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::K2_OnReset() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::EnablePauseMenuUsage(bool Enabled) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::ShowInteractPrompt(void* Type, void* Text) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::HideInteractPrompt() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C::QuitToTitle() {
    return;
}
