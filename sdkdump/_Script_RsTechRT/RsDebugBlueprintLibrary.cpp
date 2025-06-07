#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsDebugBlueprintLibrary.hpp"
#include "RsGJKPrimitive.hpp"
#include "RsSweep.hpp"
#include "RsTOIInput.hpp"
#include "RsTOIState.hpp"
_Script_RsTechRT::RsGJKPrimitive _Script_RsTechRT::RsDebugBlueprintLibrary::MakeGJKPrimitiveCapsule(float Radius, float HalfHeight, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::StartBlueprintRProfMarker(void* Annotation) {
    return;
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsDebugBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsDebugBlueprintLibrary");
    return result;
}
_Script_RsTechRT::RsSweep _Script_RsTechRT::RsDebugBlueprintLibrary::MakeSweep(_Script_CoreUObject::Vector posInit, _Script_CoreUObject::Vector posFinal, _Script_CoreUObject::Rotator rotInit, _Script_CoreUObject::Rotator rotFinal, float Alpha) {
    return;
}
_Script_CoreUObject::Transform _Script_RsTechRT::RsDebugBlueprintLibrary::SweepToTransform(_Script_RsTechRT::RsSweep sweep, float T) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::ResumableTOI(_Script_RsTechRT::RsTOIState* State) {
    return;
}
_Script_RsTechRT::RsGJKPrimitive _Script_RsTechRT::RsDebugBlueprintLibrary::MakeGJKPrimitiveSphere(float Radius, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Scale) {
    return;
}
_Script_RsTechRT::RsTOIState* _Script_RsTechRT::RsDebugBlueprintLibrary::MakeTOIState(_Script_RsTechRT::RsTOIInput Input) {
    return;
}
_Script_RsTechRT::RsTOIInput _Script_RsTechRT::RsDebugBlueprintLibrary::MakeTOIInput(_Script_RsTechRT::RsGJKPrimitive& shapeA, _Script_RsTechRT::RsGJKPrimitive& shapeB, _Script_RsTechRT::RsSweep sweepA, _Script_RsTechRT::RsSweep sweepB, float interval) {
    return;
}
_Script_RsTechRT::RsGJKPrimitive _Script_RsTechRT::RsDebugBlueprintLibrary::MakeGJKPrimitiveBox(_Script_CoreUObject::Vector HalfExtents, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale) {
    return;
}
_Script_CoreUObject::Transform _Script_RsTechRT::RsDebugBlueprintLibrary::GJKPrimitiveToTransform(_Script_RsTechRT::RsGJKPrimitive prim) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::GetSweptBoundingBox(_Script_CoreUObject::Vector& outPos, _Script_CoreUObject::Vector& outHalfExtents, _Script_RsTechRT::RsSweep sweep, _Script_RsTechRT::RsGJKPrimitive prim) {
    return;
}
int32_t _Script_RsTechRT::RsDebugBlueprintLibrary::GetFrameNumber() {
    return;
}
int32_t _Script_RsTechRT::RsDebugBlueprintLibrary::GetFrameCounter() {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::EndBlueprintRProfMarker() {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::DrawDebugGJKTransform(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive shapeA, _Script_RsTechRT::RsGJKPrimitive shapeB, _Script_CoreUObject::Transform txA, _Script_CoreUObject::Transform txB, float LifeTime, bool drawShapes, bool drawFeatures, bool drawSimplex, bool adjustRadius) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::DrawDebugGJKPrimitiveTransform(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive Shape, _Script_CoreUObject::Transform worldTx, _Script_CoreUObject::LinearColor Color, float LifeTime) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::DrawDebugGJKPrimitive(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive Shape, _Script_CoreUObject::LinearColor Color, float LifeTime) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::DrawDebugGJK(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive shapeA, _Script_RsTechRT::RsGJKPrimitive shapeB, float LifeTime, bool drawShapes, bool drawFeatures, bool drawSimplex, bool adjustRadius) {
    return;
}
void _Script_RsTechRT::RsDebugBlueprintLibrary::CalculateTOI(bool& Success, float& Time, _Script_RsTechRT::RsTOIInput Input) {
    return;
}
