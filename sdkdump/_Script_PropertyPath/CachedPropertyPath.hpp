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
namespace _Script_PropertyPath {
#pragma pack(push, 1)
struct CachedPropertyPath {
    private: char pad_0[0x28]; public:
    void* get_Segments();
    _Script_CoreUObject::Function*& get_CachedFunction();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
