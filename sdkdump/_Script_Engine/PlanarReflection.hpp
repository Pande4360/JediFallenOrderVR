#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCapture.hpp"
namespace _Script_Engine {
struct PlanarReflectionComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlanarReflection : public SceneCapture {
    private: char pad_368[0x10]; public:
    _Script_Engine::PlanarReflectionComponent*& get_PlanarReflectionComponent();
    bool get_bShowPreviewPlane();
    void set_bShowPreviewPlane(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnInterpToggle(bool bEnable);
}; // Size: 0x378
#pragma pack(pop)
}
