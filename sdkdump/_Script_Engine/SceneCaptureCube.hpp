#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCapture.hpp"
namespace _Script_Engine {
struct SceneCaptureComponentCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCaptureCube : public SceneCapture {
    private: char pad_368[0x8]; public:
    _Script_Engine::SceneCaptureComponentCube*& get_CaptureComponentCube();
    static _Script_CoreUObject::Class* static_class();
    void OnInterpToggle(bool bEnable);
}; // Size: 0x370
#pragma pack(pop)
}
