#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ShapeComponent.hpp"
#include "SphereComponent.hpp"
float& _Script_Engine::SphereComponent::get_SphereRadius() {
    return *(float*)((uintptr_t)this + 0xb80);
}
_Script_CoreUObject::Class* _Script_Engine::SphereComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SphereComponent");
    return result;
}
void _Script_Engine::SphereComponent::SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps) {
    return;
}
float _Script_Engine::SphereComponent::GetUnscaledSphereRadius() {
    return;
}
float _Script_Engine::SphereComponent::GetShapeScale() {
    return;
}
float _Script_Engine::SphereComponent::GetScaledSphereRadius() {
    return;
}
