#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct MaterialExpressionLandscapeLayerCoords : public _Script_Engine::MaterialExpression {
    private: char pad_40[0x18]; public:
    void* get_MappingType();
    void* get_CustomUVType();
    float& get_MappingScale();
    float& get_MappingRotation();
    float& get_MappingPanU();
    float& get_MappingPanV();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
