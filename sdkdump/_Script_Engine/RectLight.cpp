#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Light.hpp"
#include "RectLight.hpp"
#include "RectLightComponent.hpp"
_Script_Engine::RectLightComponent*& _Script_Engine::RectLight::get_RectLightComponent() {
    return *(_Script_Engine::RectLightComponent**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_Engine::RectLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RectLight");
    return result;
}
