#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplinesComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0x30]; public:
    void* get_ControlPoints();
    void* get_Segments();
    void* get_CookedForeignMeshComponents();
    static _Script_CoreUObject::Class* static_class();
    void* GetSplineMeshComponents();
}; // Size: 0xb60
#pragma pack(pop)
}
