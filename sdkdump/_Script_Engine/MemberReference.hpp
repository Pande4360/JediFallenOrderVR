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
struct MemberReference {
    private: char pad_0[0x38]; public:
    _Script_CoreUObject::Object*& get_MemberParent();
    void* get_MemberScope();
    void* get_MemberName();
    void* get_MemberGuid();
    bool get_bSelfContext();
    void set_bSelfContext(bool value);
    bool get_bWasDeprecated();
    void set_bWasDeprecated(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
