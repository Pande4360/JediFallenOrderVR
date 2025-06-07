#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwWorldMapIndicatorComponent : public _Script_RsGameTechRT::RsWorldMapStaticMeshComponent {
    static _Script_CoreUObject::Class* static_class();
    void UpdateIndicatorTransform(_Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation, bool bYawRotationOnly);
}; // Size: 0xbd0
#pragma pack(pop)
}
