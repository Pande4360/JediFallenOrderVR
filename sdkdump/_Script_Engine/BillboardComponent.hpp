#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BillboardComponent : public PrimitiveComponent {
    private: char pad_b30[0x20]; public:
    _Script_Engine::Texture2D*& get_Sprite();
    bool get_bIsScreenSizeScaled();
    void set_bIsScreenSizeScaled(bool value);
    float& get_ScreenSize();
    float& get_U();
    float& get_UL();
    float& get_V();
    float& get_VL();
    static _Script_CoreUObject::Class* static_class();
    void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
    void SetSpriteAndUV(_Script_Engine::Texture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
    void SetSprite(_Script_Engine::Texture2D* NewSprite);
}; // Size: 0xb50
#pragma pack(pop)
}
