#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextureRenderTarget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TextureRenderTargetCube : public TextureRenderTarget {
    private: char pad_b8[0x18]; public:
    int32_t& get_SizeX();
    void* get_ClearColor();
    void* get_OverrideFormat();
    bool get_bHDR();
    void set_bHDR(bool value);
    bool get_bForceLinearGamma();
    void set_bForceLinearGamma(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
