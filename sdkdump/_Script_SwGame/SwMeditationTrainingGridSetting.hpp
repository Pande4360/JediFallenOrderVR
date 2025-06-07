#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingGridSetting {
    private: char pad_0[0x44]; public:
    void* get_GridSize();
    void* get_DisabledCells();
    float& get_CellSize();
    float& get_CellSizeMultiplier();
    void* get_BaseColor();
    void* get_OccupiedColor();
    void* get_AvailableColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x44
#pragma pack(pop)
}
