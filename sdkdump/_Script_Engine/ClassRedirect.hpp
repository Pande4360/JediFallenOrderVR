#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ClassRedirect {
    private: char pad_0[0x40]; public:
    void* get_ObjectName();
    void* get_OldClassName();
    void* get_NewClassName();
    void* get_OldSubobjName();
    void* get_NewSubobjName();
    void* get_NewClassClass();
    void* get_NewClassPackage();
    bool get_InstanceOnly();
    void set_InstanceOnly(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
