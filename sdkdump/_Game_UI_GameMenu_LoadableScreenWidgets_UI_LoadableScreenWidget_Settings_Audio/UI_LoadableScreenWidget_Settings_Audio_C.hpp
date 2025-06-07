#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Audio {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Audio_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x2d0]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_DynamicRangeBtn();
    _Script_UMG::TextBlock*& get_DynamicText();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_EffectsBtn();
    _Script_UMG::TextBlock*& get_EffectsText();
    _Script_UMG::TextBlock*& get_MasterText();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_MasterVolume();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_MusicBtn();
    _Script_UMG::TextBlock*& get_MusicText();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Script_RsTechRT::RsLine*& get_RsLine_3();
    _Script_RsTechRT::RsLine*& get_RsLine_4();
    _Script_RsTechRT::RsLine*& get_RsLine_7();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_SpeakerOutputBtn();
    _Script_UMG::TextBlock*& get_SpeakerText();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_VoiceBtn();
    _Script_UMG::TextBlock*& get_VoiceText();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    void* get_RTPC_Master();
    void* get_RTPC_Music();
    void* get_RTPC_Effects();
    void* get_RTPC_VO();
    int32_t& get_StepValue();
    void* get_Bus_Music();
    void* get_Bus_SFX();
    void* get_SpeakerOutput();
    void* get_DynamicRange();
    void* get_SettingsTextColor();
    int32_t& get_OldMasterVolumeValue();
    int32_t& get_OldMusicVolumeValue();
    int32_t& get_OldEffectVolumeValue();
    int32_t& get_OldVoiceVolumeValue();
    void* get_OldSpeakerOutputValue();
    void* get_OldDynamicRangeValue();
    void* get_DefaultTextColor();
    void* get_HighlightTextColor();
    static _Script_CoreUObject::Class* static_class();
    void UpdateTextHighlights(bool Highlight, _Script_UMG::TextBlock* Text);
    void SetCachedRTPCValue(int32_t PreviousValue, void* SliderName, _Script_UMG::TextBlock* ValueText);
    void SetupText();
    void UpdateDynamicRangeText(void* DynamicRange);
    void UpdateSpeakerOutputText(void* Index);
    void GetRTPCValue(void* SettingsName, _Script_UMG::TextBlock* ValueTxt, int32_t& OutVal);
    void SetRTPCValue(int32_t Increment, void* SliderName, _Script_UMG::TextBlock* ValueText);
    void BndEvt__UI_PauseMenuBtn_Selector_K2Node_ComponentBoundEvent_8_Nav_Right__DelegateSignature();
    void BndEvt__UI_PauseMenuBtn_Selector_K2Node_ComponentBoundEvent_10_Nav_Left__DelegateSignature();
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_12_Nav_Right__DelegateSignature();
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_14_Nav_Left__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_15_Nav_Right__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_16_Nav_Left__DelegateSignature();
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_17_Nav_Right__DelegateSignature();
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_19_Nav_Left__DelegateSignature();
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_20_Nav_Right__DelegateSignature();
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_21_Nav_Left__DelegateSignature();
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_22_Nav_Right__DelegateSignature();
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_23_Nav_Left__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MasterVolume_K2Node_ComponentBoundEvent_1_CancelledOut__DelegateSignature();
    void Construct();
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_3_CancelledOut__DelegateSignature();
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_5_CancelledOut__DelegateSignature();
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_9_CancelledOut__DelegateSignature();
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_0_CancelledOut__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_6_CancelledOut__DelegateSignature();
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_11_RsButtonEvent__DelegateSignature();
    void BndEvt__MasterVolume_K2Node_ComponentBoundEvent_18_RsButtonEvent__DelegateSignature();
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_37_RsButtonEvent__DelegateSignature();
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_39_RsButtonEvent__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_41_RsButtonEvent__DelegateSignature();
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_43_RsButtonEvent__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_2_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_4_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__MasterVolume_K2Node_ComponentBoundEvent_7_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_13_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_36_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_38_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__MasterVolume_K2Node_ComponentBoundEvent_24_ClickLeft__DelegateSignature();
    void BndEvt__MasterVolume_K2Node_ComponentBoundEvent_25_ClickRight__DelegateSignature();
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_26_ClickLeft__DelegateSignature();
    void BndEvt__MusicBtn_K2Node_ComponentBoundEvent_27_ClickRight__DelegateSignature();
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_28_ClickLeft__DelegateSignature();
    void BndEvt__EffectsBtn_K2Node_ComponentBoundEvent_29_ClickRight__DelegateSignature();
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_30_ClickLeft__DelegateSignature();
    void BndEvt__VoiceBtn_K2Node_ComponentBoundEvent_31_ClickRight__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_32_ClickLeft__DelegateSignature();
    void BndEvt__DynamicRangeBtn_K2Node_ComponentBoundEvent_33_ClickRight__DelegateSignature();
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_34_ClickLeft__DelegateSignature();
    void BndEvt__SpeakerOutputBtn_K2Node_ComponentBoundEvent_35_ClickRight__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Audio(int32_t EntryPoint);
}; // Size: 0x500
#pragma pack(pop)
}
