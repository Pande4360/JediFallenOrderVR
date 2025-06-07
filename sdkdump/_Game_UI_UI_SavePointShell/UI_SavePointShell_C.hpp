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
struct Overlay;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance {
struct BP_VoidTearEntrance_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_SavePointShell {
#pragma pack(push, 1)
struct UI_SavePointShell_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x368]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_MedBtnHover();
    _Script_UMG::WidgetAnimation*& get_MedBtnPress();
    _Script_UMG::WidgetAnimation*& get_RestBtnHover();
    _Script_UMG::WidgetAnimation*& get_LeaveBtnHover();
    _Script_UMG::WidgetAnimation*& get_SkillBtnHover();
    _Script_UMG::WidgetAnimation*& get_LeaveSavePoint();
    _Script_UMG::WidgetAnimation*& get_NewSkillUnlock();
    _Script_UMG::WidgetAnimation*& get_RestPulse();
    _Script_UMG::WidgetAnimation*& get_LeaveBtnPress();
    _Script_UMG::WidgetAnimation*& get_SkillBtnPress();
    _Script_UMG::WidgetAnimation*& get_RestBtnPress();
    _Script_UMG::WidgetAnimation*& get_RestMessageIn();
    _Script_UMG::WidgetAnimation*& get_BackgroundAnimation();
    _Script_UMG::WidgetAnimation*& get_GradOut();
    _Script_UMG::WidgetAnimation*& get_ControlsTray_In();
    _Script_UMG::WidgetAnimation*& get_SavingGameAnim_Out();
    _Script_UMG::WidgetAnimation*& get_SavingGameAnim_In();
    _Script_UMG::Overlay*& get_AbilityBox();
    _Script_UMG::TextBlock*& get_AbilityText();
    _Script_UMG::TextBlock*& get_AbilityUnlockText();
    _Script_UMG::VerticalBox*& get_AvailableSkillPoints();
    _Script_UMG::VerticalBox*& get_ButtonContainer();
    _Script_UMG::Overlay*& get_Buttons();
    _Script_UMG::TextBlock*& get_ForcePointsBacking();
    _Script_UMG::TextBlock*& get_ForcePointText();
    _Script_UMG::TextBlock*& get_ForcePointTextBacking();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Button*& get_LeaveBtn();
    _Script_UMG::TextBlock*& get_LeaveText();
    _Script_UMG::TextBlock*& get_MeditationText();
    _Script_UMG::Image*& get_MeditationTrainingBG();
    _Script_UMG::Image*& get_MeditationTrainingBorder();
    _Script_UMG::SizeBox*& get_MeditationTrainingButton();
    _Script_UMG::Image*& get_MeditationTrainingFocused();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_MeditationTrainingPrompt();
    _Script_UMG::Button*& get_MedTrainButton();
    _Script_UMG::TextBlock*& get_RespawnMessage();
    _Script_UMG::Image*& get_RestBG();
    _Script_UMG::Image*& get_RestBorder();
    _Script_UMG::Image*& get_RestBorderAnim();
    _Script_UMG::Button*& get_RestBtn();
    _Script_UMG::SizeBox*& get_RestButton();
    _Script_UMG::Image*& get_RestFocused();
    _Script_UMG::TextBlock*& get_RestMessage();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_RestPrompt();
    _Script_UMG::TextBlock*& get_RestText();
    _Script_UMG::VerticalBox*& get_RestVertBox();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::RetainerBox*& get_RetainerBox_1();
    _Script_UMG::ProgressBar*& get_SkillPointBar();
    _Script_UMG::CanvasPanel*& get_SkillPointProgress();
    _Script_UMG::VerticalBox*& get_SkillPoints();
    _Script_UMG::Image*& get_SkillTreeBG();
    _Script_UMG::Image*& get_SkillTreeBorder();
    _Script_UMG::Button*& get_SkillTreeBtn();
    _Script_UMG::SizeBox*& get_SkillTreeButton();
    _Script_UMG::Image*& get_SkillTreeFocused();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_SkillTreePrompt();
    _Script_UMG::TextBlock*& get_SkillTreeText();
    _Script_UMG::Spacer*& get_Spacer_0();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_UI_TutorialPopUp();
    _Script_UMG::TextBlock*& get_UnspentForcePoints();
    _Script_UMG::VerticalBox*& get_VerticalBox_1();
    void* get_OnSaveMenuClosed();
    bool get_IsMantisSave();
    void set_IsMantisSave(bool value);
    _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& get_VoidEntrance();
    int32_t& get_MinVoidTearsForMeditation();
    void* get_MeditationID();
    bool get_IsMeditationTrainingUnlocked();
    void set_IsMeditationTrainingUnlocked(bool value);
    void* get_OnSkillTreeWindowClosed();
    void* get_OnRestConfirm();
    _Script_Engine::MaterialInstanceDynamic*& get_SkillPointMaterial();
    void* get_AbilityMessages();
    bool get_RestInputBuffered();
    void set_RestInputBuffered(bool value);
    void* get_RestInputAction();
    void* get_CloseMenuInputAction();
    void* get_OpenSkillTreeInputAction();
    bool get_IsWindowClosing();
    void set_IsWindowClosing(bool value);
    bool get_IsResting();
    void set_IsResting(bool value);
    bool get_IsSkillTreeOpening();
    void set_IsSkillTreeOpening(bool value);
    _Script_UMG::WidgetAnimation*& get_FloorPulse();
    _Script_UMG::WidgetAnimation*& get_NewVar_0();
    void* get_MeditationTrainingInputAction();
    void* get_MeditationTrainingStreamingDef();
    void* get_PlanetToStreamingDef();
    bool get_IsMeditationOpening();
    void set_IsMeditationOpening(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool ShouldRunSaveTutorial();
    bool ShouldRunRestTutorial();
    void SetupMaterialInstance();
    void UpdateSkillPointText();
    void SetupMeditationTraining();
    void GetSkillCurrentPoints(int32_t& SkillPoints);
    void OnSkillWindowClosed();
    void StopInputListeners();
    void OpenVoidModeSelect();
    void Rest();
    void RestartInputListeners();
    void DisplayTutorialPrompt();
    void DisplayAbilityMessage(void* Ability);
    void OpenSkillTree();
    void RestButtonPress();
    void SkillTreeButtonPress();
    void LeaveButtonPress();
    void Construct();
    void BufferRestInput();
    void SetUpRestInputBuffer();
    void UnhookRestInputBuffer();
    void CloseSaveMenu();
    void CustomEvent_0();
    void OnAnimationFinished_Event_0();
    void OnWindowOpened0();
    void OnWindowClosed0();
    void BndEvt__SkillTreeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SkillTreeBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SkillTreeBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__RestBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RestBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__RestBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__LeaveBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__LeaveBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__LeaveBtn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void OnMeditationTrainingCancelled();
    void MeditationTraining();
    void MeditationWindowClosed();
    void MedWorldStreamingStarted();
    void BndEvt__MedTrainButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void MedButtonPress();
    void BndEvt__MedTrainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MedTrainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void FirstSaveTutorialComplete();
    void RestTutorialDismissed();
    void ExecuteUbergraph_UI_SavePointShell(int32_t EntryPoint);
    void OnRestConfirm__DelegateSignature();
    void OnSkillTreeWindowClosed__DelegateSignature();
    void OnSaveMenuClosed__DelegateSignature();
}; // Size: 0x970
#pragma pack(pop)
}
