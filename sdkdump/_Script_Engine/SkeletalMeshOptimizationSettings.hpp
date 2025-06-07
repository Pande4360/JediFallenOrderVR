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
struct SkeletalMeshOptimizationSettings {
    private: char pad_0[0x20]; public:
    float& get_NumOfTrianglesPercentage();
    float& get_MaxDeviationPercentage();
    void* get_ReductionMethod();
    void* get_SilhouetteImportance();
    void* get_TextureImportance();
    void* get_ShadingImportance();
    void* get_SkinningImportance();
    bool get_bRemapMorphTargets();
    void set_bRemapMorphTargets(bool value);
    bool get_bRecalcNormals();
    void set_bRecalcNormals(bool value);
    float& get_WeldingThreshold();
    float& get_NormalsThreshold();
    int32_t& get_MaxBonesPerVertex();
    int32_t& get_BaseLOD();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
