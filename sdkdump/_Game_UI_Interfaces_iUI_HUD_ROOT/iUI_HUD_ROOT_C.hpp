#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Interfaces_iUI_HUD_ROOT {
#pragma pack(push, 1)
struct iUI_HUD_ROOT_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetSubtitleManagerVisibility(bool Visible);
    void iSetSettingsHideHUD(bool HideHUD);
    void iNewXPGain(bool IsRevenge);
    void iForcePointSpent(int32_t CurrentUnspentPoints);
    void iResetXPZero();
}; // Size: 0x28
#pragma pack(pop)
}
