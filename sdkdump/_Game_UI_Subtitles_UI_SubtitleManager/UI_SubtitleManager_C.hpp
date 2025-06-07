#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Game_UI_Subtitles_UI_SubtitleItem {
struct UI_SubtitleItem_C;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Game_GlobalData_SwGameState {
struct SwGameState_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_UI_Subtitles_UI_SubtitleManager {
#pragma pack(push, 1)
struct UI_SubtitleManager_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x2c8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Select2();
    _Script_UMG::WidgetAnimation*& get_Select1();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_Select0();
    _Script_UMG::WidgetAnimation*& get_OnLoad();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::Image*& get_BottomSelect();
    _Script_UMG::TextBlock*& get_Choice0();
    _Script_UMG::TextBlock*& get_Choice1();
    _Script_UMG::TextBlock*& get_Choice2();
    _Script_UMG::TextBlock*& get_Choice3();
    _Script_UMG::Image*& get_Gradient();
    _Script_UMG::WidgetSwitcher*& get_InputSwitcher();
    _Script_UMG::CanvasPanel*& get_InteractionChoicePanel();
    _Script_UMG::Image*& get_LeftSelect();
    _Script_UMG::Border*& get_LetterBoxChoice0();
    _Script_UMG::Border*& get_LetterBoxChoice1();
    _Script_UMG::Border*& get_LetterBoxChoice2();
    _Script_UMG::Border*& get_LetterBoxChoice3();
    _Script_UMG::Border*& get_LetterBoxRadioName();
    _Script_UMG::Border*& get_LetterBoxRadioText();
    _Script_UMG::VerticalBox*& get_LineListBox();
    _Script_UMG::Image*& get_PCBottomSelect();
    _Script_UMG::Image*& get_PCLeftSelect();
    _Script_UMG::ProgressBar*& get_PCOption0();
    _Script_UMG::ProgressBar*& get_PCOption1();
    _Script_UMG::ProgressBar*& get_PCOption2();
    _Script_UMG::ProgressBar*& get_PCOption3();
    _Script_UMG::Image*& get_PCRightSelect();
    _Script_UMG::CanvasPanel*& get_PCSelection();
    _Script_UMG::ProgressBar*& get_PSOption0();
    _Script_UMG::ProgressBar*& get_PSOption1();
    _Script_UMG::ProgressBar*& get_PSOption2();
    _Script_UMG::ProgressBar*& get_PSOption3();
    _Script_UMG::CanvasPanel*& get_PSSelection();
    _Script_UMG::CanvasPanel*& get_RadioSpeakerNamePanel();
    _Script_UMG::Image*& get_RightSelect();
    _Script_UMG::ScaleBox*& get_ScaleChoice0();
    _Script_UMG::ScaleBox*& get_ScaleChoice1();
    _Script_UMG::ScaleBox*& get_ScaleChoice2();
    _Script_UMG::ScaleBox*& get_ScaleChoice3();
    _Script_UMG::ScaleBox*& get_ScaleRadioName();
    _Script_UMG::ScaleBox*& get_ScaleRadioText();
    _Script_UMG::CanvasPanel*& get_SubtitlesPanel();
    _Script_UMG::TextBlock*& get_txtRadioSpeakerName();
    _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& get_UI_SubtitleItem_1();
    _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& get_UI_SubtitleItem_2();
    _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& get_UI_SubtitleItem_3();
    _Game_UI_Subtitles_UI_SubtitleItem::UI_SubtitleItem_C*& get_UI_SubtitleItem_4();
    _Script_UMG::Image*& get_XBBottomSelect();
    _Script_UMG::Image*& get_XBLeftSelect();
    _Script_UMG::ProgressBar*& get_XBOption0();
    _Script_UMG::ProgressBar*& get_XBOption1();
    _Script_UMG::ProgressBar*& get_XBOption2();
    _Script_UMG::ProgressBar*& get_XBOption3();
    _Script_UMG::CanvasPanel*& get_XboxSelection();
    _Script_UMG::Image*& get_XBRightSelect();
    void* get_CurrentLines();
    void* get_ChoiceEntries();
    _Script_Engine::PlayerController*& get_PlayerController();
    _Script_RsGameTechRT::RsConversation*& get_CurrentConversationForChoice();
    float& get_DialogChoiceTimeRemaining();
    int32_t& get_CurrentChoiceCount();
    float& get_DialogChoicePercentRemaining();
    float& get_DialogChoicePercentRemaining_0();
    float& get_DialogChoicePercentRemaining_1();
    float& get_DialogChoicePercentRemaining_2();
    float& get_DialogChoicePercentRemaining_3();
    float& get_DialogChoiceTimeDefault();
    int32_t& get_DefaultDialogueChoiceIndex();
    int32_t& get_CurrentChoiceNumberForTags();
    void* get_ChoiceAnims();
    void* get_LineItems();
    void* get_SubtitleTexts();
    bool get_ChoiceMade();
    void set_ChoiceMade(bool value);
    int32_t& get_CurrentRadioSpeakerLine();
    float& get_CachedYHeight();
    void* get_ChoiceLetterBoxes();
    bool get_CurrentVisibilitySetting();
    void set_CurrentVisibilitySetting(bool value);
    bool get_InInteractionChoice();
    void set_InInteractionChoice(bool value);
    _Game_GlobalData_SwGameState::SwGameState_C*& get_SwGameState();
    static _Script_CoreUObject::Class* static_class();
    void SetScreenVisibility(bool Visible);
    void* Get_InteractionChoicePanel_Visibility_0();
    void QuitToTitle();
    void UpdateSubtitleScale(int32_t SubtitleScale);
    void UpdateLetterboxOpacity(float LetterBoxOpacity);
    void UpdateElementPositionsForHUD(float HUDVerticalBoxHeight);
    void ChoiceAnimCompleted(int32_t Choice);
    void UpdateVisibleLines();
    void DebugLog(void* Message, float Duration);
    void* Get_SubtitlesPanel_Visibility_0();
    void MakeDialogueChoice(int32_t ChoiceIndex);
    void ToggleChoiceState(bool InChoiceMode, int32_t ChoiceCount);
    void ShowDialogueChoice(_Script_RsGameTechRT::RsConversation* Conversation, void*& Choices, int32_t ChoiceNumber);
    void EndLine(int32_t UID);
    void PlayLine(void* Speaker, void* Content, int32_t UID, bool RadioLine, _Script_Engine::Actor* Actor, bool NotSpatialized, int32_t Attenuation);
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void OnWindowOpened0();
    void DPadPressed(void* ActionName);
    void EndChoiceStateDueToConversationStopped(_Script_RsGameTechRT::RsConversation* Conversation);
    void Choice1Made();
    void Choice2Made();
    void Choice3Made();
    void DelayAndMakeChoice(int32_t Choice);
    void ExecuteUbergraph_UI_SubtitleManager(int32_t EntryPoint);
}; // Size: 0x8d0
#pragma pack(pop)
}
