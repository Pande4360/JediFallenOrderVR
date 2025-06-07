#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\RsBitfield_NavPermissionDetailFlags.hpp"
#include "..\_Script_Engine\RsBitfield_NavPermissionFlags.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "RsBlueprintLibrary.hpp"
#include "RsGeoLocator.hpp"
#include "RsSurveyPOI.hpp"
#include "RsSurveyPOIArray.hpp"
#include "RsTopology.hpp"
#include "rsActor.hpp"
_Script_CoreUObject::Vector _Script_RsTechRT::RsBlueprintLibrary::VectorRotateYaw(_Script_CoreUObject::Vector from, float Yaw) {
    return;
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsBlueprintLibrary");
    return result;
}
float _Script_RsTechRT::RsBlueprintLibrary::CalculateLeaningAngle(_Script_CoreUObject::Vector& Velocity, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& Gravity, float Radius, float DeadZone) {
    return;
}
float _Script_RsTechRT::RsBlueprintLibrary::WrapShortestInterpolateTo(float current, float Target, float timeStep, float InterpolationSpeed, float wrapMin, float wrapMax) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::AllHaveMatchingNavigationPermissions(_Script_RsTechRT::RsTopology& Topology, _Script_Engine::RsBitfield_NavPermissionFlags& requiredNavPermissions) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsBlueprintLibrary::VectorSlerp(_Script_CoreUObject::Vector from, _Script_CoreUObject::Vector to, float T) {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::SetNavigationPermissions(_Script_Engine::PrimitiveComponent* PrimitiveComponent, _Script_Engine::RsBitfield_NavPermissionFlags& NavPermissions) {
    return;
}
float _Script_RsTechRT::RsBlueprintLibrary::Sign(float F) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::ShouldUseNavigationPermissions() {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::SetRelativeTransform(_Script_RsTechRT::RsGeoLocator& newLocator, _Script_RsTechRT::RsGeoLocator& Locator, _Script_CoreUObject::Transform& RelativeTransform) {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::SetNavigationPermissionDetails(_Script_Engine::PrimitiveComponent* PrimitiveComponent, _Script_Engine::RsBitfield_NavPermissionDetailFlags& NavPermissionDetails) {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::SetCanComponentEverAffectNavigation(_Script_Engine::ActorComponent* Component, bool bCanEverAffectNavigation) {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::RangeMap(int32_t& baseIndex, int32_t& overlapIndex, float& normalizedSubRange, float V, void*& Range, int32_t indexShift) {
    return;
}
_Script_CoreUObject::Rotator _Script_RsTechRT::RsBlueprintLibrary::QuatToRotator(_Script_CoreUObject::Quat Q) {
    return;
}
float _Script_RsTechRT::RsBlueprintLibrary::RandomGaussian(float mean, float stdDeviation) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsBlueprintLibrary::ProjectOnLocatorPlaneNormalized(_Script_RsTechRT::RsGeoLocator& Locator, void* locatorPlaneNormal, _Script_CoreUObject::Vector& V) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsBlueprintLibrary::ProjectIntoLocatorPlaneNormalized(_Script_RsTechRT::RsGeoLocator& Locator, void* locatorPlaneNormal, _Script_CoreUObject::Vector& V) {
    return;
}
_Script_RsTechRT::RsGeoLocator _Script_RsTechRT::RsBlueprintLibrary::MakeWorldGeoLocator(_Script_CoreUObject::Transform WorldLocation) {
    return;
}
_Script_RsTechRT::RsGeoLocator _Script_RsTechRT::RsBlueprintLibrary::MakeSkeletalRelativeGeoLocator(_Script_Engine::SkeletalMeshComponent* skeletalComponent, _Script_CoreUObject::Transform RelativeLocation, void*& BoneName, void* relativeLocationSpace) {
    return;
}
_Script_RsTechRT::RsGeoLocator _Script_RsTechRT::RsBlueprintLibrary::MakeRelativeGeoLocator(_Script_Engine::SceneComponent* SceneComponent, _Script_CoreUObject::Transform RelativeLocation, void* relativeLocationSpace) {
    return;
}
_Script_CoreUObject::Rotator _Script_RsTechRT::RsBlueprintLibrary::InegrateAngularVelocity(_Script_CoreUObject::Rotator& InRotation, _Script_CoreUObject::Vector& inAngularVelocity, float DeltaTime) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::IsActorOnGround(_Script_CoreUObject::Object* WorldContextObject, _Script_RsTechRT::rsActor* Target) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::HasSurfaceTweak(_Script_RsTechRT::RsTopology& Topology, void* AttributeName) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::HasNavigationPermissions(_Script_RsTechRT::RsTopology& Topology, _Script_Engine::RsBitfield_NavPermissionFlags& requiredNavPermissions) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::HasHitSurfaceTweak(_Script_Engine::HitResult& Hit, void* AttributeName) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsBlueprintLibrary::GetUnitAxis(_Script_CoreUObject::Transform& T, void* Axis) {
    return;
}
float _Script_RsTechRT::RsBlueprintLibrary::GetTopologyCoveragePercentile(_Script_RsTechRT::RsTopology& Topology) {
    return;
}
bool _Script_RsTechRT::RsBlueprintLibrary::GetElement(_Script_RsTechRT::RsSurveyPOI& POI, _Script_RsTechRT::RsSurveyPOIArray& poiArray, int32_t I) {
    return;
}
void* _Script_RsTechRT::RsBlueprintLibrary::GetCurrentMapName() {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::CalculateCollisionImpulse(_Script_CoreUObject::Vector& outLinVelA, _Script_CoreUObject::Vector& outAngVelA, _Script_CoreUObject::Vector& outLinVelB, _Script_CoreUObject::Vector& outAngVelB, _Script_CoreUObject::Vector& inLinVelA, _Script_CoreUObject::Vector& inAngVelA, _Script_Engine::PrimitiveComponent* A, _Script_Engine::PrimitiveComponent* B, _Script_Engine::HitResult& inHitResult) {
    return;
}
void _Script_RsTechRT::RsBlueprintLibrary::AsVectorAndW(_Script_CoreUObject::Vector& V, float& W, _Script_CoreUObject::Vector4 v4) {
    return;
}
_Script_CoreUObject::Transform _Script_RsTechRT::RsBlueprintLibrary::AsTransform(_Script_RsTechRT::RsGeoLocator& Locator) {
    return;
}
_Script_RsTechRT::RsGeoLocator _Script_RsTechRT::RsBlueprintLibrary::AsSkeletalGeoLocator(_Script_Engine::SkeletalMeshComponent* SkeletalMesh, void* BoneName, _Script_CoreUObject::Transform& T, void* base) {
    return;
}
_Script_RsTechRT::RsGeoLocator _Script_RsTechRT::RsBlueprintLibrary::AsPrimitiveGeoLocator(_Script_Engine::PrimitiveComponent* Primitive, void* BoneName, _Script_CoreUObject::Transform& T, void* base) {
    return;
}
