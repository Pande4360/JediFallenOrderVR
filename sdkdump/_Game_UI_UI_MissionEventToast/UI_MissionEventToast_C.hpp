#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
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
struct VerticalBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem {
struct BP_MissionObjectiveSystem_C;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_UI_3DMap_UI_MapMenu {
struct UI_MapMenu_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_MissionEventToast {
#pragma pack(push, 1)
struct UI_MissionEventToast_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x308]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_ObjectiveComplete();
    _Script_UMG::WidgetAnimation*& get_MapOpenDefault();
    _Script_UMG::WidgetAnimation*& get_ToastToMapTransition();
    _Script_UMG::WidgetAnimation*& get_Outtro();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_AnimatedButton();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::HorizontalBox*& get_ButtonBox();
    _Script_UMG::CanvasPanel*& get_Canvascontainer();
    _Script_UMG::VerticalBox*& get_ContentBox();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_JediLogo();
    _Script_UMG::TextBlock*& get_NewObjectiveTxt();
    _Script_UMG::TextBlock*& get_ObjectiveComplete_ObjName();
    _Script_UMG::VerticalBox*& get_ObjectiveCompleteContentBox();
    _Script_UMG::TextBlock*& get_ObjectiveCompleteLabel();
    _Script_UMG::Image*& get_Outline();
    _Script_UMG::Image*& get_PulseOutline();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::TextBlock*& get_ReturntoMantisLabel();
    _Script_UMG::ScaleBox*& get_ScaleBox_0();
    _Script_UMG::SizeBox*& get_SizeBox_0();
    _Script_UMG::HorizontalBox*& get_TravelBox();
    _Script_UMG::TextBlock*& get_Txt_ObjectiveTitle();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    void* get_StyleSheet();
    void* get_LVL_MissionToastAnimFinished();
    bool get_IsAutoPlayEnabled();
    void set_IsAutoPlayEnabled(bool value);
    _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C*& get_MissionObjectiveSysRef();
    _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& get_MapMenuRef();
    void* get_LastMission();
    void* get_CurrentObjectiveTxt();
    void* get_NewObjectiveAddedTxt();
    bool get_IsFanfarePlaying();
    void set_IsFanfarePlaying(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_SlateCore::SlateBrush Get_Glow_Brush_0();
    void Construct();
    void CloseToast(void* NewParam);
    void OnWindowOpened0();
    void CleanUp();
    void UpdateMissionText();
    void PreConstruct(bool IsDesignTime);
    void InitialFanfare();
    void DefaultOpen();
    void ShowObjectiveComplete(void* ObjectiveName);
    void DebugUpdateMissionText(void* RowName);
    void UpdateScale(int32_t Value);
    void ExecuteUbergraph_UI_MissionEventToast(int32_t EntryPoint);
    void LVL_MissionToastAnimFinished__DelegateSignature();
}; // Size: 0x910
#pragma pack(pop)
}
