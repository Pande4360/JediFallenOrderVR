#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionTextureBase : public MaterialExpression {
    private: char pad_40[0x10]; public:
    _Script_Engine::Texture*& get_Texture();
    void* get_SamplerType();
    bool get_IsDefaultMeshpaintTexture();
    void set_IsDefaultMeshpaintTexture(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
