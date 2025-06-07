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
struct FontRenderInfo {
    private: char pad_0[0x28]; public:
    bool get_bClipText();
    void set_bClipText(bool value);
    bool get_bEnableShadow();
    void set_bEnableShadow(bool value);
    void* get_GlowInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
