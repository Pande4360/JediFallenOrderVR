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
struct IntSerialization : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_UnsignedInt16Variable();
    void* get_UnsignedInt32Variable();
    void* get_UnsignedInt64Variable();
    void* get_SignedInt8Variable();
    void* get_SignedInt16Variable();
    void* get_SignedInt64Variable();
    void* get_UnsignedInt8Variable();
    int32_t& get_SignedInt32Variable();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
