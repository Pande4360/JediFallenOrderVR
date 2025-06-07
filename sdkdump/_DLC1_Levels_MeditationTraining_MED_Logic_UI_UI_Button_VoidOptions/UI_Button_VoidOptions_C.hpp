#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Meditation_Button_Base\UI_Meditation_Button_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Button_VoidOptions {
#pragma pack(push, 1)
struct UI_Button_VoidOptions_C : public _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Meditation_Button_Base::UI_Meditation_Button_Base_C {
    private: char pad_260[0x58]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_OnFocus();
    _Script_UMG::TextBlock*& get_ModeDescription();
    _Script_UMG::Image*& get_ModeImage();
    _Script_UMG::TextBlock*& get_ModeTitle();
    void* get_Button_Text();
    void* get_ButtonDescription();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct(bool IsDesignTime);
    void OnUnfocused();
    void Construct();
    void OnButtonFocused0();
    void ExecuteUbergraph_UI_Button_VoidOptions(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)
}
