#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
struct UI_PauseMenuToggle_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Quit_Confirm {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Quit_Confirm_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x28]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btn_QuitConfirm();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btn_QuitToTItle();
    _Script_UMG::Overlay*& get_QuitToDesktop();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__btn_QuitConfirm_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void BndEvt__btn_QuitToTItle_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Quit_Confirm(int32_t EntryPoint);
}; // Size: 0x258
#pragma pack(pop)
}
