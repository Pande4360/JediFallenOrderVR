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
struct Image;
}
namespace _Script_UMG {
struct BackgroundBlur;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Messages_UI_ChestAcquire {
#pragma pack(push, 1)
struct UI_ChestAcquire_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x2a8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HealCanister();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::TextBlock*& get_BigText();
    _Script_UMG::BackgroundBlur*& get_blurbox();
    _Script_UMG::HorizontalBox*& get_ButtonBox();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_1();
    _Script_UMG::Image*& get_Diag();
    _Script_UMG::Image*& get_FullCircle();
    _Script_UMG::Image*& get_HalfCircle();
    _Script_UMG::TextBlock*& get_HIDDENOBJECTIVELABEL();
    _Script_UMG::Image*& get_HorizBottom();
    _Script_UMG::Image*& get_HorizTop();
    _Script_UMG::Image*& get_QuarterCircle();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::TextBlock*& get_SmallText();
    _Script_UMG::Image*& get_Strip();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Script_UMG::Image*& get_Vertical();
    void* get_DisplayName();
    void* get_LVL_AbilityAcquire_Done();
    void* get_Chest_Struct();
    void* get_Cosmetics();
    void* get_ClickThroughURL();
    void* get_StyleSheet();
    void* get_HealCanisterTxt();
    void* get_AcquiredTxt();
    static _Script_CoreUObject::Class* static_class();
    void AnimFinished();
    void ShowBoglingCompanionAcquire();
    void ShowChestAcquire();
    void ShowSeedAcquire(void* InText);
    void PreConstruct(bool IsDesignTime);
    void OpenMenu(void* ActionName);
    void ExecuteUbergraph_UI_ChestAcquire(int32_t EntryPoint);
    void LVL_AbilityAcquire_Done__DelegateSignature();
}; // Size: 0x8b0
#pragma pack(pop)
}
