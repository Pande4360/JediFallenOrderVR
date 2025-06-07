#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_iCustomTutorial {
#pragma pack(push, 1)
struct iCustomTutorial_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void ShowTKMode();
    void ShowTelekinesis();
    void ShowTwinBlade();
    void ShowBlockParry();
    void ShowTargetSwitchLock();
    void ShowEvadeRoll();
    void Dismiss(bool Instant);
    void Shown();
}; // Size: 0x28
#pragma pack(pop)
}
