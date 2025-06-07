#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCaptureComponent.hpp"
namespace _Script_Engine {
struct DrawSphereComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlaneReflectionCaptureComponent : public ReflectionCaptureComponent {
    private: char pad_340[0x10]; public:
    float& get_InfluenceRadiusScale();
    _Script_Engine::DrawSphereComponent*& get_PreviewInfluenceRadius();
    _Script_Engine::BoxComponent*& get_PreviewCaptureBox();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x350
#pragma pack(pop)
}
