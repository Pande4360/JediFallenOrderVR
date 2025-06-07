#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight {
struct UI_Button_LeftRight_C;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile {
struct UI_Element_CarouselTile_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile {
#pragma pack(push, 1)
struct UI_SubMenu_CarouselTile_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x78]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::CanvasPanel*& get_ButtonBox();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_ButtonLeft();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_ButtonRight();
    _Script_UMG::ScrollBox*& get_CarouselScrollingHorizontalContents();
    _Script_UMG::Image*& get_Overlay();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::CanvasPanel*& get_Root();
    _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& get_UI_Element_CarouselTile();
    _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& get_UI_Element_CarouselTile_0();
    _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& get_UI_Element_CarouselTile_1();
    void* get_CurrentCarouselParentURL();
    int32_t& get_CurrentFocusedIndex();
    void* get_PaddingResize();
    static _Script_CoreUObject::Class* static_class();
    void UpdateMouseButtonVis();
    void GetFirstOrderedChild(_Script_GameplayTags::GameplayTag ParentTag, _Script_GameplayTags::GameplayTag& FirstChildTag);
    void FindAndScrollToButton(_Script_GameplayTags::GameplayTag ButtonTargetParentTag);
    void UpdateNavigationMovement0(void* Direction, bool& Handled);
    void UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void Construct();
    void UpdateVisibility0(bool Visible);
    void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_SubMenu_CarouselTile(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
}
