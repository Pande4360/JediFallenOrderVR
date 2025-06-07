#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton {
#pragma pack(push, 1)
struct UI_ControllerMappingButton_C : public _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C {
    private: char pad_338[0x68]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::SizeBox*& get_Button();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    void* get_LayoutPositionName();
    void* get_E_OnButtonAccepted();
    void* get_CurrentButtonKey();
    void* get_CurrentActionName();
    bool get_DisableButtonFocus();
    void set_DisableButtonFocus(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnAccepted();
    void Construct();
    void ExecuteUbergraph_UI_ControllerMappingButton(int32_t EntryPoint);
    void E_OnButtonAccepted__DelegateSignature(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C* ButtonWidget);
}; // Size: 0x3a0
#pragma pack(pop)
}
