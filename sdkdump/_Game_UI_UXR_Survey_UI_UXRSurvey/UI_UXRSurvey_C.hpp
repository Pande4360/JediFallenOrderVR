#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UXR_Survey_UI_UXRSurvey {
#pragma pack(push, 1)
struct UI_UXRSurvey_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_Accomplishment();
    _Script_UMG::TextBlock*& get_PlayerIDTxt();
    _Script_UMG::Image*& get_ProgressCircle();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    void* get_SurveyStepText();
    void* get_PlayerId();
    static _Script_CoreUObject::Class* static_class();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_MenuButtonPrompt_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_UXRSurvey(int32_t EntryPoint);
}; // Size: 0x658
#pragma pack(pop)
}
