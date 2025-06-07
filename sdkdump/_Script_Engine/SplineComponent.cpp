#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
#include "SplineComponent.hpp"
#include "SplinePoint.hpp"
bool _Script_Engine::SplineComponent::get_bStationaryEndpoints() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf4 + 0)) & 1 != 0;
}
void* _Script_Engine::SplineComponent::get_SplineCurves() {
    return (void*)((uintptr_t)this + 0xb28);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetRightVectorAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
void* _Script_Engine::SplineComponent::get_SplineInfo() {
    return (void*)((uintptr_t)this + 0xb88);
}
void* _Script_Engine::SplineComponent::get_SplineRotInfo() {
    return (void*)((uintptr_t)this + 0xba0);
}
void _Script_Engine::SplineComponent::set_bAllowSplineEditingPerInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SplineComponent::get_SplineScaleInfo() {
    return (void*)((uintptr_t)this + 0xbb8);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetDirectionAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
int32_t& _Script_Engine::SplineComponent::get_ReparamStepsPerSegment() {
    return *(int32_t*)((uintptr_t)this + 0xbec);
}
void* _Script_Engine::SplineComponent::get_SplineReparamTable() {
    return (void*)((uintptr_t)this + 0xbd0);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetUpVectorAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
bool _Script_Engine::SplineComponent::get_bAllowSplineEditingPerInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0xbe8 + 0)) & 1 != 0;
}
float& _Script_Engine::SplineComponent::get_Duration() {
    return *(float*)((uintptr_t)this + 0xbf0);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::FindDirectionClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::set_bStationaryEndpoints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SplineComponent::get_DefaultUpVector() {
    return (void*)((uintptr_t)this + 0xc00);
}
bool _Script_Engine::SplineComponent::get_bSplineHasBeenEdited() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf5 + 0)) & 1 != 0;
}
void _Script_Engine::SplineComponent::set_bSplineHasBeenEdited(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SplineComponent::get_bModifiedByConstructionScript() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf6 + 0)) & 1 != 0;
}
void _Script_Engine::SplineComponent::AddSplinePoint(_Script_CoreUObject::Vector& Position, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::set_bModifiedByConstructionScript(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SplineComponent::ClearSplinePoints(bool bUpdateSpline) {
    return;
}
bool _Script_Engine::SplineComponent::get_bInputSplinePointsToConstructionScript() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf7 + 0)) & 1 != 0;
}
void _Script_Engine::SplineComponent::set_bInputSplinePointsToConstructionScript(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetWorldLocationAtDistanceAlongSpline(float Distance) {
    return;
}
bool _Script_Engine::SplineComponent::get_bDrawDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf8 + 0)) & 1 != 0;
}
void _Script_Engine::SplineComponent::set_bDrawDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetTangentAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
bool _Script_Engine::SplineComponent::get_bClosedLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf9 + 0)) & 1 != 0;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetRightVectorAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::set_bClosedLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetLocationAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
bool _Script_Engine::SplineComponent::get_bLoopPositionOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0xbfa + 0)) & 1 != 0;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetTangentAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::set_bLoopPositionOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xbfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SplineComponent::get_LoopPosition() {
    return *(float*)((uintptr_t)this + 0xbfc);
}
_Script_CoreUObject::Class* _Script_Engine::SplineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SplineComponent");
    return result;
}
void _Script_Engine::SplineComponent::UpdateSpline() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SplineComponent::FindRotationClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::SetWorldLocationAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InLocation) {
    return;
}
void _Script_Engine::SplineComponent::SetUpVectorAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InUpVector, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::SetUnselectedSplineSegmentColor(_Script_CoreUObject::LinearColor& SegmentColor) {
    return;
}
void _Script_Engine::SplineComponent::SetTangentsAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InArriveTangent, _Script_CoreUObject::Vector& InLeaveTangent, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetTangentAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::SetTangentAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InTangent, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::SetSplineWorldPoints(void*& Points) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SplineComponent::GetRotationAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::SetSplinePointType(int32_t PointIndex, void* Type, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::SetSplinePoints(void*& Points, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetDefaultUpVector(void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::SetSplineLocalPoints(void*& Points) {
    return;
}
void _Script_Engine::SplineComponent::SetSelectedSplineSegmentColor(_Script_CoreUObject::LinearColor& SegmentColor) {
    return;
}
void _Script_Engine::SplineComponent::SetLocationAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& InLocation, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::SetDrawDebug(bool bShow) {
    return;
}
void _Script_Engine::SplineComponent::SetDefaultUpVector(_Script_CoreUObject::Vector& UpVector, void* CoordinateSpace) {
    return;
}
void _Script_Engine::SplineComponent::GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& LocalLocation, _Script_CoreUObject::Vector& LocalTangent) {
    return;
}
void _Script_Engine::SplineComponent::SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::AddPoints(void*& Points, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::RemoveSplinePoint(int32_t Index, bool bUpdateSpline) {
    return;
}
float _Script_Engine::SplineComponent::GetSplineLength() {
    return;
}
bool _Script_Engine::SplineComponent::IsClosedLoop() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetWorldTangentAtDistanceAlongSpline(float Distance) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SplineComponent::GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SplineComponent::GetWorldRotationAtDistanceAlongSpline(float Distance) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::FindRightVectorClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetWorldDirectionAtDistanceAlongSpline(float Distance) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetWorldLocationAtSplinePoint(int32_t PointIndex) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetUpVectorAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
void _Script_Engine::SplineComponent::GetLocationAndTangentAtSplinePoint(int32_t PointIndex, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector& Tangent, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetUpVectorAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SplineComponent::GetTransformAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SplineComponent::GetTransformAtSplinePoint(int32_t PointIndex, void* CoordinateSpace, bool bUseScale) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SplineComponent::GetTransformAtDistanceAlongSpline(float Distance, void* CoordinateSpace, bool bUseScale) {
    return;
}
void* _Script_Engine::SplineComponent::GetSplinePointType(int32_t PointIndex) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetScaleAtTime(float Time, bool bUseConstantVelocity) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetScaleAtSplinePoint(int32_t PointIndex) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetScaleAtDistanceAlongSpline(float Distance) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SplineComponent::GetRotationAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SplineComponent::GetRotationAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
float _Script_Engine::SplineComponent::GetRollAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
float _Script_Engine::SplineComponent::GetRollAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
float _Script_Engine::SplineComponent::GetRollAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetRightVectorAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
int32_t _Script_Engine::SplineComponent::GetNumberOfSplinePoints() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetLocationAtTime(float Time, void* CoordinateSpace, bool bUseConstantVelocity) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetLocationAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetLeaveTangentAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
float _Script_Engine::SplineComponent::GetInputKeyAtDistanceAlongSpline(float Distance) {
    return;
}
float _Script_Engine::SplineComponent::GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetDirectionAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetDirectionAtDistanceAlongSpline(float Distance, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::GetArriveTangentAtSplinePoint(int32_t PointIndex, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::FindUpVectorClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SplineComponent::FindTransformClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace, bool bUseScale) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::FindTangentClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::FindScaleClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation) {
    return;
}
float _Script_Engine::SplineComponent::FindRollClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineComponent::FindLocationClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation, void* CoordinateSpace) {
    return;
}
float _Script_Engine::SplineComponent::FindInputKeyClosestToWorldLocation(_Script_CoreUObject::Vector& WorldLocation) {
    return;
}
void _Script_Engine::SplineComponent::AddSplineWorldPoint(_Script_CoreUObject::Vector& Position) {
    return;
}
void _Script_Engine::SplineComponent::AddSplinePointAtIndex(_Script_CoreUObject::Vector& Position, int32_t Index, void* CoordinateSpace, bool bUpdateSpline) {
    return;
}
void _Script_Engine::SplineComponent::AddSplineLocalPoint(_Script_CoreUObject::Vector& Position) {
    return;
}
void _Script_Engine::SplineComponent::AddPoint(_Script_Engine::SplinePoint& Point, bool bUpdateSpline) {
    return;
}
