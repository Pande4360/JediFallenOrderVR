#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCaptureComponent.hpp"
namespace _Script_Engine {
struct TextureRenderTargetCube;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCaptureComponentCube : public SceneCaptureComponent {
    private: char pad_390[0x20]; public:
    _Script_Engine::TextureRenderTargetCube*& get_TextureTarget();
    _Script_Engine::TextureRenderTargetCube*& get_TextureTargetLeft();
    _Script_Engine::TextureRenderTargetCube*& get_TextureTargetRight();
    _Script_Engine::TextureRenderTarget2D*& get_TextureTargetODS();
    float& get_IPD();
    static _Script_CoreUObject::Class* static_class();
    void CaptureScene();
}; // Size: 0x3b0
#pragma pack(pop)
}
