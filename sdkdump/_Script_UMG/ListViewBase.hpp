#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ListViewBase : public Widget {
    private: char pad_100[0x108]; public:
    void* get_EntryWidgetClass();
    void* get_BP_OnEntryGenerated();
    void* get_BP_OnEntryReleased();
    static _Script_CoreUObject::Class* static_class();
    void ScrollToTop();
    void ScrollToBottom();
    void RegenerateAllEntries();
    void* GetDisplayedEntryWidgets();
}; // Size: 0x208
#pragma pack(pop)
}
