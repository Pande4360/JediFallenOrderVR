#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Messages_UI_LocationStamp {
#pragma pack(push, 1)
struct UI_LocationStamp_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x540]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HiddenObjectiveIn();
    _Script_UMG::WidgetAnimation*& get_FadeInQuick();
    _Script_UMG::WidgetAnimation*& get_FadeOutQuick();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_AurebeshType();
    _Script_UMG::Border*& get_ChestsBorder();
    _Script_UMG::TextBlock*& get_ChestsLabel();
    _Script_UMG::Border*& get_CompletionPercentBorder();
    _Script_UMG::TextBlock*& get_CompletionPercentTxt();
    _Script_UMG::HorizontalBox*& get_Counters();
    _Script_UMG::Image*& get_DecoRight();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::Image*& get_ExploredComplete();
    _Script_UMG::TextBlock*& get_ExploredText();
    _Script_UMG::Spacer*& get_FirstSpacer();
    _Script_UMG::UniformGridPanel*& get_HiddenObjectivesContainer();
    _Script_UMG::HorizontalBox*& get_HIddenObjectivesNumbers();
    _Script_UMG::ProgressBar*& get_HiddenProgBar();
    _Script_UMG::Image*& get_Line();
    _Script_UMG::TextBlock*& get_LocationText();
    _Script_UMG::CanvasPanel*& get_MainContainer();
    _Script_UMG::Image*& get_MapOnlyDivider();
    _Script_UMG::TextBlock*& get_PercentSign();
    _Script_UMG::TextBlock*& get_PlanetTxt();
    _Script_UMG::Image*& get_RegionChestComplete();
    _Script_UMG::HorizontalBox*& get_RegionChestsBox();
    _Script_UMG::TextBlock*& get_RegionChestsCurrent();
    _Script_UMG::UniformGridPanel*& get_RegionChestsHolder();
    _Script_UMG::Image*& get_RegionChestsIcon();
    _Script_UMG::TextBlock*& get_RegionChestsTotal();
    _Script_UMG::HorizontalBox*& get_RegionSecretsBox();
    _Script_UMG::Image*& get_RegionSecretsComplete();
    _Script_UMG::TextBlock*& get_RegionSecretsCurrent();
    _Script_UMG::UniformGridPanel*& get_RegionSecretsHolder();
    _Script_UMG::Image*& get_RegionSecretsIcon();
    _Script_UMG::TextBlock*& get_RegionSecretsTotal();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Script_UMG::Border*& get_SecretsBorder();
    _Script_UMG::TextBlock*& get_SecretsLabel();
    _Script_UMG::HorizontalBox*& get_TopLine();
    void* get_Sentence();
    void* get_Location_Name();
    void* get_Colors();
    int32_t& get_ScansCurrent();
    int32_t& get_ScansTotal();
    int32_t& get_ChestsCurrent();
    int32_t& get_ChestsTotal();
    int32_t& get_EchoesCurrent();
    int32_t& get_EchoesTotal();
    void* get_LocationStampText();
    void* get_PlanetText();
    bool get_IsMapStamp();
    void set_IsMapStamp(bool value);
    void* get_ChestsColor();
    bool get_IsInCinematic_();
    void set_IsInCinematic_(bool value);
    int32_t& get_SecretsCurrent();
    int32_t& get_SecretsTotal();
    void* get_StyleSheet();
    void* get_SelectedRegion();
    void* get_SelectedWorld();
    void* get_NewVar_0();
    void* get_HiddenGreen();
    void* get_DisabledGrey();
    void* get_AurebeshText();
    static _Script_CoreUObject::Class* static_class();
    _Script_SlateCore::SlateColor Get_ExploredText_ColorAndOpacity_0();
    _Script_SlateCore::SlateColor GetChestsBorderColor();
    _Script_SlateCore::SlateColor GetSecretsBorderColor();
    int32_t GetCompletionPercentage(void*& SelectedRegion);
    _Script_SlateCore::SlateColor GetCompletionBorderColor();
    void OnAnimationFinished0(_Script_UMG::WidgetAnimation* Animation);
    void FireLocationStamp();
    void E_RegionCountUpdate();
    void Initialize();
    void OnHUDVisibilityChanged(bool IsHUD_Visible);
    void ShowHiddenObjective();
    void Construct0();
    void HideHiddenObjective();
    void PreConstruct0(bool IsDesignTime);
    void HandleCompletionPercentVisuals();
    void HandleChestCompletionVisuals();
    void HandleHiddenObjectivesVisuals();
    void ExecuteUbergraph_UI_LocationStamp(int32_t EntryPoint);
}; // Size: 0x748
#pragma pack(pop)
}
