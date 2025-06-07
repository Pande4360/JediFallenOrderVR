#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct CompositeFont {
    private: char pad_0[0x38]; public:
    void* get_DefaultTypeface();
    void* get_FallbackTypeface();
    void* get_SubTypefaces();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
