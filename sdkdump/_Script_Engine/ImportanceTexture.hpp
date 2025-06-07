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
struct ImportanceTexture {
    private: char pad_0[0x50]; public:
    void* get_Size();
    int32_t& get_NumMips();
    void* get_MarginalCDF();
    void* get_ConditionalCDF();
    void* get_TextureData();
    void* get_Texture();
    void* get_Weighting();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
