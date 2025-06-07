#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton {
struct UI_ControllerMappingButton_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_PS4 {
#pragma pack(push, 1)
struct UI_ControllerMappingLayout_PS4_C : public _Script_UMG::UserWidget {
    private: char pad_208[0xa8]; public:
    void* get_UberGraphFrame();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_Back_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_DPad_Down_btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_DPad_Left_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_DPad_Right_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_DPad_Up_Btn();
    _Script_UMG::Image*& get_DroidInteractLine();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_L3_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_LB_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_LT_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_Pad_Down_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_Pad_Left_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_Pad_Right_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_Pad_Up_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_R3_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_RB_Btn();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_RT_Btn();
    _Script_UMG::Image*& get_SaberRightLine();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_StartButton();
    void* get_LayoutButtonArray();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_ControllerMappingLayout_PS4(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
