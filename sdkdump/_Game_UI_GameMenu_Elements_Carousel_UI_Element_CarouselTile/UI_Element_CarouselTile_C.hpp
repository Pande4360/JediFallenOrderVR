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
struct Border;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile {
#pragma pack(push, 1)
struct UI_Element_CarouselTile_C : public _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C {
    private: char pad_2c0[0xf8]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_Highlight();
    _Script_UMG::Image*& get_BookCoverBorder();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Img_UNREADMarker();
    _Script_UMG::Overlay*& get_NumberofEntries();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    _Script_UMG::TextBlock*& get_TotalEntries();
    _Script_UMG::TextBlock*& get_UnlockedEntries();
    _Script_UMG::Border*& get_Widget_Border();
    _Script_UMG::TextBlock*& get_Widget_CarouselText();
    void* get_TileColor();
    void* get_TileFocusedColor();
    void* get_TileVisitedColor();
    void* get_CurrentURL();
    void* get_LockedBookCover();
    bool get_IsLocked();
    void set_IsLocked(bool value);
    bool get_NewVar_0_0();
    void set_NewVar_0_0(bool value);
    void* get_NumberColorOn();
    void* get_NumberColorOff();
    static _Script_CoreUObject::Class* static_class();
    void SetNumEntriesText();
    void Preconstruct_Init0(bool& Result);
    void UI_UpdateFocusState0(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive);
    void SetCarouselText(void* newText);
    void OnLoaded_7A0A89114782BA83744BEF952F6E2C5E(_Script_CoreUObject::Object* Loaded);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void UpdateUnreadState0(bool Unread);
    void LoadFeaturedImage(void* Texture);
    void CallAcceptedEvent0();
    void OnFocused();
    void ExecuteUbergraph_UI_Element_CarouselTile(int32_t EntryPoint);
}; // Size: 0x3b8
#pragma pack(pop)
}
