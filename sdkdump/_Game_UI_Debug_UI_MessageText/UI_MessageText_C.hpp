#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_WorldInteracts_EventZones_Zone_MessageText {
struct Zone_MessageText_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Debug_UI_MessageText {
#pragma pack(push, 1)
struct UI_MessageText_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x3b8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_MultipleEntries();
    _Script_UMG::WidgetAnimation*& get_TactGuideIntro();
    _Script_UMG::WidgetAnimation*& get_Outtro();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::TextBlock*& get_BodyCopy();
    _Script_UMG::Border*& get_ButtonBorder();
    _Script_UMG::Image*& get_ButtonPrompt();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_3();
    _Script_UMG::TextBlock*& get_DataType();
    _Script_UMG::Image*& get_DataTypeImage();
    _Script_UMG::HorizontalBox*& get_DismissContainer();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Ring();
    _Script_UMG::ScaleBox*& get_ScaleBox_1();
    _Script_UMG::TextBlock*& get_TitleText();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    void* get_Text();
    bool get_ShowButton();
    void set_ShowButton(bool value);
    _Game_WorldInteracts_EventZones_Zone_MessageText::Zone_MessageText_C*& get_zone();
    void* get_xboxPrompt();
    void* get_NoButtonSelected();
    int32_t& get_TextMaxLength();
    void* get_BodyTextData();
    bool get_NewVar_0();
    void set_NewVar_0(bool value);
    float& get_SpeedX();
    float& get_Overal_Glint_Speed();
    float& get_U_Speed();
    float& get_V_Speed();
    void* get_ClickThroughGameMenuURL();
    void* get_DatabankType();
    void* get_TruncatedText();
    void* get_StyleSheet();
    void* get_Dismissed();
    void* get_MessageQueue();
    bool get_IsSingleEntry();
    void set_IsSingleEntry(bool value);
    bool get_HasQueueStarted();
    void set_HasQueueStarted(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AddMessageToQueue(_Script_GameplayTags::GameplayTagContainer UnlockableTag);
    void SetUnlockable(_Script_GameplayTags::GameplayTagContainer UnlockableTag);
    void SetBodyText(void* NewBodyText);
    void GetTruncatedText(void* TextToTruncate, void*& Truncated);
    _Script_SlateCore::SlateBrush Get_button_Brush_0();
    void* GetText_0();
    void Construct();
    void RequireButtonPress();
    void MenuClickThrough(void* ActionName);
    void ProcessMessageQueue();
    void UpdateScale(int32_t Value);
    void ExecuteUbergraph_UI_MessageText(int32_t EntryPoint);
    void Dismissed__DelegateSignature();
}; // Size: 0x9c0
#pragma pack(pop)
}
