#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
#pragma pack(push, 1)
struct UI_TutorialPopUp_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x160]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ButtonPulse();
    _Script_UMG::WidgetAnimation*& get_ButtonFeedback();
    _Script_UMG::WidgetAnimation*& get_ButtonMoveLR();
    _Script_UMG::WidgetAnimation*& get_ButtonDoubleTap();
    _Script_UMG::WidgetAnimation*& get_ButtonHold();
    _Script_UMG::WidgetAnimation*& get_ButtonPress();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_AnimatedButton();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::ScaleBox*& get_BtnScaleBox();
    _Script_UMG::HorizontalBox*& get_ButtonBox();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::TextBlock*& get_FirstText();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_0();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Linework();
    _Script_UMG::Image*& get_Outline();
    _Script_UMG::Overlay*& get_Overlay_2();
    _Script_UMG::Image*& get_PulseOutline();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::SizeBox*& get_SizeBox_0();
    _Script_UMG::TextBlock*& get_Texttojump();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    void* get_VerbText();
    void* get_Input_Action();
    void* get_ResultText();
    void* get_Dismissed();
    void* get_InquisitorTutorialEnd();
    void* get_TGEnergyAttackTutorialEnd();
    bool get_InputTick();
    void set_InputTick(bool value);
    _Script_RsGameTechRT::RsUiWindow*& get_InputRsUIWindow();
    bool get_DismissOnPress();
    void set_DismissOnPress(bool value);
    void* get_AutoDismissTimer();
    float& get_Scale();
    static _Script_CoreUObject::Class* static_class();
    void* GetVisibility_0();
    void SetZOrder(int32_t ZOrder);
    void OnMonkeyBeamGrabInput(void* ActionName);
    void DismissTutorial(void* ActionName);
    void Update(void* VerbText, void* InputAction, void* ResultText, void* VerbAnimation, bool DismissOnPress);
    void StartPauseAndConfirmTutorial();
    void InquisitorUnblockableTutorial(float Duration);
    void EndInquisitorTutorial(void* ActionName);
    void ButtonPressed();
    void Hidden();
    void Shown();
    void StartBalanceBeamClimbTutorial();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void QuickRecoverTutorial();
    void OnQuickRecoverInput(void* ActionName);
    void UnpauseAndDismiss(void* ActionName);
    void OnWindowClosing();
    void StartMonkeyBeamGrabTutorial();
    void HolomapPrompt();
    void CustomEvent_0();
    void AutoDismiss();
    void DismissAfterDelay(float DelayDuration);
    void PreConstruct0(bool IsDesignTime);
    void Dismiss(bool Instant);
    void UpdateScale(float FractionalValue);
    void ExecuteUbergraph_UI_TutorialPopUp(int32_t EntryPoint);
    void TGEnergyAttackTutorialEnd__DelegateSignature();
    void InquisitorTutorialEnd__DelegateSignature();
    void Dismissed__DelegateSignature();
}; // Size: 0x368
#pragma pack(pop)
}
