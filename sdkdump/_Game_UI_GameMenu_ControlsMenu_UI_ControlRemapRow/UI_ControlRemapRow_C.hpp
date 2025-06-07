#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_ControlsMenu_Struct_InputRemap\Struct_InputRemap.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn {
struct UI_ControlRemapBtn_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow {
#pragma pack(push, 1)
struct UI_ControlRemapRow_C : public _Script_UMG::UserWidget {
    private: char pad_208[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_ActionName();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& get_Gamepad();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& get_PC();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    void* get_Action();
    void* get_RemapData();
    void* get_StartInputRemapDelegate();
    bool get_CanFocusPC();
    void set_CanFocusPC(bool value);
    bool get_CanFocusGamepad();
    void set_CanFocusGamepad(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Initialize(void* Action, _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap RemapData);
    void RefreshButtons();
    void BndEvt__Gamepad_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void BndEvt__PC_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void BndEvt__Gamepad_K2Node_ComponentBoundEvent_2_RsButtonEvent__DelegateSignature();
    void BndEvt__PC_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ControlRemapRow(int32_t EntryPoint);
    void StartInputRemapDelegate__DelegateSignature();
}; // Size: 0x2b0
#pragma pack(pop)
}
