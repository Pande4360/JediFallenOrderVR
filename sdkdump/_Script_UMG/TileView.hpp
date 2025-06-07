#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ListView.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct TileView : public ListView {
    private: char pad_328[0x20]; public:
    float& get_EntryHeight();
    float& get_EntryWidth();
    void* get_TileAlignment();
    bool get_bWrapHorizontalNavigation();
    void set_bWrapHorizontalNavigation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetEntryWidth(float NewWidth);
    void SetEntryHeight(float NewHeight);
}; // Size: 0x348
#pragma pack(pop)
}
