#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionMaterialAttributeLayers : public MaterialExpression {
    private: char pad_40[0xb0]; public:
    void* get_ParameterName();
    void* get_ExpressionGUID();
    void* get_Input();
    void* get_DefaultLayers();
    void* get_LayerCallers();
    int32_t& get_NumActiveLayerCallers();
    void* get_BlendCallers();
    int32_t& get_NumActiveBlendCallers();
    bool get_bIsLayerGraphBuilt();
    void set_bIsLayerGraphBuilt(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
