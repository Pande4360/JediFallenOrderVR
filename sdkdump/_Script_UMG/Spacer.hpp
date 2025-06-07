#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Spacer : public Widget {
    private: char pad_100[0x18]; public:
    void* get_Size();
    static _Script_CoreUObject::Class* static_class();
    void SetSize(_Script_CoreUObject::Vector2D InSize);
}; // Size: 0x118
#pragma pack(pop)
}
