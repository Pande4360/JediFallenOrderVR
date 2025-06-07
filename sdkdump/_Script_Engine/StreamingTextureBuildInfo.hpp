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
struct StreamingTextureBuildInfo {
    private: char pad_0[0xc]; public:
    void* get_PackedRelativeBox();
    int32_t& get_TextureLevelIndex();
    float& get_TexelFactor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
