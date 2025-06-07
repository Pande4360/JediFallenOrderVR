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
struct StructSerializerBuiltinTestStruct {
    private: char pad_0[0x60]; public:
    void* get_Guid();
    void* get_Name();
    void* get_String();
    void* get_Rotator();
    void* get_Text();
    void* get_Vector();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
