#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav {
#pragma pack(push, 1)
struct UI_Button_LeftNav_C : public _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C {
    private: char pad_4e8[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_SelectedPulseLoop();
    _Script_UMG::SizeBox*& get_Button();
    _Script_UMG::Image*& get_FocusedRoundedRect();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_0();
    _Script_UMG::Image*& get_Pulse();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::Image*& get_Widget_ButtonImage();
    _Script_UMG::TextBlock*& get_Widget_ButtonText();
    static _Script_CoreUObject::Class* static_class();
    void GetPulseImg0(_Script_UMG::Image*& PulseImg);
    void GetPulseAnim0(_Script_UMG::WidgetAnimation*& PulseAnim);
    void GetFocusedRoundedRect0(_Script_UMG::Image*& FocusedRoundedRect);
    void GetRetainerBox0(_Script_UMG::RetainerBox*& RetainerBox);
    void GetButtonImage0(_Script_UMG::Image*& ButtonImage);
    void GetButtonText0(_Script_UMG::TextBlock*& ButtonText);
    void Construct();
    void UpdateUnreadState(bool Unread);
    void OnFocused();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Button_LeftNav(int32_t EntryPoint);
}; // Size: 0x530
#pragma pack(pop)
}
