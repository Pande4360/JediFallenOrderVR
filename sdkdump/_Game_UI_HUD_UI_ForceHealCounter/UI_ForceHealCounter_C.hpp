#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_HUD_UI_ForceHealPip {
struct UI_ForceHealPip_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_HUD_UI_ForceHealCounter {
#pragma pack(push, 1)
struct UI_ForceHealCounter_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_NoHeals();
    _Script_UMG::Image*& get_HealIcon();
    _Script_UMG::TextBlock*& get_HealNumber();
    _Script_UMG::ProgressBar*& get_LowHealthFlash();
    _Game_UI_HUD_UI_ForceHealPip::UI_ForceHealPip_C*& get_Pip();
    int32_t& get_CurrentHealthPips();
    float& get_DelayTime();
    int32_t& get_NewVar_0();
    int32_t& get_OldCurrentPips();
    static _Script_CoreUObject::Class* static_class();
    void UpdateHealthPips(bool PipByPipRefill);
    void Construct0();
    void HealFail();
    void ExecuteUbergraph_UI_ForceHealCounter(int32_t EntryPoint);
}; // Size: 0x248
#pragma pack(pop)
}
