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
struct CollisionResponseTemplate {
    private: char pad_0[0x60]; public:
    void* get_Name();
    void* get_CollisionEnabled();
    void* get_ObjectTypeName();
    void* get_CustomResponses();
    void* get_HelpMessage();
    bool get_bCanModify();
    void set_bCanModify(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
