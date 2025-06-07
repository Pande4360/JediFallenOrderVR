#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ForceFeedbackEffect;
}
namespace _Game_Characters_Hero_Logic_Interfaces_iHero_Rumble {
#pragma pack(push, 1)
struct iHero_Rumble_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void RumbleFeedback(_Script_Engine::ForceFeedbackEffect* Force_Feedback);
    void RadialRumble(float Intensity, float Duration, _Script_CoreUObject::Vector Loc);
}; // Size: 0x28
#pragma pack(pop)
}
