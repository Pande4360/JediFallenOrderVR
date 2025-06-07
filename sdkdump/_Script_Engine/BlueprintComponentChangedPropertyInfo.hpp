#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Struct;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintComponentChangedPropertyInfo {
    private: char pad_0[0x18]; public:
    void* get_PropertyName();
    int32_t& get_ArrayIndex();
    _Script_CoreUObject::Struct*& get_PropertyScope();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
