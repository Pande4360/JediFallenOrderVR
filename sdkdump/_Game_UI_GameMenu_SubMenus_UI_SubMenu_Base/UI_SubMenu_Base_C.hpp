#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base {
#pragma pack(push, 1)
struct UI_SubMenu_Base_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x70]; public:
    void* get_UberGraphFrame();
    void* get_HiddenAncestorURLs();
    void* get_ShownAncestorURLs();
    void* get_ClaimFocusAncestors();
    _Script_UMG::PanelWidget*& get_RootPanel();
    void* get_FocusGroupNumber();
    _Script_RsGameTechRT::RsUiWindow*& get_ParentUIWindow();
    _Script_UMG::UserWidget*& get_DynamicContentWidget();
    bool get_HasContent_Internal();
    void set_HasContent_Internal(bool value);
    void* get_CurrentURL();
    bool get_SubmenuFocused();
    void set_SubmenuFocused(bool value);
    bool get_HaveUnread();
    void set_HaveUnread(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL);
    void UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void GetSubmenuActiveButton(_Script_RsGameTechRT::RsUiButton*& Result, int32_t& Index);
    void RefreshButtonsUnreadState(bool UseParentTag, bool& WereUnread);
    void TryClaimingFocus();
    void TryMoveFocusToAdjacentButton(void* Command, bool PermitWrapping, bool& Success);
    void GetSubMenuFocusedButton(_Script_RsGameTechRT::RsUiButton*& Result, int32_t& Index);
    void HasContent(bool& Result);
    void SetDynamicContentWidget(_Script_UMG::UserWidget* NewWidget);
    void UpdateElementsWithMenuFocus();
    void UpdateSubMenuFocus(bool Focused, bool& Result);
    void UpdateNavigationMovement(void* Direction, bool& Handled);
    void InitializeUIElements();
    void InitializeRootWidget(_Script_UMG::PanelWidget* NewRoot);
    void UpdateVisibility(bool Visible);
    void ReceivedFocus();
    void LostFocus();
    void Construct0();
    void ExecuteUbergraph_UI_SubMenu_Base(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
