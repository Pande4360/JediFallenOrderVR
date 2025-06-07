#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RichTextStyleRow : public _Script_Engine::TableRowBase {
    private: char pad_8[0x1f0]; public:
    void* get_TextStyle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1f8
#pragma pack(pop)
}
