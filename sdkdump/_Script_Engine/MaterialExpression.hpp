#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Material;
}
namespace _Script_Engine {
struct MaterialFunction;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpression : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    _Script_Engine::Material*& get_Material();
    _Script_Engine::MaterialFunction*& get_Function();
    bool get_bIsParameterExpression();
    void set_bIsParameterExpression(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
