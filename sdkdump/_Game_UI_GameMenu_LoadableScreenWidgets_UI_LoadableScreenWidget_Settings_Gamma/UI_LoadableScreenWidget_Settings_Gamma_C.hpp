#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct Margin;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gamma {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Gamma_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x110]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_IncClickHover();
    _Script_UMG::WidgetAnimation*& get_DecClickHover();
    _Script_UMG::WidgetAnimation*& get_IncClickAnim();
    _Script_UMG::WidgetAnimation*& get_DecClickAnim();
    _Script_UMG::TextBlock*& get_AdjustTitle();
    _Script_UMG::Image*& get_Arrow();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Image*& get_BlueOutline();
    _Script_UMG::TextBlock*& get_BrightnessDesc();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnGamma();
    _Script_UMG::Image*& get_Dark();
    _Script_UMG::Button*& get_DecreaseBtn();
    _Script_UMG::Overlay*& get_GammaButton();
    _Script_UMG::Image*& get_HDRCalibrationImage();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::Button*& get_IncreaseBtn();
    _Script_UMG::Image*& get_Light();
    _Script_UMG::HorizontalBox*& get_MiddleBar();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::RetainerBox*& get_RetainerBox_1();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_UMG::Image*& get_SolidBacking();
    void* get_OldHDRMargin();
    void* get_OldMargin();
    float& get_OldBrightness();
    float& get_OldHDRBrightness();
    float& get_NewBrightness();
    float& get_NewHDRBrightness();
    static _Script_CoreUObject::Class* static_class();
    void IsUsingHDR(bool& IsUsingHDR);
    void AdjustHDRBrightness(bool Increase_);
    void* GetHDRBrightness(float& Brightness, _Script_SlateCore::Margin& Margin);
    void OptionalConsumeBackButton0(bool& Consumed);
    void SetText();
    void* GetBrightness(float& Brightness, _Script_SlateCore::Margin& Margin);
    void Adjust_Brightness(bool Increase_);
    void Construct();
    void BndEvt__UI_PauseMenuBtn_Selector_0_K2Node_ComponentBoundEvent_1_Nav_Right__DelegateSignature();
    void BndEvt__UI_PauseMenuBtn_Selector_0_K2Node_ComponentBoundEvent_2_Nav_Left__DelegateSignature();
    void BndEvt__btnGamma_K2Node_ComponentBoundEvent_2_CancelledOut__DelegateSignature();
    void BndEvt__IncreaseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DecreaseBtn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void BndEvt__DecreaseBtn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DecreaseBtn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__IncreaseBtn_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__IncreaseBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__btnGamma_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Gamma(int32_t EntryPoint);
}; // Size: 0x340
#pragma pack(pop)
}
