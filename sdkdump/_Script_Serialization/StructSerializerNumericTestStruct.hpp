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
struct StructSerializerNumericTestStruct {
    private: char pad_0[0x30]; public:
    void* get_Int8();
    void* get_Int16();
    int32_t& get_Int32();
    void* get_Int64();
    void* get_UInt8();
    void* get_UInt16();
    void* get_UInt32();
    void* get_UInt64();
    float& get_Float();
    double& get_Double();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
