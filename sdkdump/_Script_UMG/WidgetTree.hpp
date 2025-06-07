#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_UMG {
struct Widget;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetTree : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    _Script_UMG::Widget*& get_RootWidget();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
