#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PropertyBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct TextBinding : public PropertyBinding {
    private: char pad_60[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void* GetTextValue();
    void* GetStringValue();
}; // Size: 0x68
#pragma pack(pop)
}
