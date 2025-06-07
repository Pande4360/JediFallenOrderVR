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
namespace _Script_Engine {
#pragma pack(push, 1)
struct EventGraphFastCallPair {
    private: char pad_0[0x10]; public:
    _Script_CoreUObject::Function*& get_FunctionToPatch();
    int32_t& get_EventGraphCallOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
