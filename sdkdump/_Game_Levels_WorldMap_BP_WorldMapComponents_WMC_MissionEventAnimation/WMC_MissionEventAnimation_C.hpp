#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveVector;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation {
#pragma pack(push, 1)
struct WMC_MissionEventAnimation_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x1e8]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_MissionObjectiveDirectionActors();
    void* get_MissionEventActorToLocation();
    void* get_MissionEventActorToRotation();
    void* get_MissionEventActorToZoom();
    void* get_BeginLocation();
    void* get_TraverseLocation();
    void* get_EndLocation();
    void* get_BeginRotation();
    void* get_TraverseRotation();
    void* get_EndRotation();
    float& get_BeginScale();
    float& get_TraverseScale();
    float& get_EndScale();
    float& get_InterpSpeed();
    float& get_InterpMovement();
    bool get_bStartInterp();
    void set_bStartInterp(bool value);
    void* get_CurrentLocation();
    void* get_CurrentRotation();
    float& get_CurrentScale();
    bool get_bPause();
    void set_bPause(bool value);
    float& get_InterpSpeedMult();
    _Script_Engine::CurveFloat*& get_ScaleCurve();
    _Script_Engine::CurveFloat*& get_RotationCurve();
    _Script_Engine::CurveFloat*& get_VelocityCurve();
    _Script_Engine::CurveVector*& get_LocationCurve();
    bool get_bAddRotationOffset();
    void set_bAddRotationOffset(bool value);
    float& get_CurrentRotateZ();
    float& get_AddRotateZ();
    _Script_Engine::CurveFloat*& get_ScaleOutCurve();
    float& get_ScaleOutInterp();
    bool get_bScaleOut();
    void set_bScaleOut(bool value);
    bool get_bReverse();
    void set_bReverse(bool value);
    float& get_SpeedBackToArrow();
    float& get_BackTo90();
    bool get_bBackTo90();
    void set_bBackTo90(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetMissionEventRotation();
    void SetInitialValues();
    void Interp();
    void ReceiveBeginPlay0();
    void MissionEventMove();
    void ExecuteUbergraph_WMC_MissionEventAnimation(int32_t EntryPoint);
}; // Size: 0x358
#pragma pack(pop)
}
