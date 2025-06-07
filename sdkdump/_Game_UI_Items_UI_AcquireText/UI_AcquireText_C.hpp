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
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Items_UI_AcquireText {
#pragma pack(push, 1)
struct UI_AcquireText_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x88]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeInIcon();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_86();
    _Script_UMG::Image*& get_Image_104();
    _Script_UMG::Image*& get_Img_Button();
    _Script_UMG::Image*& get_linedbackplate();
    _Script_UMG::TextBlock*& get_Secondary();
    _Script_UMG::TextBlock*& get_Title();
    _Script_UMG::Image*& get_transparentbackground();
    void* get_SecondaryText();
    void* get_TitleText();
    void* get_LVL_Resumed();
    static _Script_CoreUObject::Class* static_class();
    void SetAcquireTextFields(void* TitleText, void* SecondaryText);
    void* GetText_1();
    void* GetText_0();
    void LVL_PauseAndWaitForAcceptInput(void* Title, void* Secondary);
    void Resume(void* ActionName);
    void Construct();
    void ExecuteUbergraph_UI_AcquireText(int32_t EntryPoint);
    void LVL_Resumed__DelegateSignature();
}; // Size: 0x690
#pragma pack(pop)
}
