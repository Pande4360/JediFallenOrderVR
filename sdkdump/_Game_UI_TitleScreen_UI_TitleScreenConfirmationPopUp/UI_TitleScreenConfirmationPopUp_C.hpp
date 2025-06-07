#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp {
#pragma pack(push, 1)
struct UI_TitleScreenConfirmationPopUp_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_BorderLoop();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::HorizontalBox*& get_AcceptButtonLayout();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_AcceptMenuButton();
    _Script_UMG::HorizontalBox*& get_BackButtonLayout();
    _Script_UMG::Border*& get_Background();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_BackMenuButton();
    _Script_UMG::TextBlock*& get_BodyText();
    _Script_UMG::Image*& get_Border();
    _Script_UMG::HorizontalBox*& get_ButtonBox();
    _Script_UMG::TextBlock*& get_TitleText();
    void* get_TitleTextResult();
    void* get_BodyResultText();
    void* get_Input_Action();
    void* get_E_Continue();
    static _Script_CoreUObject::Class* static_class();
    void OnContinue(void* NavName, bool& Consumed);
    void Dismiss();
    void UpdateConfirmation(void* TitleText, void* BodyText, void* ConfirmationAction);
    void Construct();
    void OnWindowOpened0();
    void ExecuteUbergraph_UI_TitleScreenConfirmationPopUp(int32_t EntryPoint);
    void E_Continue__DelegateSignature();
}; // Size: 0x6b0
#pragma pack(pop)
}
