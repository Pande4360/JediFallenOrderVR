#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingArenaLights : public _Script_Engine::Actor {
    private: char pad_360[0x28]; public:
    void* get_LightClass();
    void* get_Lights();
    float& get_MinDistanceBetweenLights();
    float& get_Padding();
    float& get_LightHeight();
    static _Script_CoreUObject::Class* static_class();
    void SetupLights(_Script_CoreUObject::Vector ArenaCentre, _Script_CoreUObject::Vector2D ArenaDimensions);
    void ClearAllLights();
}; // Size: 0x388
#pragma pack(pop)
}
