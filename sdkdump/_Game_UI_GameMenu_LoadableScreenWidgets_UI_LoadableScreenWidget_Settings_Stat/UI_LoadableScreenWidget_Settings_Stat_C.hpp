#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
struct UI_PauseMenuToggle_C;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Stat {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Stat_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x30]; public:
    void* get_UberGraphFrame0();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleFPS();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleLevels();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleUnit();
    _Script_UMG::VerticalBox*& get_CheatButtonVerticalBox();
    bool get_LoadingEnemy();
    void set_LoadingEnemy(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void BndEvt__btnToggleNoHUD_K2Node_ComponentBoundEvent_239_RsButtonEvent__DelegateSignature();
    void BndEvt__btnToggleMaxForce_K2Node_ComponentBoundEvent_120_RsButtonEvent__DelegateSignature();
    void BndEvt__btnToggleSlomo_K2Node_ComponentBoundEvent_196_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Stat(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
