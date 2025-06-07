#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraMeshRendererProperties : public NiagaraRendererProperties {
    private: char pad_30[0x6f0]; public:
    _Script_Engine::StaticMesh*& get_ParticleMesh();
    void* get_SortMode();
    bool get_bOverrideMaterials();
    void set_bOverrideMaterials(bool value);
    bool get_bSortOnlyWhenTranslucent();
    void set_bSortOnlyWhenTranslucent(bool value);
    void* get_OverrideMaterials();
    void* get_FacingMode();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_VelocityBinding();
    void* get_MeshOrientationBinding();
    void* get_ScaleBinding();
    void* get_DynamicMaterialBinding();
    void* get_DynamicMaterial1Binding();
    void* get_DynamicMaterial2Binding();
    void* get_DynamicMaterial3Binding();
    void* get_MaterialRandomBinding();
    void* get_CustomSortingBinding();
    void* get_NormalizedAgeBinding();
    int32_t& get_SyncId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x720
#pragma pack(pop)
}
