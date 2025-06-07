#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\InputActionKeyMapping.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_PS4 {
struct UI_ControllerMappingLayout_PS4_C;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls {
struct UI_LoadableScreenWidget_Settings_Controls_C;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_Xbox {
struct UI_ControllerMappingLayout_Xbox_C;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton {
struct UI_ControllerMappingButton_C;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer {
#pragma pack(push, 1)
struct UI_ControllerMappingContainer_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x110]; public:
    void* get_UberGraphFrame();
    _Script_UMG::CanvasPanel*& get_MainCanvas();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_PS4::UI_ControllerMappingLayout_PS4_C*& get_PS4Layout();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingLayout_Xbox::UI_ControllerMappingLayout_Xbox_C*& get_XboxLayout();
    void* get_ActionNameButtonMap();
    void* get_ButtonLayoutMap();
    bool get_IsInputSwapMode();
    void set_IsInputSwapMode(bool value);
    void* get_LayoutButtonArray();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_SwapModeTempButton();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_SwapModeSourceButton();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C*& get_SwapModeTargetButton();
    _Script_RsGameTechRT::RsUiWindow*& get_Parent_UIWindow_Ref();
    void* get_EmptyActionMappingsArray();
    _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C*& get_LoadableScreenWidgetRef();
    static _Script_CoreUObject::Class* static_class();
    void RebuildInputBindings();
    void IsSameButtonSelected(void* TargetName);
    void ResetControlsToDefault();
    void SetControllerImage();
    void SetInputSwapMode(bool IsSwapMode);
    void DisableButtonFocus();
    void RemappingScreenFocus();
    void RemapActionInput(void* Action, _Script_Engine::InputActionKeyMapping Key);
    void UpdateControllerButtonVisuals();
    void SwapInputActions(void* Actions);
    void Construct0();
    void OnEnterSwapMode(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C* ButtonWidget);
    void Destruct0();
    void RefreshRemapButtons();
    void ExecuteUbergraph_UI_ControllerMappingContainer(int32_t EntryPoint);
}; // Size: 0x318
#pragma pack(pop)
}
