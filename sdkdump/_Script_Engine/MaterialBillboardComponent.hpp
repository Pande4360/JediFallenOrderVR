#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialBillboardComponent : public PrimitiveComponent {
    private: char pad_b30[0x10]; public:
    void* get_Elements();
    static _Script_CoreUObject::Class* static_class();
    void SetElements(void*& NewElements);
    void AddElement(_Script_Engine::MaterialInterface* Material, _Script_Engine::CurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, _Script_Engine::CurveFloat* DistanceToSizeCurve);
}; // Size: 0xb40
#pragma pack(pop)
}
