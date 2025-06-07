#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _DLC1_Levels_MeditationTraining_MED_Logic_UI_UI_Meditation_Button_Base {
#pragma pack(push, 1)
struct UI_Meditation_Button_Base_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void OnButtonUnfocused();
    void UpdateButtonVisuals();
    void OnButtonFocused();
    void OnFocusGroupDisabled0();
    void ExecuteUbergraph_UI_Meditation_Button_Base(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
