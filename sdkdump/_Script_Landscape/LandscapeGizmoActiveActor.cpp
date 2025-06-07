#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeGizmoActiveActor.hpp"
#include "LandscapeGizmoActor.hpp"
_Script_CoreUObject::Class* _Script_Landscape::LandscapeGizmoActiveActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeGizmoActiveActor");
    return result;
}
