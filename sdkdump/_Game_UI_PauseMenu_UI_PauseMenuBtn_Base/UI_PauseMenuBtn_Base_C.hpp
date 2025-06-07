#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Base {
#pragma pack(push, 1)
struct UI_PauseMenuBtn_Base_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0xe0]; public:
    void* get_UberGraphFrame();
    void* get_ButtonText();
    void* get_LoadWidget();
    void* get_OnAccepted_BP();
    bool get_ConsumesNavInputWhileSelected();
    void set_ConsumesNavInputWhileSelected(bool value);
    bool get_CurrentlySelected();
    void set_CurrentlySelected(bool value);
    void* get_Nav_Right();
    void* get_Nav_Left();
    void* get_Nav_Up();
    void* get_Nav_Down();
    void* get_ButtonType();
    void* get_CachedPreviousButtonText();
    void* get_CancelledOut();
    void* get_OnFocusVisualsUpdated();
    void* get_Click_Left();
    void* get_Click_Right();
    static _Script_CoreUObject::Class* static_class();
    void HandleNavInput(void* Input, bool& Consumed);
    void UpdateFocusVisuals(bool& Handled);
    void OnFocused0();
    void OnUnfocused0();
    void OnAccepted0();
    void OnFocusGroupDisabled0();
    void OnFocusGroupEnabled0();
    void OnCancelOut();
    void ExecuteUbergraph_UI_PauseMenuBtn_Base(int32_t EntryPoint);
    void Click_Right__DelegateSignature();
    void Click_Left__DelegateSignature();
    void OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void CancelledOut__DelegateSignature();
    void Nav_Down__DelegateSignature();
    void Nav_Up__DelegateSignature();
    void Nav_Left__DelegateSignature();
    void Nav_Right__DelegateSignature();
    void OnAccepted_BP__DelegateSignature(_Script_RsGameTechRT::RsUiButton* Button);
}; // Size: 0x338
#pragma pack(pop)
}
