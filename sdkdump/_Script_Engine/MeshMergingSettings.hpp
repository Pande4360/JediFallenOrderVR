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
struct MeshMergingSettings {
    private: char pad_0[0xcc]; public:
    bool get_bGenerateLightMapUV();
    void set_bGenerateLightMapUV(bool value);
    int32_t& get_TargetLightMapResolution();
    bool get_bComputedLightMapResolution();
    void set_bComputedLightMapResolution(bool value);
    bool get_bImportVertexColors();
    void set_bImportVertexColors(bool value);
    bool get_bPivotPointAtZero();
    void set_bPivotPointAtZero(bool value);
    bool get_bMergePhysicsData();
    void set_bMergePhysicsData(bool value);
    bool get_bMergeMaterials();
    void set_bMergeMaterials(bool value);
    void* get_MaterialSettings();
    bool get_bBakeVertexDataToMesh();
    void set_bBakeVertexDataToMesh(bool value);
    bool get_bUseVertexDataForBakingMaterial();
    void set_bUseVertexDataForBakingMaterial(bool value);
    bool get_bUseTextureBinning();
    void set_bUseTextureBinning(bool value);
    bool get_bReuseMeshLightmapUVs();
    void set_bReuseMeshLightmapUVs(bool value);
    bool get_bMergeEquivalentMaterials();
    void set_bMergeEquivalentMaterials(bool value);
    void* get_OutputUVs();
    int32_t& get_GutterSize();
    bool get_bCalculateCorrectLODModel();
    void set_bCalculateCorrectLODModel(bool value);
    void* get_LODSelectionType();
    int32_t& get_ExportSpecificLOD();
    int32_t& get_SpecificLOD();
    bool get_bUseLandscapeCulling();
    void set_bUseLandscapeCulling(bool value);
    bool get_bIncludeImposters();
    void set_bIncludeImposters(bool value);
    bool get_bAllowDistanceField();
    void set_bAllowDistanceField(bool value);
    bool get_bExportNormalMap();
    void set_bExportNormalMap(bool value);
    bool get_bExportMetallicMap();
    void set_bExportMetallicMap(bool value);
    bool get_bExportRoughnessMap();
    void set_bExportRoughnessMap(bool value);
    bool get_bExportSpecularMap();
    void set_bExportSpecularMap(bool value);
    int32_t& get_MergedMaterialAtlasResolution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xcc
#pragma pack(pop)
}
