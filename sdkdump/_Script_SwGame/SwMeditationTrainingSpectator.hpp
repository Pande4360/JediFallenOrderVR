#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingSpectator : public _Script_Engine::PlayerController {
    private: char pad_6d0[0x28]; public:
    void* get_SpectatorPawnClass();
    float& get_SpectatorFOV();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6f8
#pragma pack(pop)
}
