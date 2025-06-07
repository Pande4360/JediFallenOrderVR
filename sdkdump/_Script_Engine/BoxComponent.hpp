#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ShapeComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BoxComponent : public ShapeComponent {
    private: char pad_b80[0x10]; public:
    void* get_BoxExtent();
    float& get_LineThickness();
    static _Script_CoreUObject::Class* static_class();
    void SetBoxExtent(_Script_CoreUObject::Vector InBoxExtent, bool bUpdateOverlaps);
    _Script_CoreUObject::Vector GetUnscaledBoxExtent();
    _Script_CoreUObject::Vector GetScaledBoxExtent();
}; // Size: 0xb90
#pragma pack(pop)
}
