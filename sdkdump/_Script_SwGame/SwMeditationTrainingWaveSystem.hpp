#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingWaveSystem : public _Script_Engine::Actor {
    private: char pad_360[0xa0]; public:
    void* get_WaveSettings();
    _Script_Engine::Actor*& get_Activator();
    static _Script_CoreUObject::Class* static_class();
    bool IsWaveInPreparation();
    float GetWaveTimerRemaining();
    float GetWavePreparationTimerRemaining();
    void* GetWaveNumber();
    void* GetWaveKeys();
    void* GetWaveEndCondition();
}; // Size: 0x400
#pragma pack(pop)
}
