#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "SwMeditationTrainingLayout.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingLayoutSystem : public _Script_Engine::Actor {
    private: char pad_360[0x60]; public:
    int32_t& get_MaxLayoutSlots();
    void* get_SavedLayouts();
    int32_t& get_LastUsedLayoutSlot();
    bool get_bHasUnsavedChanges();
    void set_bHasUnsavedChanges(bool value);
    void* get_CurrentLayout();
    static _Script_CoreUObject::Class* static_class();
    void SaveLayoutToSlot(int32_t LayoutSlot, _Script_SwGame::SwMeditationTrainingLayout LayoutToSave);
    void SaveLayoutSystemToDisk();
    void RequireSavePrompt();
    void LoadLayoutSystemFromDisk();
    void LoadLayoutFromSlot(int32_t LayoutSlot, _Script_SwGame::SwMeditationTrainingLayout& OutLayout);
    void GetLayoutDebugString(_Script_SwGame::SwMeditationTrainingLayout Layout);
}; // Size: 0x3c0
#pragma pack(pop)
}
