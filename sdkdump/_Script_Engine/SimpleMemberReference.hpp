#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SimpleMemberReference {
    private: char pad_0[0x20]; public:
    _Script_CoreUObject::Object*& get_MemberParent();
    void* get_MemberName();
    void* get_MemberGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
