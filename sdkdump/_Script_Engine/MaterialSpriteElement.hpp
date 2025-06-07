#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialSpriteElement {
    private: char pad_0[0x28]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    _Script_Engine::CurveFloat*& get_DistanceToOpacityCurve();
    bool get_bSizeIsInScreenSpace();
    void set_bSizeIsInScreenSpace(bool value);
    float& get_BaseSizeX();
    float& get_BaseSizeY();
    _Script_Engine::CurveFloat*& get_DistanceToSizeCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
