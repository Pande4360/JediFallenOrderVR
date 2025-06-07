#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleTypeDataBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleTypeDataRibbon : public ParticleModuleTypeDataBase {
    private: char pad_30[0x30]; public:
    int32_t& get_MaxTessellationBetweenParticles();
    int32_t& get_SheetsPerTrail();
    int32_t& get_MaxTrailCount();
    int32_t& get_MaxParticleInTrailCount();
    bool get_bDeadTrailsOnDeactivate();
    void set_bDeadTrailsOnDeactivate(bool value);
    bool get_bDeadTrailsOnSourceLoss();
    void set_bDeadTrailsOnSourceLoss(bool value);
    bool get_bClipSourceSegement();
    void set_bClipSourceSegement(bool value);
    bool get_bEnablePreviousTangentRecalculation();
    void set_bEnablePreviousTangentRecalculation(bool value);
    bool get_bTangentRecalculationEveryFrame();
    void set_bTangentRecalculationEveryFrame(bool value);
    bool get_bSpawnInitialParticle();
    void set_bSpawnInitialParticle(bool value);
    void* get_RenderAxis();
    float& get_TangentSpawningScalar();
    bool get_bRenderGeometry();
    void set_bRenderGeometry(bool value);
    bool get_bRenderSpawnPoints();
    void set_bRenderSpawnPoints(bool value);
    bool get_bRenderTangents();
    void set_bRenderTangents(bool value);
    bool get_bRenderTessellation();
    void set_bRenderTessellation(bool value);
    float& get_TilingDistance();
    float& get_DistanceTessellationStepSize();
    bool get_bEnableTangentDiffInterpScale();
    void set_bEnableTangentDiffInterpScale(bool value);
    float& get_TangentTessellationScalar();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
