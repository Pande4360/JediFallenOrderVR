#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ConvolutionBloomSettings {
    private: char pad_0[0x28]; public:
    _Script_Engine::Texture2D*& get_Texture();
    float& get_Size();
    void* get_CenterUV();
    float& get_PreFilterMin();
    float& get_PreFilterMax();
    float& get_PreFilterMult();
    float& get_BufferScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
