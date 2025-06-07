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
struct MaterialExpressionSpeedTree : public MaterialExpression {
    private: char pad_40[0x70]; public:
    void* get_GeometryInput();
    void* get_WindInput();
    void* get_LODInput();
    void* get_ExtraBendWS();
    void* get_GeometryType();
    void* get_WindType();
    void* get_LODType();
    float& get_BillboardThreshold();
    bool get_bAccurateWindVelocities();
    void set_bAccurateWindVelocities(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
