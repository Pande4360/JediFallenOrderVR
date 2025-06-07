#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Overlays.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Overlay {
#pragma pack(push, 1)
struct BasicOverlays : public Overlays {
    private: char pad_28[0x10]; public:
    void* get_Overlays();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
