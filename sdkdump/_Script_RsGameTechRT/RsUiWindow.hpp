#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_RsGameTechRT {
struct RsUiRoot;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsUiWindow : public _Script_UMG::UserWidget {
    private: char pad_208[0x400]; public:
    void* get_OnAcceptedEvent();
    void* get_OnFocusChangedEvent();
    void* get_OnFocusGroupStateChanged();
    bool get_bPauseGameWhileOpen();
    void set_bPauseGameWhileOpen(bool value);
    bool get_bDisableGameInput();
    void set_bDisableGameInput(bool value);
    bool get_bDisableInputToOtherWindows();
    void set_bDisableInputToOtherWindows(bool value);
    bool get_bConsumeInput();
    void set_bConsumeInput(bool value);
    bool get_bCloseOnCancel();
    void set_bCloseOnCancel(bool value);
    bool get_bDestroyOnClose();
    void set_bDestroyOnClose(bool value);
    bool get_bGarbageCollectOnClose();
    void set_bGarbageCollectOnClose(bool value);
    bool get_bRegisterForAccept();
    void set_bRegisterForAccept(bool value);
    bool get_bShowMouseCursor();
    void set_bShowMouseCursor(bool value);
    void* get_FocusGroupToAccept();
    float& get_HeldInputRetriggerDelay();
    float& get_HeldInputRepeatTime();
    float& get_MinTimeBetweenNavigation();
    void* get_NavigationInputs();
    bool get_bAllowRightStickUnfocusedScrolling();
    void set_bAllowRightStickUnfocusedScrolling(bool value);
    bool get_bUseNonGridNavigation();
    void set_bUseNonGridNavigation(bool value);
    bool get_bR4DlcDisableInputImmediately();
    void set_bR4DlcDisableInputImmediately(bool value);
    float& get_NonGridNavMaxAngleDegrees();
    void* get_StartingDisabledFocusGroups();
    bool get_bPersistThroughLevelReload();
    void set_bPersistThroughLevelReload(bool value);
    float& get_ScrollingSpeed();
    void* get_ActionDirections();
    void* get_ActionNavigationInputType();
    void* get_DynamicInputActionCallbacks();
    void* get_DynamicInputConditionalActionDelegates();
    void* get_HeldInputActions();
    void* get_FocusedButtons();
    void* get_ChildButtons();
    _Script_RsGameTechRT::RsUiRoot*& get_OwningRoot();
    static _Script_CoreUObject::Class* static_class();
    bool TryUnfocusedScrollingNavigation(void* Direction);
    bool TryNavigation(void* Direction, void* FocusGroup, bool bAllowUnfocusedScrolling);
    void SetShowMouseCursor(bool bNewShowMouseCursor);
    void SetFocusGroupToAccept(void* FocusGroup);
    void SetFocusGroupDisabled(void* FocusGroup, bool bDisabled);
    void SetFocusedButton(_Script_RsGameTechRT::RsUiButton* ButtonToFocus);
    void SetDisableGameInput(bool bDisablesGameInput);
    void SetConsumeInput(bool bNewConsumeInput);
    void ResetFocusForGroup(void* FocusGroup);
    void ResetFocus();
    void RequestUnpauseGame();
    void RequestPauseGame();
    void PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options);
    void OnWindowOpened();
    void OnWindowClosed();
    void OnFocusChanged(_Script_RsGameTechRT::RsUiButton* NewFocusedButton);
    void OnActionReleased(void*& ActionName, void* ActionType);
    void OnActionPressed(void*& ActionName, void* ActionType);
    void OnAccepted(_Script_RsGameTechRT::RsUiButton* AcceptedButton);
    bool IsInputEnabled();
    bool IsInputActionPressed(void* ActionName);
    bool IsFocusGroupDisabled(void* FocusGroup);
    bool IsFocused(_Script_RsGameTechRT::RsUiButton* Button);
    float GetInputActionPressElapsedTime(void* ActionName);
    void* GetFocusGroupToAccept();
    _Script_RsGameTechRT::RsUiButton* GetFocusedButton(void* FocusGroup, bool bClickedButtonIfSet);
    float GetDynamicInputHoldProgressPercent(void* ActionName);
    bool GetConsumeInput();
    void* GetChildButtons();
    float GetAcceptHoldTime();
    float GetAcceptHoldProgressPercent();
    void EnableInput();
    void DisableInput();
    void CloseWindow();
    void AddDynamicInputConditionalAction(void* ActionName, void*& OnPressCallback, bool bRepeatWhenHeld);
    void AddDynamicInputAction(void* ActionName, void*& OnPressCallback, bool bRepeatWhenHeld);
    void AddDynamicHeldInputAction(void* ActionName, void*& OnPressCallback, float RequiredHoldDuration, float HoldTimeMinVisualPercent);
}; // Size: 0x608
#pragma pack(pop)
}
