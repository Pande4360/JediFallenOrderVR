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
struct LandscapeHeightfieldCollisionComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0xe0]; public:
    void* get_ComponentLayerInfos();
    int32_t& get_SectionBaseX();
    int32_t& get_SectionBaseY();
    int32_t& get_CollisionSizeQuads();
    float& get_CollisionScale();
    int32_t& get_SimpleCollisionSizeQuads();
    void* get_CollisionQuadFlags();
    void* get_HeightfieldGuid();
    void* get_CachedLocalBox();
    void* get_RenderComponent();
    void* get_CookedPhysicalMaterials();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc10
#pragma pack(pop)
}
