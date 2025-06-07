#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingWaveSetting {
    private: char pad_0[0x20]; public:
    float& get_WaveTimer();
    float& get_WavePreparationTimer();
    void* get_MaxWaves();
    void* get_MaxToken();
    void* get_TokenIncrease();
    _Script_Engine::DataTable*& get_WaveDefinition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
