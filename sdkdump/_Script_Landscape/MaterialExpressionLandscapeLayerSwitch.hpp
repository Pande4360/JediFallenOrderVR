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
struct MaterialExpressionLandscapeLayerSwitch : public _Script_Engine::MaterialExpression {
    private: char pad_40[0x50]; public:
    void* get_LayerUsed();
    void* get_LayerNotUsed();
    void* get_ParameterName();
    bool get_PreviewUsed();
    void set_PreviewUsed(bool value);
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
