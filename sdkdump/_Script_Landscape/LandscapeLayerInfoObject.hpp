#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeLayerInfoObject : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_LayerName();
    _Script_Engine::PhysicalMaterial*& get_PhysMaterial();
    float& get_Hardness();
    void* get_LayerUsageDebugColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
