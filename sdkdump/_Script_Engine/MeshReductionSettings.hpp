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
struct MeshReductionSettings {
    private: char pad_0[0x24]; public:
    float& get_PercentTriangles();
    float& get_MaxDeviation();
    float& get_PixelError();
    float& get_WeldingThreshold();
    float& get_HardAngleThreshold();
    void* get_SilhouetteImportance();
    void* get_TextureImportance();
    void* get_ShadingImportance();
    bool get_bRecalculateNormals();
    void set_bRecalculateNormals(bool value);
    int32_t& get_BaseLODModel();
    bool get_bGenerateUniqueLightmapUVs();
    void set_bGenerateUniqueLightmapUVs(bool value);
    bool get_bKeepSymmetry();
    void set_bKeepSymmetry(bool value);
    bool get_bVisibilityAided();
    void set_bVisibilityAided(bool value);
    bool get_bCullOccluded();
    void set_bCullOccluded(bool value);
    void* get_VisibilityAggressiveness();
    void* get_VertexColorImportance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
