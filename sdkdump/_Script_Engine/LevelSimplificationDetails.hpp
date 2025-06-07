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
struct LevelSimplificationDetails {
    private: char pad_0[0x134]; public:
    bool get_bCreatePackagePerAsset();
    void set_bCreatePackagePerAsset(bool value);
    float& get_DetailsPercentage();
    void* get_StaticMeshMaterialSettings();
    bool get_bOverrideLandscapeExportLOD();
    void set_bOverrideLandscapeExportLOD(bool value);
    int32_t& get_LandscapeExportLOD();
    void* get_LandscapeMaterialSettings();
    bool get_bBakeFoliageToLandscape();
    void set_bBakeFoliageToLandscape(bool value);
    bool get_bBakeGrassToLandscape();
    void set_bBakeGrassToLandscape(bool value);
    bool get_bGenerateMeshNormalMap();
    void set_bGenerateMeshNormalMap(bool value);
    bool get_bGenerateMeshMetallicMap();
    void set_bGenerateMeshMetallicMap(bool value);
    bool get_bGenerateMeshRoughnessMap();
    void set_bGenerateMeshRoughnessMap(bool value);
    bool get_bGenerateMeshSpecularMap();
    void set_bGenerateMeshSpecularMap(bool value);
    bool get_bGenerateLandscapeNormalMap();
    void set_bGenerateLandscapeNormalMap(bool value);
    bool get_bGenerateLandscapeMetallicMap();
    void set_bGenerateLandscapeMetallicMap(bool value);
    bool get_bGenerateLandscapeRoughnessMap();
    void set_bGenerateLandscapeRoughnessMap(bool value);
    bool get_bGenerateLandscapeSpecularMap();
    void set_bGenerateLandscapeSpecularMap(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x134
#pragma pack(pop)
}
