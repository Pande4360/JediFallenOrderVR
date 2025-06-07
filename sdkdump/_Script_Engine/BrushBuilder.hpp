#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BrushBuilder : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    void* get_BitmapFilename();
    void* get_ToolTip();
    bool get_NotifyBadParams();
    void set_NotifyBadParams(bool value);
    void* get_Vertices();
    void* get_Polys();
    void* get_Layer();
    bool get_MergeCoplanars();
    void set_MergeCoplanars(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
