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
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_HUD_UI_ForceHealPip {
#pragma pack(push, 1)
struct UI_ForceHealPip_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_RefillAnim();
    _Script_UMG::Image*& get_Empty();
    _Script_UMG::Image*& get_filled();
    _Script_UMG::ProgressBar*& get_HealthFill();
    _Script_UMG::Image*& get_Refill();
    bool get_IsFilled();
    void set_IsFilled(bool value);
    float& get_DelayTime();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_UI_ForceHealPip(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}
