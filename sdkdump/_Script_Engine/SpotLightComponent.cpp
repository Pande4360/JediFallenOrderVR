#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PointLightComponent.hpp"
#include "SpotLightComponent.hpp"
float& _Script_Engine::SpotLightComponent::get_InnerConeAngle() {
    return *(float*)((uintptr_t)this + 0x450);
}
void _Script_Engine::SpotLightComponent::SetTruncationDistance(float NewTruncationDistance) {
    return;
}
float& _Script_Engine::SpotLightComponent::get_OuterConeAngle() {
    return *(float*)((uintptr_t)this + 0x454);
}
float& _Script_Engine::SpotLightComponent::get_TruncationDistance() {
    return *(float*)((uintptr_t)this + 0x45c);
}
float& _Script_Engine::SpotLightComponent::get_LightShaftConeAngle() {
    return *(float*)((uintptr_t)this + 0x458);
}
float& _Script_Engine::SpotLightComponent::get_TransitionLength() {
    return *(float*)((uintptr_t)this + 0x460);
}
_Script_CoreUObject::Class* _Script_Engine::SpotLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SpotLightComponent");
    return result;
}
void _Script_Engine::SpotLightComponent::SetTransitionLength(float NewTransitionLength) {
    return;
}
void _Script_Engine::SpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
    return;
}
void _Script_Engine::SpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
    return;
}
