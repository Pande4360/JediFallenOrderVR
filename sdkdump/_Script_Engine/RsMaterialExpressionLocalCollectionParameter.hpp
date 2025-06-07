#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_Engine {
struct RsMaterialParameterLocalCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsMaterialExpressionLocalCollectionParameter : public MaterialExpression {
    private: char pad_40[0x28]; public:
    _Script_Engine::RsMaterialParameterLocalCollection*& get_Collection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
