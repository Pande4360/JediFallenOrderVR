#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_UMG {
struct Widget;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct NamedSlotBinding {
    private: char pad_0[0x10]; public:
    void* get_Name();
    _Script_UMG::Widget*& get_Content();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
