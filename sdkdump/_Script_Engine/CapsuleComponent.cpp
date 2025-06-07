#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CapsuleComponent.hpp"
#include "ShapeComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::CapsuleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CapsuleComponent");
    return result;
}
float& _Script_Engine::CapsuleComponent::get_CapsuleHalfHeight() {
    return *(float*)((uintptr_t)this + 0xb80);
}
float& _Script_Engine::CapsuleComponent::get_CapsuleRadius() {
    return *(float*)((uintptr_t)this + 0xb84);
}
void _Script_Engine::CapsuleComponent::SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps) {
    return;
}
void _Script_Engine::CapsuleComponent::SetCapsuleRadius(float Radius, bool bUpdateOverlaps) {
    return;
}
void _Script_Engine::CapsuleComponent::GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight) {
    return;
}
void _Script_Engine::CapsuleComponent::SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps) {
    return;
}
void _Script_Engine::CapsuleComponent::GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) {
    return;
}
void _Script_Engine::CapsuleComponent::GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight) {
    return;
}
float _Script_Engine::CapsuleComponent::GetUnscaledCapsuleRadius() {
    return;
}
float _Script_Engine::CapsuleComponent::GetUnscaledCapsuleHalfHeight_WithoutHemisphere() {
    return;
}
float _Script_Engine::CapsuleComponent::GetUnscaledCapsuleHalfHeight() {
    return;
}
float _Script_Engine::CapsuleComponent::GetShapeScale() {
    return;
}
void _Script_Engine::CapsuleComponent::GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) {
    return;
}
float _Script_Engine::CapsuleComponent::GetScaledCapsuleRadius() {
    return;
}
float _Script_Engine::CapsuleComponent::GetScaledCapsuleHalfHeight_WithoutHemisphere() {
    return;
}
float _Script_Engine::CapsuleComponent::GetScaledCapsuleHalfHeight() {
    return;
}
