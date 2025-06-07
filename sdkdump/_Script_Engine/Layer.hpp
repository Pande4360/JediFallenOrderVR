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
struct Layer : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    void* get_LayerName();
    bool get_bIsVisible();
    void set_bIsVisible(bool value);
    void* get_ActorStats();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
