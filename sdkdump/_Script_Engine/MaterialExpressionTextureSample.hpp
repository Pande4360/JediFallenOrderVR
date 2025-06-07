#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionTextureBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionTextureSample : public MaterialExpressionTextureBase {
    private: char pad_50[0xa8]; public:
    void* get_Coordinates();
    void* get_TextureObject();
    void* get_MipValue();
    void* get_CoordinatesDX();
    void* get_CoordinatesDY();
    void* get_AutomaticViewMipBiasValue();
    void* get_MipValueMode();
    void* get_SamplerSource();
    void* get_ConstCoordinate();
    int32_t& get_ConstMipValue();
    bool get_AutomaticViewMipBias();
    void set_AutomaticViewMipBias(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
