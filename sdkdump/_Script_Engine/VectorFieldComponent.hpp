#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct VectorField;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VectorFieldComponent : public PrimitiveComponent {
    private: char pad_b30[0x20]; public:
    _Script_Engine::VectorField*& get_VectorField();
    float& get_Intensity();
    float& get_Tightness();
    bool get_bPreviewVectorField();
    void set_bPreviewVectorField(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetIntensity(float NewIntensity);
}; // Size: 0xb50
#pragma pack(pop)
}
