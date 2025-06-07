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
struct MaterialExpressionTextureCoordinate : public MaterialExpression {
    private: char pad_40[0x10]; public:
    int32_t& get_CoordinateIndex();
    float& get_UTiling();
    float& get_VTiling();
    bool get_UnMirrorU();
    void set_UnMirrorU(bool value);
    bool get_UnMirrorV();
    void set_UnMirrorV(bool value);
    bool get_ContainsPackedData();
    void set_ContainsPackedData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
