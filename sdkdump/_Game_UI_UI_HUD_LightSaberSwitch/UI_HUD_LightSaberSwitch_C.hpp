#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_HUD_LightSaberSwitch {
#pragma pack(push, 1)
struct UI_HUD_LightSaberSwitch_C : public _Script_UMG::UserWidget {
    private: char pad_208[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::TextBlock*& get_TempSaberText();
    _Script_UMG::TextBlock*& get_TempStaffText();
    _Script_UMG::TextBlock*& get_TempTwinText();
    bool get_IsVisible_0();
    void set_IsVisible_0(bool value);
    void* get_HighlightedSaber();
    void* get_TempUnhighlightedColour();
    void* get_TempHighlightColour();
    void* get_TempSelectColour();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void HighlightLightsaberType(void* LightsaberType);
    void ShowWidget();
    void HideWidget();
    void SetHighlight(void* LightsaberType);
    void ConfirmLightsaberType();
    void ExecuteUbergraph_UI_HUD_LightSaberSwitch(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
}
