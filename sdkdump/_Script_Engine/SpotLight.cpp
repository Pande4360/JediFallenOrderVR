#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Light.hpp"
#include "SpotLight.hpp"
#include "SpotLightComponent.hpp"
_Script_Engine::SpotLightComponent*& _Script_Engine::SpotLight::get_SpotLightComponent() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_Engine::SpotLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SpotLight");
    return result;
}
void _Script_Engine::SpotLight::SetOuterConeAngle(float NewOuterConeAngle) {
    return;
}
void _Script_Engine::SpotLight::SetInnerConeAngle(float NewInnerConeAngle) {
    return;
}
