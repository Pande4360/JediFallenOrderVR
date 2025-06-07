#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MeshComponent.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticMeshComponent : public MeshComponent {
    private: char pad_b60[0x70]; public:
    int32_t& get_ForcedLodModel();
    int32_t& get_PreviousLODLevel();
    int32_t& get_MinLOD();
    int32_t& get_SubDivisionStepSize();
    _Script_Engine::StaticMesh*& get_StaticMesh();
    void* get_WireframeColorOverride();
    bool get_bOverrideWireframeColor();
    void set_bOverrideWireframeColor(bool value);
    bool get_bOverrideMinLod();
    void set_bOverrideMinLod(bool value);
    bool get_bOverrideNavigationExport();
    void set_bOverrideNavigationExport(bool value);
    bool get_bForceNavigationObstacle();
    void set_bForceNavigationObstacle(bool value);
    bool get_bDisallowMeshPaintPerInstance();
    void set_bDisallowMeshPaintPerInstance(bool value);
    bool get_bIgnoreInstanceForTextureStreaming();
    void set_bIgnoreInstanceForTextureStreaming(bool value);
    bool get_bOverrideLightMapRes();
    void set_bOverrideLightMapRes(bool value);
    bool get_bCastDistanceFieldIndirectShadow();
    void set_bCastDistanceFieldIndirectShadow(bool value);
    bool get_bOverrideDistanceFieldSelfShadowBias();
    void set_bOverrideDistanceFieldSelfShadowBias(bool value);
    bool get_bUseSubDivisions();
    void set_bUseSubDivisions(bool value);
    bool get_bUseDefaultCollision();
    void set_bUseDefaultCollision(bool value);
    bool get_bReverseCulling();
    void set_bReverseCulling(bool value);
    int32_t& get_OverriddenLightMapRes();
    float& get_DistanceFieldIndirectShadowMinVisibility();
    float& get_DistanceFieldSelfShadowBias();
    float& get_StreamingDistanceMultiplier();
    void* get_LODData();
    void* get_StreamingTextureData();
    void* get_LightmassSettings();
    static _Script_CoreUObject::Class* static_class();
    bool SetStaticMesh(_Script_Engine::StaticMesh* NewMesh);
    void SetReverseCulling(bool ReverseCulling);
    void SetForcedLodModel(int32_t NewForcedLodModel);
    void SetDistanceFieldSelfShadowBias(float NewValue);
    void OnRep_StaticMesh(_Script_Engine::StaticMesh* OldStaticMesh);
    void GetLocalBounds(_Script_CoreUObject::Vector& Min, _Script_CoreUObject::Vector& Max);
}; // Size: 0xbd0
#pragma pack(pop)
}
