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
struct RsWorldWidgetPool : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    void* get_WidgetCounts();
    void* get_ActiveWidgets();
    void* get_InActiveWidgets();
    void* get_InActiveWidgetClasses();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
