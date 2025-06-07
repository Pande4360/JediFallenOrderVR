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
struct FontData {
    private: char pad_0[0x20]; public:
    void* get_FontFilename();
    void* get_Hinting();
    void* get_LoadingPolicy();
    int32_t& get_SubFaceIndex();
    _Script_CoreUObject::Object*& get_FontFaceAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
