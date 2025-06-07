#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_Engine {
struct SplinePoint;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SplineComponent : public PrimitiveComponent {
    private: char pad_b30[0xe0]; public:
    void* get_SplineCurves();
    void* get_SplineInfo();
    void* get_SplineRotInfo();
    void* get_SplineScaleInfo();
    void* get_SplineReparamTable();
    bool get_bAllowSplineEditingPerInstance();
    void set_bAllowSplineEditingPerInstance(bool value);
    int32_t& get_ReparamStepsPerSegment();
    float& get_Duration();
    bool get_bStationaryEndpoints();
    void set_bStationaryEndpoints(bool value);
    bool get_bSplineHasBeenEdited();
    void set_bSplineHasBeenEdited(bool value);
    bool get_bModifiedByConstructionScript();
    void set_bModifiedByConstructionScript(bool value);
    bool get_bInputSplinePointsToConstructionScript();
    void set_bInputSplinePointsToConstructionScript(bool value);
    bool get_bDrawDebug();
    void set_bDrawDebug(bool value);
    bool get_bClosedLoop();
    void set_bClosedLoop(bool value);
    bool get_bLoopPositionOverride();
    void set_bLoopPositionOverride(bool value);
    float& get_LoopPosition();
    void* get_DefaultUpVector();
    static _Script_CoreUObject::Class* static_class();
    void UpdateSpline();
    void SetWorldLocationAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InLocation);
    void SetUpVectorAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InUpVector, void* CoordinateSpace, bool bUpdateSpline);
    void SetUnselectedSplineSegmentColor(_Script_CoreUObject::LinearColor& SegmentColor);
    void SetTangentsAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InArriveTangent, _Script_CoreUObject::Vector& InLeaveTangent, void* CoordinateSpace, bool bUpdateSpline);
    void SetTangentAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InTangent, void* CoordinateSpace, bool bUpdateSpline);
    void SetSplineWorldPoints(void*& Points);
    void SetSplinePointType(int32_t PointIndex, void* Type, bool bUpdateSpline);
    void SetSplinePoints(void*& Points, void* CoordinateSpace, bool bUpdateSpline);
    void SetSplineLocalPoints(void*& Points);
    void SetSelectedSplineSegmentColor(_Script_CoreUObject::LinearColor& SegmentColor);
    void SetLocationAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InLocation, void* CoordinateSpace, bool bUpdateSpline);
    void SetDrawDebug(bool bShow);
    void SetDefaultUpVector(_Script_CoreUObject::Vector& UpVector, void* CoordinateSpace);
    void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
    void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
    void RemoveSplinePoint(int32_t Index, bool bUpdateSpline);
    bool IsClosedLoop();
    _Script_CoreUObject::Vector GetWorldTangentAtDistanceAlongSpline(float Distance);
    _Script_CoreUObject::Rotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
    _Script_CoreUObject::Rotator GetWorldRotationAtDistanceAlongSpline(float Distance);
    _Script_CoreUObject::Vector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetWorldLocationAtSplinePoint(int32_t PointIndex);
    _Script_CoreUObject::Vector GetWorldLocationAtDistanceAlongSpline(float Distance);
    _Script_CoreUObject::Vector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetWorldDirectionAtDistanceAlongSpline(float Distance);
    _Script_CoreUObject::Vector GetUpVectorAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetUpVectorAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetUpVectorAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    _Script_CoreUObject::Transform GetTransformAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
    _Script_CoreUObject::Transform GetTransformAtSplinePoint(int32_t PointIndex, void* CoordinateSpace, bool bUseScale);
    _Script_CoreUObject::Transform GetTransformAtDistanceAlongSpline(float Distance, void* CoordinateSpace, bool bUseScale);
    _Script_CoreUObject::Vector GetTangentAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetTangentAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetTangentAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    void* GetSplinePointType(int32_t PointIndex);
    float GetSplineLength();
    _Script_CoreUObject::Vector GetScaleAtTime(float Time, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetScaleAtSplinePoint(int32_t PointIndex);
    _Script_CoreUObject::Vector GetScaleAtDistanceAlongSpline(float Distance);
    _Script_CoreUObject::Rotator GetRotationAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    _Script_CoreUObject::Rotator GetRotationAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Rotator GetRotationAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    float GetRollAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    float GetRollAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    float GetRollAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetRightVectorAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetRightVectorAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetRightVectorAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    int32_t GetNumberOfSplinePoints();
    _Script_CoreUObject::Vector GetLocationAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetLocationAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetLocationAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector& Tangent, void* CoordinateSpace);
    void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& LocalLocation, _Script_CoreUObject::Vector& LocalTangent);
    _Script_CoreUObject::Vector GetLeaveTangentAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    float GetInputKeyAtDistanceAlongSpline(float Distance);
    float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex);
    _Script_CoreUObject::Vector GetDirectionAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity);
    _Script_CoreUObject::Vector GetDirectionAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetDirectionAtDistanceAlongSpline(float Distance, void* CoordinateSpace);
    _Script_CoreUObject::Vector GetDefaultUpVector(void* CoordinateSpace);
    _Script_CoreUObject::Vector GetArriveTangentAtSplinePoint(int32_t PointIndex, void* CoordinateSpace);
    _Script_CoreUObject::Vector FindUpVectorClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    _Script_CoreUObject::Transform FindTransformClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace, bool bUseScale);
    _Script_CoreUObject::Vector FindTangentClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    _Script_CoreUObject::Vector FindScaleClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation);
    _Script_CoreUObject::Rotator FindRotationClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    float FindRollClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    _Script_CoreUObject::Vector FindRightVectorClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    _Script_CoreUObject::Vector FindLocationClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    float FindInputKeyClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation);
    _Script_CoreUObject::Vector FindDirectionClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace);
    void ClearSplinePoints(bool bUpdateSpline);
    void AddSplineWorldPoint(_Script_CoreUObject::Vector& Position);
    void AddSplinePointAtIndex(_Script_CoreUObject::Vector& Position, int32_t Index, void* CoordinateSpace, bool bUpdateSpline);
    void AddSplinePoint(_Script_CoreUObject::Vector& Position, void* CoordinateSpace, bool bUpdateSpline);
    void AddSplineLocalPoint(_Script_CoreUObject::Vector& Position);
    void AddPoints(void*& Points, bool bUpdateSpline);
    void AddPoint(_Script_Engine::SplinePoint& Point, bool bUpdateSpline);
}; // Size: 0xc10
#pragma pack(pop)
}
