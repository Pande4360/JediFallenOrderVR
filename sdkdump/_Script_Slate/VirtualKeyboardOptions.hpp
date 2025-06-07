#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Slate {
#pragma pack(push, 1)
struct VirtualKeyboardOptions {
    private: char pad_0[0x1]; public:
    bool get_bEnableAutocorrect();
    void set_bEnableAutocorrect(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
