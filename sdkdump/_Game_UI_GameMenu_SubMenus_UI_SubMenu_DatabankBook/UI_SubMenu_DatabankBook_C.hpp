#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_Elements_Carousel_UI_Element_DataBankEntry {
struct UI_Element_DataBankEntry_C;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight {
struct UI_Button_LeftRight_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2 {
struct UI_StarChartAnim2_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_UI_GameMenu_Elements_UI_Element_Base {
struct UI_Element_Base_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook {
#pragma pack(push, 1)
struct UI_SubMenu_DatabankBook_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0xa0]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Image*& get_BookCover();
    _Script_UMG::TextBlock*& get_BookName();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_ButtonLeft();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_ButtonRight();
    _Script_UMG::Image*& get_Overlay();
    _Script_UMG::RetainerBox*& get_RetainerBox_1();
    _Script_UMG::CanvasPanel*& get_Root();
    _Script_UMG::ScrollBox*& get_ScrollingHorizontalContents();
    _Script_UMG::TextBlock*& get_TotalEntries();
    _Game_UI_GameMenu_Elements_Carousel_UI_Element_DataBankEntry::UI_Element_DataBankEntry_C*& get_UI_Element_DataBankEntry();
    _Script_UMG::TextBlock*& get_UnlockedEntries();
    void* get_CurrentCarouselParentURL();
    int32_t& get_CurrentFocusedIndex();
    _Script_RsGameTechRT::RsConversation*& get_Conversation();
    int32_t& get_LineIndex();
    _Script_DialoguePlugin::Dialogue*& get_PlayingDialogue();
    int32_t& get_Num_Unlocked();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& get_StarChartAnim2();
    static _Script_CoreUObject::Class* static_class();
    void UpdateMouseNavButtonVis();
    void FindAndScrollToButton(_Script_GameplayTags::GameplayTag ButtonTargetParentTag);
    void UpdateNavigationMovement0(void* Direction, bool& Handled);
    void UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void OnLoaded_85AD0B0744DD9501C3A28C82DBBFBDC5(_Script_CoreUObject::Object* Loaded);
    void Construct();
    void OnDatabankEntryAccepted(_Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C* ElementBase);
    void Destruct();
    void LoadFeaturedImage(void* BookCoverImage);
    void ReceivedFocus0();
    void LostFocus0();
    void UpdateVisibility0(bool Visible);
    void MemoryFinished(_Script_RsGameTechRT::RsConversation* Conversation);
    void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_SubMenu_DatabankBook(int32_t EntryPoint);
}; // Size: 0x318
#pragma pack(pop)
}
