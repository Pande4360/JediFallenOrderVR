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
struct MaterialExpressionFunctionInput : public MaterialExpression {
    private: char pad_40[0x90]; public:
    void* get_Preview();
    void* get_InputName();
    void* get_Description();
    void* get_ID();
    void* get_InputType();
    void* get_PreviewValue();
    bool get_bUsePreviewValueAsDefault();
    void set_bUsePreviewValueAsDefault(bool value);
    int32_t& get_SortPriority();
    bool get_bCompilingFunctionPreview();
    void set_bCompilingFunctionPreview(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
