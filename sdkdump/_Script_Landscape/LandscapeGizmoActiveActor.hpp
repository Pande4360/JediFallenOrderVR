#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LandscapeGizmoActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeGizmoActiveActor : public LandscapeGizmoActor {
    private: char pad_360[0x50]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b0
#pragma pack(pop)
}
