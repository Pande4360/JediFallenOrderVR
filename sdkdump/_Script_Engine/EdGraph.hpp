#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EdGraph : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_Schema();
    void* get_Nodes();
    bool get_bEditable();
    void set_bEditable(bool value);
    bool get_bAllowDeletion();
    void set_bAllowDeletion(bool value);
    bool get_bAllowRenaming();
    void set_bAllowRenaming(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
