#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsHeroComponent.hpp"
#include "RsSpeederBikeComponent.hpp"
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_WaveLengthModifier() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_DesiredHeight() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_ForwardAngleDeadZone() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_WaveHeight() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
void* _Script_RsGameTechRT::RsSpeederBikeComponent::get_PushAccelerationCurveAsset() {
    return (void*)((uintptr_t)this + 0x1b0);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_GravitationalForce() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_RightAngleDeadZone() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_UpAngleDeadZone() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_StrafeDeadZone() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_MaxForwardLagSpeed() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
float& _Script_RsGameTechRT::RsSpeederBikeComponent::get_MaxStrafeLagSpeed() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
void* _Script_RsGameTechRT::RsSpeederBikeComponent::get_ForwardAngleCurveAsset() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_RsGameTechRT::RsSpeederBikeComponent::get_UpAngleCurveAsset() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_RsGameTechRT::RsSpeederBikeComponent::get_RightAngleCurveAsset() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_RsGameTechRT::RsSpeederBikeComponent::get_ForwardAccelerationCurveAsset() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_RsGameTechRT::RsSpeederBikeComponent::get_StrafeAccelerationCurveAsset() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Script_RsGameTechRT::RsSpeederBikeComponent::SetEnterAnimation(_Script_Engine::AnimSequence* Animation) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSpeederBikeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSpeederBikeComponent");
    return result;
}
void _Script_RsGameTechRT::RsSpeederBikeComponent::OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsSpeederBikeComponent::EnableBike(_Script_Engine::Actor* Bike) {
    return;
}
void _Script_RsGameTechRT::RsSpeederBikeComponent::DisableBike() {
    return;
}
