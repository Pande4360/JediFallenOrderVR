#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base\UI_LoadableScreenWidget_Customization_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
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
struct WrapBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Outfit {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Customization_Outfit_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base::UI_LoadableScreenWidget_Customization_Base_C {
    private: char pad_2c8[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_Txt_CosmeticName();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_UI_SwatchNode();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_UI_SwatchNode_0();
    _Script_UMG::WrapBox*& get_WrapBox_0();
    static _Script_CoreUObject::Class* static_class();
    void OptionalConsumeBackButton(bool& Consumed);
    void CreateNewButton_OVERRIDDEN0(void* CosmeticEnum, _Script_UMG::PanelWidget* ParentWidget, _Script_RsGameTechRT::RsUiButton*& CreatedButton);
    void CosmeticSelected0(void* CosmeticEnum);
    void ClearPreviewButtonContainer0();
    void CosmeticPreview0(void* Cosmetic);
    void Construct0();
    void LostFocus();
    void ReceivedFocus();
    void ApplyOverrideText();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Customization_Outfit(int32_t EntryPoint);
}; // Size: 0x2f8
#pragma pack(pop)
}
