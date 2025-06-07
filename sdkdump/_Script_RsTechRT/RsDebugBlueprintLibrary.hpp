#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsGJKPrimitive.hpp"
#include "RsSweep.hpp"
#include "RsTOIInput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsTechRT {
struct RsTOIState;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsDebugBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Transform SweepToTransform(_Script_RsTechRT::RsSweep sweep, float T);
    void StartBlueprintRProfMarker(void* Annotation);
    void ResumableTOI(_Script_RsTechRT::RsTOIState* State);
    _Script_RsTechRT::RsTOIState* MakeTOIState(_Script_RsTechRT::RsTOIInput Input);
    _Script_RsTechRT::RsTOIInput MakeTOIInput(_Script_RsTechRT::RsGJKPrimitive& shapeA, _Script_RsTechRT::RsGJKPrimitive& shapeB, _Script_RsTechRT::RsSweep sweepA, _Script_RsTechRT::RsSweep sweepB, float interval);
    _Script_RsTechRT::RsSweep MakeSweep(_Script_CoreUObject::Vector posInit, _Script_CoreUObject::Vector posFinal, _Script_CoreUObject::Rotator rotInit, _Script_CoreUObject::Rotator rotFinal, float Alpha);
    _Script_RsTechRT::RsGJKPrimitive MakeGJKPrimitiveSphere(float Radius, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Scale);
    _Script_RsTechRT::RsGJKPrimitive MakeGJKPrimitiveCapsule(float Radius, float HalfHeight, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale);
    _Script_RsTechRT::RsGJKPrimitive MakeGJKPrimitiveBox(_Script_CoreUObject::Vector HalfExtents, _Script_CoreUObject::Vector Position, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale);
    _Script_CoreUObject::Transform GJKPrimitiveToTransform(_Script_RsTechRT::RsGJKPrimitive prim);
    void GetSweptBoundingBox(_Script_CoreUObject::Vector& outPos, _Script_CoreUObject::Vector& outHalfExtents, _Script_RsTechRT::RsSweep sweep, _Script_RsTechRT::RsGJKPrimitive prim);
    int32_t GetFrameNumber();
    int32_t GetFrameCounter();
    void EndBlueprintRProfMarker();
    void DrawDebugGJKTransform(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive shapeA, _Script_RsTechRT::RsGJKPrimitive shapeB, _Script_CoreUObject::Transform txA, _Script_CoreUObject::Transform txB, float LifeTime, bool drawShapes, bool drawFeatures, bool drawSimplex, bool adjustRadius);
    void DrawDebugGJKPrimitiveTransform(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive Shape, _Script_CoreUObject::Transform worldTx, _Script_CoreUObject::LinearColor Color, float LifeTime);
    void DrawDebugGJKPrimitive(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive Shape, _Script_CoreUObject::LinearColor Color, float LifeTime);
    void DrawDebugGJK(_Script_CoreUObject::Object* Context, _Script_RsTechRT::RsGJKPrimitive shapeA, _Script_RsTechRT::RsGJKPrimitive shapeB, float LifeTime, bool drawShapes, bool drawFeatures, bool drawSimplex, bool adjustRadius);
    void CalculateTOI(bool& Success, float& Time, _Script_RsTechRT::RsTOIInput Input);
}; // Size: 0x28
#pragma pack(pop)
}
