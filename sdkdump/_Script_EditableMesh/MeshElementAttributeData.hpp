#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct MeshElementAttributeData {
    private: char pad_0[0x60]; public:
    void* get_AttributeName();
    int32_t& get_AttributeIndex();
    void* get_AttributeValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
