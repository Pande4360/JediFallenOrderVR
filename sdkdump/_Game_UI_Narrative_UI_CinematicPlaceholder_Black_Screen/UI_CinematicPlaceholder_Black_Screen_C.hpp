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
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
struct FileMediaSource;
}
namespace _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen {
#pragma pack(push, 1)
struct UI_CinematicPlaceholder_Black_Screen_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0xe0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_RevealText();
    _Script_UMG::Image*& get_BG();
    _Script_UMG::Image*& get_BlackBG();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::TextBlock*& get_CinematicTitle();
    _Script_UMG::CanvasPanel*& get_ContentPanel();
    _Script_UMG::Border*& get_FadeBorder();
    _Script_UMG::Image*& get_Horiz_Line_Bottom();
    _Script_UMG::Image*& get_Horiz_Line_Top();
    _Script_UMG::Image*& get_Noise();
    _Script_UMG::Image*& get_ProgressCircle();
    _Script_UMG::HorizontalBox*& get_SkipButtonHolder();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_SkipButtonIcon();
    _Script_UMG::Image*& get_StoryboardVideo();
    _Script_UMG::CanvasPanel*& get_TimerPanel();
    _Script_UMG::TextBlock*& get_TimerText();
    _Script_UMG::TextBlock*& get_Txt_Skip();
    _Script_UMG::VerticalBox*& get_VerticalTextContainer();
    void* get_UI_Done();
    void* get_UI_FadedIn();
    void* get_UI_FadingOut();
    float& get_CinematicLength();
    bool get_CloseOnTimerCompleted();
    void set_CloseOnTimerCompleted(bool value);
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    bool get_HasMedia();
    void set_HasMedia(bool value);
    bool get_MediaReady();
    void set_MediaReady(bool value);
    bool get_ShouldPause();
    void set_ShouldPause(bool value);
    bool get_IsButtonPushed();
    void set_IsButtonPushed(bool value);
    bool get_Done();
    void set_Done(bool value);
    bool get_AllowSkipping();
    void set_AllowSkipping(bool value);
    bool get_DisableSkipWhileStreaming();
    void set_DisableSkipWhileStreaming(bool value);
    bool get_SkippingQuitsGame();
    void set_SkippingQuitsGame(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CineLog(void* Message);
    void SkipClicked(void* Action, bool& Consumed);
    void SetScreenDark();
    void TriggerTimerLoop();
    void UpdateCinematicTimerText();
    void ActivateScreen(bool FadeToBlack, float FadeInDuration, float FadeOutDuration, float CinematicLength, bool CloseOnTimerCompleted, _Script_MediaAssets::FileMediaSource* StoryboardMovieSource, bool ShowAssetName, bool PauseGame, bool AllowSkipping, bool DisableSkipWhileStreaming, bool ShowTimer, bool SkippingQuitsGame);
    void SetCinematicTitle(void* Title);
    void PopulateText(void*& TextStrings);
    void CinematicDone(void* ActionName);
    void Timer_UpdateCinematicTimerText();
    void MediaEnded();
    void UpdateMediaDuration(void* OpenedUrl);
    void ShowMediaTexture();
    void SkipHoldComplete(void* ActionName);
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ScreenShown();
    void ExecuteUbergraph_UI_CinematicPlaceholder_Black_Screen(int32_t EntryPoint);
    void UI_FadingOut__DelegateSignature();
    void UI_FadedIn__DelegateSignature();
    void UI_Done__DelegateSignature();
}; // Size: 0x6e8
#pragma pack(pop)
}
