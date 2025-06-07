#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCapture.hpp"
namespace _Script_Engine {
struct DrawSphereComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SphereReflectionCapture : public ReflectionCapture {
    private: char pad_368[0x8]; public:
    _Script_Engine::DrawSphereComponent*& get_DrawCaptureRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
