#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_UI_MegaTutorial {
#pragma pack(push, 1)
struct UI_MegaTutorial_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x138]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade_InOut();
    _Script_UMG::Button*& get_Button_0();
    _Script_UMG::HorizontalBox*& get_ButtonPage1();
    _Script_UMG::HorizontalBox*& get_ButtonPage2();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::TextBlock*& get_InteractText();
    _Script_UMG::TextBlock*& get_InteractText2();
    _Script_RsTechRT::RsLine*& get_LeftLine();
    _Script_UMG::Image*& get_Linework();
    _Script_UMG::Image*& get_Page1_Off();
    _Script_UMG::Image*& get_Page1_On();
    _Script_UMG::Image*& get_Page2_Off();
    _Script_UMG::Image*& get_Page2_On();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_UMG::Image*& get_Screenshot1();
    _Script_UMG::Image*& get_Screenshot2();
    _Script_UMG::WidgetSwitcher*& get_SwitcherPage1();
    _Script_UMG::WidgetSwitcher*& get_SwitcherPage2();
    _Script_UMG::TextBlock*& get_Text1();
    _Script_UMG::TextBlock*& get_Text2();
    _Script_UMG::TextBlock*& get_Title();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    void* get_ST_MegaTutorial();
    void* get_Dismissed();
    bool get_1_of_2();
    void set_1_of_2(bool value);
    bool get_2_of_2();
    void set_2_of_2(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TextToUpper();
    void PageTwo();
    void PageOne();
    void Initialize(void* NewParam);
    void Construct();
    void Dismiss();
    void First_Press();
    void Second_Press();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_MegaTutorial(int32_t EntryPoint);
    void Dismissed__DelegateSignature();
}; // Size: 0x740
#pragma pack(pop)
}
