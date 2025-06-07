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
struct InterpGroup : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_InterpTracks();
    void* get_GroupName();
    void* get_GroupColor();
    bool get_bCollapsed();
    void set_bCollapsed(bool value);
    bool get_bVisible();
    void set_bVisible(bool value);
    bool get_bIsFolder();
    void set_bIsFolder(bool value);
    bool get_bIsParented();
    void set_bIsParented(bool value);
    bool get_bIsSelected();
    void set_bIsSelected(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
