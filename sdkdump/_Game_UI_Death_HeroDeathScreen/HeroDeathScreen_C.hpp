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
struct CanvasPanel;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim {
struct UI_StarChartAnim_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Death_HeroDeathScreen {
#pragma pack(push, 1)
struct HeroDeathScreen_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x1c8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ButtonDraw();
    _Script_UMG::WidgetAnimation*& get_CycleDeathTipReveal();
    _Script_UMG::WidgetAnimation*& get_ReviveBarShrink();
    _Script_UMG::WidgetAnimation*& get_ReviveFadeOut();
    _Script_UMG::WidgetAnimation*& get_ReviveFadeIn();
    _Script_UMG::WidgetAnimation*& get_RespawnFadeOut();
    _Script_UMG::WidgetAnimation*& get_RespawnFadeIn();
    _Script_UMG::CanvasPanel*& get_BackgroundStuff();
    _Script_UMG::TextBlock*& get_BigBGText();
    _Script_UMG::Overlay*& get_ButtonHolder();
    _Script_UMG::Image*& get_ButtonRing();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_3();
    _Script_UMG::Image*& get_DotL();
    _Script_UMG::Image*& get_DotR();
    _Script_UMG::Image*& get_HorizL();
    _Script_UMG::Image*& get_HorizR();
    _Script_UMG::Image*& get_JediLogo();
    _Script_UMG::Image*& get_M_Noise();
    _Script_UMG::CanvasPanel*& get_MainPanel();
    _Script_UMG::CanvasPanel*& get_MessageHolder();
    _Script_UMG::TextBlock*& get_or();
    _Script_UMG::Image*& get_PanningBG();
    _Script_UMG::CanvasPanel*& get_RespawnPanel();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_ReviveAcceptButton();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_ReviveCancelButton();
    _Script_UMG::CanvasPanel*& get_RevivePanel();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_249();
    _Script_UMG::Image*& get_SolidColor();
    _Script_UMG::TextBlock*& get_TextBlock_2();
    _Script_UMG::TextBlock*& get_TextBlock_3();
    _Script_UMG::TextBlock*& get_TextBlock_4();
    _Script_UMG::TextBlock*& get_tocyclethroughtips();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_1();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_UI_TutorialPopUp();
    _Script_UMG::TextBlock*& get_YouDied();
    bool get_bCaptured();
    void set_bCaptured(bool value);
    bool get_CanReviveInput();
    void set_CanReviveInput(bool value);
    void* get_TriggerRespawn();
    void* get_InputDetected();
    bool get_CanRespawnInput();
    void set_CanRespawnInput(bool value);
    float& get_TimeOutDelay();
    float& get_TimeDilation();
    void* get_HintString();
    void* get_StreamingDefinitions();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& get_StarChartAnimREF();
    void* get_AurebeshReawakenTextDoNotLocalize();
    void* get_AurebeshRespawnTextDoNotLocalize();
    static _Script_CoreUObject::Class* static_class();
    void ShowDeathScreenTutorial(int32_t ZOrder, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& TutorialPopup);
    void LoadedStreamingDefinitions_1070BA1C4801D2B1C5A882B78B9EFBA1(void*& Definitions);
    void Construct();
    void OnDeathWidgetAdded();
    void Respawn();
    void BountyHunterCapture();
    void PromptRespawn();
    void PromptRevive();
    void AcceptedRespawnInput(void* ActionName);
    void Revive();
    void CancelInput(void* ActionName);
    void FailRevive();
    void AcceptReviveInput(void* ActionName);
    void RespawnButtonFadedIn();
    void ReviveButtonFadedIn();
    void BndEvt__ReviveFadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
    void BndEvt__ReviveBarShrink_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
    void PromptReawaken();
    void OnWindowClosed0();
    void OnWindowOpened0();
    void ShowNextDeathTip(void* ActionName);
    void ShowPrevDeathTip(void* ActionName);
    void ResumeRespawn();
    void PreConstruct(bool IsDesignTime);
    void CustomEvent_0(void* Result);
    void HUDScaleUpdated(int32_t Value);
    void ExecuteUbergraph_HeroDeathScreen(int32_t EntryPoint);
    void InputDetected__DelegateSignature();
    void TriggerRespawn__DelegateSignature();
}; // Size: 0x7d0
#pragma pack(pop)
}
