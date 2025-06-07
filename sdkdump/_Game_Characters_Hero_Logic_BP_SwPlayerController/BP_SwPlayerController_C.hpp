#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RAPLineStartedEventData.hpp"
#include "..\_Script_SwGame\R4PlayerController.hpp"
namespace _Game_UI_Death_FadeScreen {
struct FadeScreen_C;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker {
struct UI_ObjectiveMarker_C;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Game_UI_Subtitles_UI_SubtitleManager {
struct UI_SubtitleManager_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsUiRoot;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerController {
#pragma pack(push, 1)
struct BP_SwPlayerController_C : public _Script_SwGame::R4PlayerController {
    private: char pad_3710[0x60]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_SwPlayerState();
    _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker::UI_ObjectiveMarker_C*& get_ObjectiveMap();
    bool get_InitializedFromPlayerState();
    void set_InitializedFromPlayerState(bool value);
    _Game_UI_Death_FadeScreen::FadeScreen_C*& get_FadeScreen();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUD_Root();
    _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C*& get_SubtitleManager();
    void* get_PauseMenuToggled();
    bool get_CanUsePauseMenu();
    void set_CanUsePauseMenu(bool value);
    void* get_E_VerifyProfileSignedIn();
    static _Script_CoreUObject::Class* static_class();
    void OpenUITutorialPopup(int32_t ZOrder, bool DeathScreen, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& Popup);
    void ShowCustomTutorial(_Script_UMG::UserWidget*& Tutorial);
    void GetBPCustomizationMenuCapture(_Script_Engine::Actor*& iCustomizationMenuCapture);
    void DestroyCustomizationMenuCapture();
    void PauseMenuInitialization();
    void PauseMenuCleanup();
    void TogglePauseMenu();
    _Script_RsGameTechRT::RsUiRoot* GetHudRoot();
    void ShowUI();
    void HideUI();
    void SetupUI();
    void UserConstructionScript();
    void InpActEvt_UI_OpenMenu_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void StartMonkeyBeamGrabTutorial();
    void StartBalanceBeamClimbTutorial();
    void StartRevengeTutorial();
    void EndRevengeTutorial();
    void StartForceMeterEmptyTutorial();
    void StartXPTutorial();
    void StartBlockBreakTutorial();
    void StartSwimBoostTutorial();
    void ReceiveBeginPlay();
    void PlayerPossesed(_Script_RsGameTechRT::RsCharacter* ControllerPlayer);
    void ShowButton0(_Script_InputCore::Key Button, bool Pulsing);
    void HideButton0();
    void Show_Grip_Input_Timer(float Duration);
    void Hide_Grip_Input_Timer();
    void RAPLineStarted(_Script_RsGameTechRT::RAPLineStartedEventData Data);
    void RAPLineInteraction(_Script_RsGameTechRT::RsConversation* Conversation, void*& Choices, int32_t ChoiceNumber);
    void RAPLineEnded(int32_t UID);
    void OnPauseChanged(bool bIsPaused);
    void OnBeginLoadWorld(void* WorldLoadType);
    void OnFinishedLoadWorld(void* WorldLoadType);
    void RAPShowCinematicSubtitle(_Script_GameplayTags::GameplayTag Speaker, void* LineContent, int32_t UID);
    void RAPHideCinematicSubtitle(int32_t UID);
    void SetUpSubtitleMgr();
    void K2_OnReset();
    void EnablePauseMenuUsage(bool Enabled);
    void ShowInteractPrompt(void* Type, void* Text);
    void HideInteractPrompt();
    void PlayerLoginChanged(int32_t ControllerId, bool bIsLoggedIn);
    void QuitToTitle();
    void SetSubtitlesVisibility(bool Visible);
    void ShowButtonBypassAutoButtonMash(_Script_InputCore::Key InputButton, bool IsPulsing);
    void ExecuteUbergraph_BP_SwPlayerController(int32_t EntryPoint);
    void E_VerifyProfileSignedIn__DelegateSignature();
    void PauseMenuToggled__DelegateSignature(bool PauseMenuOpened);
}; // Size: 0x3770
#pragma pack(pop)
}
