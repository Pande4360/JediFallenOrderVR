#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DirectionalLight.hpp"
#include "Light.hpp"
_Script_CoreUObject::Class* _Script_Engine::DirectionalLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DirectionalLight");
    return result;
}
