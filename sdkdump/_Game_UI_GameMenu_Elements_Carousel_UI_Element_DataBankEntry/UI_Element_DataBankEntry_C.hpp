#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_Elements_UI_Element_Base\UI_Element_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Elements_Carousel_UI_Element_DataBankEntry {
#pragma pack(push, 1)
struct UI_Element_DataBankEntry_C : public _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C {
    private: char pad_2c0[0xb8]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Border*& get_Border_2();
    _Script_UMG::Image*& get_EntryBookCover();
    _Script_UMG::TextBlock*& get_EntryDetails();
    _Script_UMG::Image*& get_EntryDivider();
    _Script_UMG::Image*& get_EntryItemBorder();
    _Script_UMG::TextBlock*& get_EntryName();
    _Script_UMG::TextBlock*& get_EntryNumber();
    _Script_UMG::Image*& get_EntryNumberFocused();
    _Script_UMG::Image*& get_FocusedEntryBorder();
    _Script_UMG::Image*& get_LockedBacking();
    _Script_UMG::Image*& get_LockedEntryDivider();
    _Script_UMG::Image*& get_LockedEntryItemBorder();
    _Script_UMG::Image*& get_LockedTopBottomOutline();
    _Script_UMG::TextBlock*& get_Period();
    _Script_UMG::RetainerBox*& get_RetainerPulseBox();
    _Script_UMG::Image*& get_TopBar();
    _Script_UMG::Image*& get_TopBottomOutline();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_0();
    void* get_CurrentURL();
    static _Script_CoreUObject::Class* static_class();
    void UpdateElementVisibility0(bool& Result);
    void UI_UpdateFocusState0(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive);
    void Construct0();
    void UpdateUnreadState0(bool Unread);
    void PreConstruct0(bool IsDesignTime);
    void OnFocused();
    void ExecuteUbergraph_UI_Element_DataBankEntry(int32_t EntryPoint);
}; // Size: 0x378
#pragma pack(pop)
}
