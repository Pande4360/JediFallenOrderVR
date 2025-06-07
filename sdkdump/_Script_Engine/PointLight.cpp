#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Light.hpp"
#include "PointLight.hpp"
#include "PointLightComponent.hpp"
void _Script_Engine::PointLight::SetLightFalloffExponent(float NewLightFalloffExponent) {
    return;
}
_Script_Engine::PointLightComponent*& _Script_Engine::PointLight::get_PointLightComponent() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_Engine::PointLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PointLight");
    return result;
}
void _Script_Engine::PointLight::SetRadius(float newRadius) {
    return;
}
