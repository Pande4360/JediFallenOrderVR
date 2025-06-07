#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialFunctionInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialFunctionInfo {
    private: char pad_0[0x18]; public:
    void* get_StateId();
    _Script_Engine::MaterialFunctionInterface*& get_Function();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
