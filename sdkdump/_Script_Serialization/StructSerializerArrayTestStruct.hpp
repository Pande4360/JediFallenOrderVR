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
struct StructSerializerArrayTestStruct {
    private: char pad_0[0x40]; public:
    void* get_Int32Array();
    int32_t& get_StaticSingleElement();
    int32_t& get_StaticInt32Array();
    float& get_StaticFloatArray();
    void* get_VectorArray();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
