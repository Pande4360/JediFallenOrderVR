#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_SwGame {
struct SwMeditationTrainingCamera;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwMeditationTrainingCursor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingGrid : public _Script_Engine::Actor {
    private: char pad_360[0x100]; public:
    void* get_OnCellSelectedChanged();
    void* get_GridSizePresets();
    void* get_Setting();
    void* get_GridCellClass();
    bool get_bUseLegacyGridNavigation();
    void set_bUseLegacyGridNavigation(bool value);
    _Script_SwGame::SwMeditationTrainingCamera*& get_MeditationCamera();
    _Script_SwGame::SwMeditationTrainingCursor*& get_MeditationCursor();
    void* get_Cells();
    static _Script_CoreUObject::Class* static_class();
    void MoveSelection(void* Direction);
    void* GetLabelForGridSize(_Script_CoreUObject::IntPoint GridSize);
    void Display(bool bEnable);
    void ClearCells();
}; // Size: 0x460
#pragma pack(pop)
}
