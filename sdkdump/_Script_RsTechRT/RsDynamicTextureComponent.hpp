#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsDynamicTextureComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x38]; public:
    _Script_Engine::Texture2D*& get_Texture();
    void* get_OriginalMaterials();
    void* get_Target();
    void* get_ParameterName();
    int32_t& get_Width();
    int32_t& get_Height();
    void* get_Format();
    bool get_bPixelFormatFloat();
    void set_bPixelFormatFloat(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::Texture2D* GetTexture();
}; // Size: 0x1a8
#pragma pack(pop)
}
