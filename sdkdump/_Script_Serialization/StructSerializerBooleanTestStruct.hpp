#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Serialization {
#pragma pack(push, 1)
struct StructSerializerBooleanTestStruct {
    private: char pad_0[0x8]; public:
    bool get_BoolFalse();
    void set_BoolFalse(bool value);
    bool get_BoolTrue();
    void set_BoolTrue(bool value);
    void* get_Bitfield();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
