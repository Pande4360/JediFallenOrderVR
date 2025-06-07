#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_Engine {
struct MaterialParameterCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionCollectionParameter : public MaterialExpression {
    private: char pad_40[0x20]; public:
    _Script_Engine::MaterialParameterCollection*& get_Collection();
    void* get_ParameterName();
    void* get_ParameterId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
