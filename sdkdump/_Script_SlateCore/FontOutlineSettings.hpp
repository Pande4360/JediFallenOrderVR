#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct FontOutlineSettings {
    private: char pad_0[0x28]; public:
    int32_t& get_OutlineSize();
    _Script_CoreUObject::Object*& get_OutlineMaterial();
    void* get_OutlineColor();
    bool get_bSeparateFillAlpha();
    void set_bSeparateFillAlpha(bool value);
    bool get_bApplyOutlineToDropShadows();
    void set_bApplyOutlineToDropShadows(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
