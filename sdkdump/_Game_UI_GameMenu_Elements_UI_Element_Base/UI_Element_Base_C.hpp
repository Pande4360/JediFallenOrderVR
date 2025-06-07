#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base {
struct UI_SubMenu_Base_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Elements_UI_Element_Base {
#pragma pack(push, 1)
struct UI_Element_Base_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0x68]; public:
    void* get_UberGraphFrame();
    void* get_UnlockVisiblityTag();
    void* get_UnlockVisibilityLoadout();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& get_ParentSubMenu();
    void* get_RequestedURL();
    bool get_ParentSubMenuHasFocus();
    void set_ParentSubMenuHasFocus(bool value);
    bool get_ElementFocusState();
    void set_ElementFocusState(bool value);
    void* get_NavigationOnAccept();
    void* get_WidgetToLoad();
    bool get_LoadableWidgetOnClickNotFocus();
    void set_LoadableWidgetOnClickNotFocus(bool value);
    void* get_LoadedWidgetFocusGroup();
    bool get_Unread();
    void set_Unread(bool value);
    bool get_DoUnreadBadgeOnInstance();
    void set_DoUnreadBadgeOnInstance(bool value);
    bool get_ConsoleOnlyElement();
    void set_ConsoleOnlyElement(bool value);
    bool get_PCOnlyElement();
    void set_PCOnlyElement(bool value);
    void* get_OnCallAcceptedEvent();
    bool get_ElementActiveState();
    void set_ElementActiveState(bool value);
    void* get_LastUpdateURL();
    static _Script_CoreUObject::Class* static_class();
    void UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL);
    void UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void UpdateUnreadState(bool Unread);
    void UI_OnUnfocused(bool& Result);
    void UI_UpdateFocusState(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive);
    void UpdateElementVisibility(bool& Result);
    void OnRefresh(bool& Result);
    void Construct_Init(bool& Result);
    void Preconstruct_Init(bool& Result);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnFocused0();
    void OnUnfocused0();
    void OnAccepted0();
    void CallAcceptedEvent();
    void ExecuteUbergraph_UI_Element_Base(int32_t EntryPoint);
    void OnCallAcceptedEvent__DelegateSignature(_Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C* ElementBase);
}; // Size: 0x2c0
#pragma pack(pop)
}
