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
struct MaterialExpressionLandscapeLayerWeight : public _Script_Engine::MaterialExpression {
    private: char pad_40[0x58]; public:
    void* get_base();
    void* get_Layer();
    void* get_ParameterName();
    float& get_PreviewWeight();
    void* get_ConstBase();
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
