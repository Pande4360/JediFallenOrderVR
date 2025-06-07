#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DecalTrailComponent : public SceneComponent {
    private: char pad_2d0[0x40]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    int32_t& get_SortOrder();
    float& get_FadeScreenSize();
    float& get_TrailWidth();
    float& get_TrailDepth();
    float& get_SegmentLifetime();
    float& get_SegmentFadeDuration();
    float& get_TexcoordVTiling();
    bool get_bWorldSpaceTrail();
    void set_bWorldSpaceTrail(bool value);
    void* get_Trail();
    static _Script_CoreUObject::Class* static_class();
    void SetDecalTrailMaterial(_Script_Engine::MaterialInterface* InMaterial);
    void RemoveAllPoints();
    void AddPoint(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Normal);
}; // Size: 0x310
#pragma pack(pop)
}
