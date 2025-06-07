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
struct MaterialProxySettings {
    private: char pad_0[0x8c]; public:
    void* get_TextureSize();
    void* get_TextureSizingType();
    float& get_GutterSpace();
    bool get_bNormalMap();
    void set_bNormalMap(bool value);
    bool get_bMetallicMap();
    void set_bMetallicMap(bool value);
    float& get_MetallicConstant();
    bool get_bRoughnessMap();
    void set_bRoughnessMap(bool value);
    float& get_RoughnessConstant();
    bool get_bSpecularMap();
    void set_bSpecularMap(bool value);
    float& get_SpecularConstant();
    bool get_bEmissiveMap();
    void set_bEmissiveMap(bool value);
    bool get_bOpacityMap();
    void set_bOpacityMap(bool value);
    float& get_OpacityConstant();
    bool get_bOpacityMaskMap();
    void set_bOpacityMaskMap(bool value);
    float& get_OpacityMaskConstant();
    bool get_bAmbientOcclusionMap();
    void set_bAmbientOcclusionMap(bool value);
    float& get_AmbientOcclusionConstant();
    void* get_DiffuseTextureSize();
    void* get_NormalTextureSize();
    void* get_MetallicTextureSize();
    void* get_RoughnessTextureSize();
    void* get_SpecularTextureSize();
    void* get_EmissiveTextureSize();
    void* get_OpacityTextureSize();
    void* get_OpacityMaskTextureSize();
    void* get_AmbientOcclusionTextureSize();
    void* get_MaterialMergeType();
    void* get_BlendMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8c
#pragma pack(pop)
}
