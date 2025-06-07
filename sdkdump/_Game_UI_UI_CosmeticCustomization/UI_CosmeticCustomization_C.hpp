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
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_GameMenu_Elements_UI_CustomizationBtn {
struct UI_CustomizationBtn_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct WrapBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics {
struct HC_Cosmetics_C;
}
namespace _Game_UI_GameMenu_Widgets_UI_SwatchNode {
struct UI_SwatchNode_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench {
struct BP_CustomizationWorkbench_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Game_UI_UI_CosmeticCustomization {
#pragma pack(push, 1)
struct UI_CosmeticCustomization_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x3d8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_UI();
    _Script_UMG::WidgetAnimation*& get_LoadInSwatches();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_Back();
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& get_BtnCere();
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& get_BtnColor();
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& get_BtnEmitter();
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& get_BtnMaterial();
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& get_BtnSleeve();
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C*& get_BtnSwitch();
    _Script_UMG::WrapBox*& get_CereEmittBox();
    _Script_UMG::TextBlock*& get_CereEmitter();
    _Script_UMG::Image*& get_CereSpacerDot();
    _Script_UMG::VerticalBox*& get_CereVertBox();
    _Script_UMG::TextBlock*& get_Color();
    _Script_UMG::WrapBox*& get_ColorBox();
    _Script_UMG::HorizontalBox*& get_ControlsTray();
    _Script_UMG::TextBlock*& get_Emitter();
    _Script_UMG::WrapBox*& get_EmitterBox();
    _Script_UMG::TextBlock*& get_EquippedCereEmit();
    _Script_UMG::TextBlock*& get_EquippedColor();
    _Script_UMG::TextBlock*& get_EquippedEmitter();
    _Script_UMG::TextBlock*& get_EquippedMetal();
    _Script_UMG::TextBlock*& get_EquippedSleeve();
    _Script_UMG::TextBlock*& get_EquippedSwitch();
    _Script_UMG::TextBlock*& get_FocusedCereEmit();
    _Script_UMG::TextBlock*& get_FocusedColor();
    _Script_UMG::TextBlock*& get_FocusedEmitter();
    _Script_UMG::TextBlock*& get_FocusedMetal();
    _Script_UMG::TextBlock*& get_FocusedSleeve();
    _Script_UMG::TextBlock*& get_FocusedSwitch();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_20();
    _Script_UMG::TextBlock*& get_Material();
    _Script_UMG::WrapBox*& get_MetalBox();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_NextTab();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_NodeCereEmit();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_NodeColor();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_NodeEmitter();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_NodeMetal();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_NodeSleeve();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_NodeSwitch();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PrevTab();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptHideUI();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptReturn();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptRotate();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptSelect();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PromptToggleCereHidden();
    _Script_UMG::TextBlock*& get_Rotate();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Script_RsTechRT::RsLine*& get_RsLine_4();
    _Script_RsTechRT::RsLine*& get_RsLine_8();
    _Script_RsTechRT::RsLine*& get_RsLine_10();
    _Script_RsTechRT::RsLine*& get_RsLine_12();
    _Script_UMG::TextBlock*& get_Select();
    _Script_UMG::TextBlock*& get_Sleeve();
    _Script_UMG::WrapBox*& get_SleeveBox();
    _Script_UMG::Image*& get_SpacerDot1();
    _Script_UMG::Image*& get_SpacerDot2();
    _Script_UMG::Image*& get_SpacerDot3();
    _Script_UMG::Image*& get_SpacerDot4();
    _Script_UMG::Image*& get_SpacerDot6();
    _Script_UMG::TextBlock*& get_Switch();
    _Script_UMG::WrapBox*& get_SwitchBox();
    _Script_UMG::TextBlock*& get_ToggleCereHidden();
    _Script_UMG::TextBlock*& get_ToggleUI();
    _Script_UMG::VerticalBox*& get_VerticalBox_0();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_0();
    _Script_UMG::Overlay*& get_WrapBox();
    void* get_ButtonToCosmeticEnum();
    void* get_ButtonToSaberColor();
    _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C*& get_BP_CustomizationWorkbench();
    _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& get_HC_Cosmetics();
    void* get_CurrentCosmeticPanel();
    void* get_FocusedCosmeticPanel();
    void* get_EquippedSwatches();
    bool get_IsFocusingOnPanel();
    void set_IsFocusingOnPanel(bool value);
    void* get_CosmeticDisplayName();
    void* get_EquippedSwatches_0();
    bool get_UIHidden();
    void set_UIHidden(bool value);
    float& get_HoldProgress();
    bool get_ButtonPressed();
    void set_ButtonPressed(bool value);
    bool get_Tab_FirstTime();
    void set_Tab_FirstTime(bool value);
    void* get_PrevCosmeticPanel();
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::TextBlock* GetEquippedElemFromCosmetic(void* Index);
    _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C* GetBtnFromCosmetic(void* Index);
    _Script_UMG::TextBlock* GetTextElementFromCosmetic(void* Index);
    void RefreshTopNavEquippedButtons();
    void* Get_CosmeticNameText_Text_0();
    void GetDisplayNameAndSwatchTexture(void* TopNavType, void* CosmeticEnum, void* SaberColor, bool& DataFound, void*& OutputDisplayName, void*& OutputSwatchTexture);
    void* GetText_0();
    void SetCosmetic();
    void UpdateTopNavSwitchNode(void* TopNavType, void* CosmeticEnum, void* SaberColor);
    void PopulateColorBox();
    void PopulateWrapBox(void* CosmeticTypeEnum, _Script_UMG::PanelWidget* ParentWidget, bool IsCereEmitter);
    void CreateNewButton(_Script_UMG::PanelWidget* ParentWidget, _Script_RsGameTechRT::RsUiButton*& CreatedButton);
    void AddNewSaberColorButton(void* NewSaberColor);
    void ApplyCosmetic();
    void InitializeCustomizationOptions();
    void Construct();
    void OnWindowClosed0();
    void HandleButtonFocused();
    void HandleButtonAccepted();
    void OnAcceptedTopNavButton();
    void FocusOnPanel();
    void OnCancelInput(void* ActionName);
    void FocusOnTopNav();
    void UpdatePanelButtonFocus();
    void PreConstruct(bool IsDesignTime);
    void HideUI(void* Input);
    void BndEvt__BtnCere_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnCere_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnColor_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnColor_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnEmitter_K2Node_ComponentBoundEvent_6_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnEmitter_K2Node_ComponentBoundEvent_8_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnMaterial_K2Node_ComponentBoundEvent_10_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnMaterial_K2Node_ComponentBoundEvent_11_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnSleeve_K2Node_ComponentBoundEvent_31_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnSleeve_K2Node_ComponentBoundEvent_32_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnSwitch_K2Node_ComponentBoundEvent_34_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnSwitch_K2Node_ComponentBoundEvent_35_RsButtonEvent__DelegateSignature();
    void OnWindowOpened0();
    void Tab(void* ActionName);
    void OnUnfocusedTopNavButton(void* Cosmetic);
    void OnFocusedTopNavButton(void* FocusedCosmeticPanel);
    void ToggleHideCereSwitch(void* ActionName);
    void ExecuteUbergraph_UI_CosmeticCustomization(int32_t EntryPoint);
}; // Size: 0x9e0
#pragma pack(pop)
}
