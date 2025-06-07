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
struct StaticMeshOptimizationSettings {
    private: char pad_0[0x1c]; public:
    void* get_ReductionMethod();
    float& get_NumOfTrianglesPercentage();
    float& get_MaxDeviationPercentage();
    float& get_WeldingThreshold();
    bool get_bRecalcNormals();
    void set_bRecalcNormals(bool value);
    float& get_NormalsThreshold();
    void* get_SilhouetteImportance();
    void* get_TextureImportance();
    void* get_ShadingImportance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
