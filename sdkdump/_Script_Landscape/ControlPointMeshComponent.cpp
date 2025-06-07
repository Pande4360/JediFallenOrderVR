#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ControlPointMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_Landscape::ControlPointMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.ControlPointMeshComponent");
    return result;
}
