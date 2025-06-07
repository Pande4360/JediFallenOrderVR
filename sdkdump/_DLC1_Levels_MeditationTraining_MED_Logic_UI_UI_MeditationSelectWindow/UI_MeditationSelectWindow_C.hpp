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
struct HorizontalBox;
}
namespace _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Button_VoidOptions {
struct UI_Button_VoidOptions_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance {
struct BP_VoidTearEntrance_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_MeditationSelectWindow {
#pragma pack(push, 1)
struct UI_MeditationSelectWindow_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x160]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeFromMED();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::HorizontalBox*& get_AcceptButton();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Image*& get_Border();
    _Script_UMG::Image*& get_BorderFocus();
    _Script_UMG::HorizontalBox*& get_ButtonTray();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Button_VoidOptions::UI_Button_VoidOptions_C*& get_MeditationTraining();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_UMG::TextBlock*& get_txt_Accept();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Button_VoidOptions::UI_Button_VoidOptions_C*& get_VoidChallenges();
    void* get_MeditationClosed();
    void* get_OnMeditationSelected_Delgate();
    void* get_OnVoidChallengesSelected_Delegate();
    _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& get_VoidEntrance();
    void* get_MeditationID();
    bool get_AtSavePoint();
    void set_AtSavePoint(bool value);
    void* get_PlanetToStreamingDef();
    void* get_MeditationTrainingStreamingDef();
    void* get_WindowClosed();
    bool get_IsStreaming();
    void set_IsStreaming(bool value);
    void* get_MedWorldStreamingStarted();
    bool get_SelectionMade();
    void set_SelectionMade(bool value);
    bool get_Initialized();
    void set_Initialized(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetupSelectOptions();
    void LoadedStreamingDefinitions_2F267F5F46685EA8AE642DA61CE302FA(void*& Definitions);
    void BndEvt__Button_VoidChallenges_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void BndEvt__Button_MeditationTraining_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void OnCancelPressed();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_VoidChallenges_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void BndEvt__Button_MeditationTraining_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature();
    void Initialize(bool IsAtSavePoint, bool BackFromMED_World);
    void StreamMedWorld();
    void OnWindowClosed0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_MeditationSelectWindow(int32_t EntryPoint);
    void MedWorldStreamingStarted__DelegateSignature();
    void WindowClosed__DelegateSignature();
    void OnVoidChallengesSelected_Delegate__DelegateSignature();
    void OnMeditationSelected_Delgate__DelegateSignature();
    void MeditationClosed__DelegateSignature();
}; // Size: 0x768
#pragma pack(pop)
}
