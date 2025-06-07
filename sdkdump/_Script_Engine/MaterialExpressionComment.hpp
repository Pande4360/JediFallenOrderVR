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
struct MaterialExpressionComment : public MaterialExpression {
    private: char pad_40[0x30]; public:
    int32_t& get_SizeX();
    int32_t& get_SizeY();
    void* get_Text();
    void* get_CommentColor();
    int32_t& get_FontSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
