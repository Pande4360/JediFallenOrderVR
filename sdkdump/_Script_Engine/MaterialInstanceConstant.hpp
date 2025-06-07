#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "MaterialInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialInstanceConstant : public MaterialInstance {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::LinearColor K2_GetVectorParameterValue(void* ParameterName);
    _Script_Engine::Texture* K2_GetTextureParameterValue(void* ParameterName);
    float K2_GetScalarParameterValue(void* ParameterName);
}; // Size: 0x200
#pragma pack(pop)
}
