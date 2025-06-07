#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics {
struct HC_Cosmetics_C;
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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Customization_Base {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Customization_Base_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x98]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::Actor*& get_MenuCapture();
    _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& get_HC_Cosmetics();
    void* get_ButtonToEnum();
    void* get_CosmeticTypeEnum();
    _Script_UMG::TextBlock*& get_TextWidget();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_EquippedSwatch();
    int32_t& get_CurrentBDBitmask();
    void* get_StartingFocusCosmetic();
    _Game_UI_GameMenu_Widgets_UI_SwatchNode::UI_SwatchNode_C*& get_JustUnlockedFocusSwatch();
    bool get_IsDestructing();
    void set_IsDestructing(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CheckAchievement(void* SettingsName, void* Cosmetic);
    void UpdateCurrentBDCosmetic(void* SelectedCosmetic);
    void CreateNewButton_OVERRIDDEN(void* CosmeticEnum, _Script_UMG::PanelWidget* ParentWidget, _Script_RsGameTechRT::RsUiButton*& CreatedButton);
    void Construct();
    void HandleButtonAccepted();
    void CosmeticSelected(void* CosmeticEnum);
    void ClearPreviewButtonContainer();
    void HandleButtonFocused();
    void CosmeticPreview(void* Cosmetic);
    void ReceivedFocus0();
    void InitCosmeticTextWidget(_Script_UMG::TextBlock* Widget);
    void UpdateCosmeticText(void* Cosmetic);
    void RevertCosmeticToEquipped();
    void LostFocus0();
    void Destruct();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Customization_Base(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
