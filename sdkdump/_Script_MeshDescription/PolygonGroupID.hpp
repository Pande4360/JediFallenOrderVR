#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ElementID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MeshDescription {
#pragma pack(push, 1)
struct PolygonGroupID : public ElementID {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
