#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithMeshBuildSettingsTemplate {
    private: char pad_0[0x10]; public:
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
    bool get_bUseHighPrecisionTangentBasis();
    void set_bUseHighPrecisionTangentBasis(bool value);
    bool get_bUseFullPrecisionUVs();
    void set_bUseFullPrecisionUVs(bool value);
    bool get_bGenerateLightmapUVs();
    void set_bGenerateLightmapUVs(bool value);
    int32_t& get_MinLightmapResolution();
    int32_t& get_SrcLightmapIndex();
    int32_t& get_DstLightmapIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
