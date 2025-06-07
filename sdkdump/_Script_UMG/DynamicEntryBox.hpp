#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct DynamicEntryBox : public Widget {
    private: char pad_100[0xd0]; public:
    void* get_EntryBoxType();
    void* get_EntrySpacing();
    void* get_SpacingPattern();
    void* get_EntrySizeRule();
    void* get_EntryHorizontalAlignment();
    void* get_EntryVerticalAlignment();
    int32_t& get_MaxElementSize();
    void* get_EntryWidgetClass();
    static _Script_CoreUObject::Class* static_class();
    void SetEntrySpacing(_Script_CoreUObject::Vector2D& InEntrySpacing);
    void Reset(bool bDeleteWidgets);
    void RemoveEntry(_Script_UMG::UserWidget* EntryWidget);
    int32_t GetNumEntries();
    void* GetAllEntries();
    _Script_UMG::UserWidget* BP_CreateEntryOfClass(void* EntryClass);
    _Script_UMG::UserWidget* BP_CreateEntry();
}; // Size: 0x1d0
#pragma pack(pop)
}
