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
struct TextureRenderTarget2D : public TextureRenderTarget {
    private: char pad_b8[0x28]; public:
    int32_t& get_SizeX();
    int32_t& get_SizeY();
    void* get_ClearColor();
    void* get_AddressX();
    void* get_AddressY();
    bool get_bForceLinearGamma();
    void set_bForceLinearGamma(bool value);
    bool get_bHDR();
    void set_bHDR(bool value);
    bool get_bGPUSharedFlag();
    void set_bGPUSharedFlag(bool value);
    bool get_bAutoGenerateMips();
    void set_bAutoGenerateMips(bool value);
    void* get_RenderTargetFormat();
    void* get_OverrideFormat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
