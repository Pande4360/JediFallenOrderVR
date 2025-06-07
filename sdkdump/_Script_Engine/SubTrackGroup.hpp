#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SubTrackGroup {
    private: char pad_0[0x28]; public:
    void* get_GroupName();
    void* get_TrackIndices();
    bool get_bIsCollapsed();
    void set_bIsCollapsed(bool value);
    bool get_bIsSelected();
    void set_bIsSelected(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
