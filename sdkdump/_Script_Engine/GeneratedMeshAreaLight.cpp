#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeneratedMeshAreaLight.hpp"
#include "SpotLight.hpp"
_Script_CoreUObject::Class* _Script_Engine::GeneratedMeshAreaLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GeneratedMeshAreaLight");
    return result;
}
