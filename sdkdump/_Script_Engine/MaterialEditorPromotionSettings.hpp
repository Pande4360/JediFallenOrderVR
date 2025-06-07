#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialEditorPromotionSettings {
    private: char pad_0[0x30]; public:
    void* get_DefaultMaterialAsset();
    void* get_DefaultDiffuseTexture();
    void* get_DefaultNormalTexture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
