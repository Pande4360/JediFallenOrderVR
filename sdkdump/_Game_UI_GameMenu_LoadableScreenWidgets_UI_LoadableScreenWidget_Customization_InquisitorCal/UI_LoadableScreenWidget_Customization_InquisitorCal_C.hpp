#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base\UI_LoadableScreenWidget_Customization_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_GameMenu_Widgets_UI_SwatchNode {
struct UI_SwatchNode_C;
}
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct WrapBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_InquisitorCal {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Customization_InquisitorCal_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C {
    private: char pad_2c8[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_SlideIn();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_swatch_InquisitorCal();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_swatch_JediCal();
    _Script_UMG::TextBlock*& get_Txt_CosmeticName();
    _Script_UMG::WrapBox*& get_WrapBox_0();
    void* get_Cosmetics();
    static _Script_CoreUObject::Class* static_class();
    void OptionalConsumeBackButton(bool& Consumed);
    void CreateNewButton_OVERRIDDEN0(void* CosmeticEnum, _Script_UMG::PanelWidget* ParentWidget, _Script_RsGameTechRT::RsUiButton*& CreatedButton);
    void CosmeticSelected0(void* CosmeticEnum);
    void CosmeticPreview0(void* Cosmetic);
    void ClearPreviewButtonContainer0();
    void ReceivedFocus();
    void Construct0();
    void BndEvt__swatch_PonchoOff_K2Node_ComponentBoundEvent_2_RsButtonEvent__DelegateSignature();
    void BndEvt__swatch_PonchoOff_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void RevertCosmeticToEquipped0();
    void SetInfoText(bool InquisitorCal);
    void BndEvt__swatch_InquisitorCal_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void BndEvt__swatch_InquisitorCal_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Customization_InquisitorCal(int32_t EntryPoint);
}; // Size: 0x308
#pragma pack(pop)
}
