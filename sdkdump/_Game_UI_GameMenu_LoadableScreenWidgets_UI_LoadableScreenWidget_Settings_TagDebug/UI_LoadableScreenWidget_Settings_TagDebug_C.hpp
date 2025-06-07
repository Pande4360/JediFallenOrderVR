#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_UMG {
struct CanvasPanel;
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
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_TagDebug {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_TagDebug_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x98]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::CanvasPanel*& get_LoadingPanel();
    _Script_UMG::TextBlock*& get_txt_ParentTag();
    _Script_UMG::WrapBox*& get_WrapBox_1();
    void* get_ButtonsToTags();
    void* get_CurrentTagStack();
    void* get_SelectedItemIndices();
    bool get_Loading();
    void set_Loading(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* Get_LoadingPanel_Visibility_0();
    void* Get_LoadingPanel_ToolTipText_0();
    void ButtonClicked();
    void OptionalConsumeBackButton0(bool& Consumed);
    void ProcessTags(_Script_GameplayTags::GameplayTag ParentTag);
    void HandleButtonClick(_Script_RsGameTechRT::RsUiButton* Button, bool& Handled);
    void Construct();
    void DoBaseProcess();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_TagDebug(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
