#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LayerBlendInput {
    private: char pad_0[0x58]; public:
    void* get_LayerName();
    void* get_BlendType();
    void* get_LayerInput();
    void* get_HeightInput();
    float& get_PreviewWeight();
    void* get_ConstLayerInput();
    float& get_ConstHeightInput();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
