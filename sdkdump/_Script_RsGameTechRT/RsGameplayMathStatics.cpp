#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsGameplayMathStatics.hpp"
float _Script_RsGameTechRT::RsGameplayMathStatics::RandomFloatAroundBaseValue(float BaseValue, float MaxNegativeDifference, float MaxPositiveDifference) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGameplayMathStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGameplayMathStatics");
    return result;
}
void _Script_RsGameTechRT::RsGameplayMathStatics::SelectRandomVectorFromArray(void*& Array, _Script_CoreUObject::Vector& OutVector, int32_t& SelectedIndex) {
    return;
}
float _Script_RsGameTechRT::RsGameplayMathStatics::RandomSign() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsGameplayMathStatics::ProjectDirectionOnHorizontal(_Script_CoreUObject::Vector Direction) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsGameplayMathStatics::GetDecalNormalFromHit(_Script_Engine::Actor* MovingActor, _Script_CoreUObject::Vector ImpactPoint, _Script_CoreUObject::Vector ImpactNormal) {
    return;
}
void* _Script_RsGameTechRT::RsGameplayMathStatics::GetActorRelativeQuadrant(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* TargetActor, float CenterRadius) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsGameplayMathStatics::CalculateStaggeringShotVector(_Script_CoreUObject::Vector Direction, float MinAngle, float MaxAngle, _Script_CoreUObject::Vector Axis) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsGameplayMathStatics::ApproximateTrackingShotVector(_Script_CoreUObject::Vector ProjectilePosition, float ProjectileSpeed, _Script_CoreUObject::Vector TargetPosition, _Script_CoreUObject::Vector TargetVelocity) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsGameplayMathStatics::ActorRelativeVectorToWorldVector(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector LocalVector) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsGameplayMathStatics::ActorRelativeVectorToWorldDirection(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector Vector) {
    return;
}
