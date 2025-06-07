#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Function;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsFunctionReference {
    private: char pad_0[0x30]; public:
    void* get_Class();
    _Script_CoreUObject::Function*& get_FunctionSignature();
    _Script_CoreUObject::Function*& get_FunctionWithReturnAsRefSignature();
    void* get_FunctionName();
    void* get_FunctionGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
