#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SafeZone : public ContentWidget {
    private: char pad_118[0x18]; public:
    bool get_PadLeft();
    void set_PadLeft(bool value);
    bool get_PadRight();
    void set_PadRight(bool value);
    bool get_PadTop();
    void set_PadTop(bool value);
    bool get_PadBottom();
    void set_PadBottom(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
}; // Size: 0x130
#pragma pack(pop)
}
