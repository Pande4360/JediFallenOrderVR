#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Narrative_Hub_Chumps_Data_INT_Chump_Face_AnimBP {
#pragma pack(push, 1)
struct INT_Chump_Face_AnimBP_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetEyeTrackingTarget(_Script_Engine::SceneComponent* Target);
}; // Size: 0x28
#pragma pack(pop)
}
