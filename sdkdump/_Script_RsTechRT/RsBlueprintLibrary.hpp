#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsGeoLocator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct RsBitfield_NavPermissionFlags;
}
namespace _Script_Engine {
struct RsBitfield_NavPermissionDetailFlags;
}
namespace _Script_Engine {
struct ActorComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsTechRT {
struct rsActor;
}
namespace _Script_RsTechRT {
struct RsTopology;
}
namespace _Script_RsTechRT {
struct RsSurveyPOI;
}
namespace _Script_RsTechRT {
struct RsSurveyPOIArray;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    float WrapShortestInterpolateTo(float current, float Target, float timeStep, float InterpolationSpeed, float wrapMin, float wrapMax);
    _Script_CoreUObject::Vector VectorSlerp(_Script_CoreUObject::Vector from, _Script_CoreUObject::Vector to, float T);
    _Script_CoreUObject::Vector VectorRotateYaw(_Script_CoreUObject::Vector from, float Yaw);
    float Sign(float F);
    bool ShouldUseNavigationPermissions();
    void SetRelativeTransform(_Script_RsTechRT::RsGeoLocator& newLocator, _Script_RsTechRT::RsGeoLocator& Locator, _Script_CoreUObject::Transform& RelativeTransform);
    void SetNavigationPermissions(_Script_Engine::PrimitiveComponent* PrimitiveComponent, _Script_Engine::RsBitfield_NavPermissionFlags& NavPermissions);
    void SetNavigationPermissionDetails(_Script_Engine::PrimitiveComponent* PrimitiveComponent, _Script_Engine::RsBitfield_NavPermissionDetailFlags& NavPermissionDetails);
    void SetCanComponentEverAffectNavigation(_Script_Engine::ActorComponent* Component, bool bCanEverAffectNavigation);
    void RangeMap(int32_t& baseIndex, int32_t& overlapIndex, float& normalizedSubRange, float V, void*& Range, int32_t indexShift);
    float RandomGaussian(float mean, float stdDeviation);
    _Script_CoreUObject::Rotator QuatToRotator(_Script_CoreUObject::Quat Q);
    _Script_CoreUObject::Vector ProjectOnLocatorPlaneNormalized(_Script_RsTechRT::RsGeoLocator& Locator, void* locatorPlaneNormal, _Script_CoreUObject::Vector& V);
    _Script_CoreUObject::Vector ProjectIntoLocatorPlaneNormalized(_Script_RsTechRT::RsGeoLocator& Locator, void* locatorPlaneNormal, _Script_CoreUObject::Vector& V);
    _Script_RsTechRT::RsGeoLocator MakeWorldGeoLocator(_Script_CoreUObject::Transform WorldLocation);
    _Script_RsTechRT::RsGeoLocator MakeSkeletalRelativeGeoLocator(_Script_Engine::SkeletalMeshComponent* skeletalComponent, _Script_CoreUObject::Transform RelativeLocation, void*& BoneName, void* relativeLocationSpace);
    _Script_RsTechRT::RsGeoLocator MakeRelativeGeoLocator(_Script_Engine::SceneComponent* SceneComponent, _Script_CoreUObject::Transform RelativeLocation, void* relativeLocationSpace);
    bool IsActorOnGround(_Script_CoreUObject::Object* WorldContextObject, _Script_RsTechRT::rsActor* Target);
    _Script_CoreUObject::Rotator InegrateAngularVelocity(_Script_CoreUObject::Rotator& InRotation, _Script_CoreUObject::Vector& inAngularVelocity, float DeltaTime);
    bool HasSurfaceTweak(_Script_RsTechRT::RsTopology& Topology, void* AttributeName);
    bool HasNavigationPermissions(_Script_RsTechRT::RsTopology& Topology, _Script_Engine::RsBitfield_NavPermissionFlags& requiredNavPermissions);
    bool HasHitSurfaceTweak(_Script_Engine::HitResult& Hit, void* AttributeName);
    _Script_CoreUObject::Vector GetUnitAxis(_Script_CoreUObject::Transform& T, void* Axis);
    float GetTopologyCoveragePercentile(_Script_RsTechRT::RsTopology& Topology);
    bool GetElement(_Script_RsTechRT::RsSurveyPOI& POI, _Script_RsTechRT::RsSurveyPOIArray& poiArray, int32_t I);
    void* GetCurrentMapName();
    float CalculateLeaningAngle(_Script_CoreUObject::Vector& Velocity, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& Gravity, float Radius, float DeadZone);
    void CalculateCollisionImpulse(_Script_CoreUObject::Vector& outLinVelA, _Script_CoreUObject::Vector& outAngVelA, _Script_CoreUObject::Vector& outLinVelB, _Script_CoreUObject::Vector& outAngVelB, _Script_CoreUObject::Vector& inLinVelA, _Script_CoreUObject::Vector& inAngVelA, _Script_Engine::PrimitiveComponent* A, _Script_Engine::PrimitiveComponent* B, _Script_Engine::HitResult& inHitResult);
    void AsVectorAndW(_Script_CoreUObject::Vector& V, float& W, _Script_CoreUObject::Vector4 v4);
    _Script_CoreUObject::Transform AsTransform(_Script_RsTechRT::RsGeoLocator& Locator);
    _Script_RsTechRT::RsGeoLocator AsSkeletalGeoLocator(_Script_Engine::SkeletalMeshComponent* SkeletalMesh, void* BoneName, _Script_CoreUObject::Transform& T, void* base);
    _Script_RsTechRT::RsGeoLocator AsPrimitiveGeoLocator(_Script_Engine::PrimitiveComponent* Primitive, void* BoneName, _Script_CoreUObject::Transform& T, void* base);
    bool AllHaveMatchingNavigationPermissions(_Script_RsTechRT::RsTopology& Topology, _Script_Engine::RsBitfield_NavPermissionFlags& requiredNavPermissions);
}; // Size: 0x28
#pragma pack(pop)
}
