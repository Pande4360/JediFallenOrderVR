#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialParameterCollection : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_StateId();
    void* get_ScalarParameters();
    void* get_VectorParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
