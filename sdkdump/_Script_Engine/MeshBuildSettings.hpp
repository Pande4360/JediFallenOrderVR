#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshBuildSettings {
    private: char pad_0[0x30]; public:
    bool get_bUseMikkTSpace();
    void set_bUseMikkTSpace(bool value);
    bool get_bRecomputeNormals();
    void set_bRecomputeNormals(bool value);
    bool get_bRecomputeTangents();
    void set_bRecomputeTangents(bool value);
    bool get_bRemoveDegenerates();
    void set_bRemoveDegenerates(bool value);
    bool get_bBuildAdjacencyBuffer();
    void set_bBuildAdjacencyBuffer(bool value);
    bool get_bBuildReversedIndexBuffer();
    void set_bBuildReversedIndexBuffer(bool value);
    bool get_bOmitTangentBasis();
    void set_bOmitTangentBasis(bool value);
    bool get_bUseHighPrecisionTangentBasis();
    void set_bUseHighPrecisionTangentBasis(bool value);
    bool get_bUseFullPrecisionUVs();
    void set_bUseFullPrecisionUVs(bool value);
    bool get_bGenerateLightmapUVs();
    void set_bGenerateLightmapUVs(bool value);
    bool get_bGenerateDistanceFieldAsIfTwoSided();
    void set_bGenerateDistanceFieldAsIfTwoSided(bool value);
    int32_t& get_MinLightmapResolution();
    int32_t& get_SrcLightmapIndex();
    int32_t& get_DstLightmapIndex();
    float& get_BuildScale();
    void* get_BuildScale3D();
    float& get_DistanceFieldResolutionScale();
    _Script_Engine::StaticMesh*& get_DistanceFieldReplacementMesh();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
