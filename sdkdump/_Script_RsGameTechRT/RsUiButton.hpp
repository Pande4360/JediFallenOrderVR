#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsUiButton : public _Script_UMG::UserWidget {
    private: char pad_208[0x50]; public:
    void* get_OnAcceptedEvent();
    void* get_OnFocusedEvent();
    void* get_OnUnfocusedEvent();
    bool get_bStartFocused();
    void set_bStartFocused(bool value);
    void* get_FocusGroup();
    float& get_AcceptHoldTime();
    float& get_AcceptHoldTimeMinVisualPercent();
    bool get_bFocusOnMouseHover();
    void set_bFocusOnMouseHover(bool value);
    bool get_bAcceptOnMouseClick();
    void set_bAcceptOnMouseClick(bool value);
    _Script_RsGameTechRT::RsUiWindow*& get_ContainingUiWindow();
    _Script_UMG::ScrollBox*& get_ContainingScrollBox();
    static _Script_CoreUObject::Class* static_class();
    void SetFocusGroup(void* InFocusGroup);
    void SetFocused(bool bFocusDesired);
    void OnUnfocused();
    void OnOwningWindowFocusGroupStatusChanged(void* FocusGroupChanged);
    void OnOwningWindowFocusChanged(_Script_RsGameTechRT::RsUiButton* NewFocusedButton);
    void OnFocusGroupEnabled();
    void OnFocusGroupDisabled();
    void OnFocused();
    void OnAccepted();
    bool IsFocusGroupEnabled();
    bool IsFocused();
    void* GetFocusGroup();
    _Script_RsGameTechRT::RsUiWindow* GetContainingUiWindow();
    float GetAcceptHoldTimeMinVisualPercent();
    float GetAcceptHoldTime();
    float GetAcceptHoldProgressPercent();
}; // Size: 0x258
#pragma pack(pop)
}
