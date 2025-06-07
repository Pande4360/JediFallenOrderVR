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
struct MaterialExpressionFunctionOutput : public MaterialExpression {
    private: char pad_40[0x50]; public:
    void* get_OutputName();
    void* get_Description();
    int32_t& get_SortPriority();
    void* get_A();
    bool get_bLastPreviewed();
    void set_bLastPreviewed(bool value);
    void* get_ID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
