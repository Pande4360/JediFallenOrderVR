#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "LandscapeMeshProxyActor.hpp"
#include "LandscapeMeshProxyComponent.hpp"
_Script_Landscape::LandscapeMeshProxyComponent*& _Script_Landscape::LandscapeMeshProxyActor::get_LandscapeMeshProxyComponent() {
    return *(_Script_Landscape::LandscapeMeshProxyComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeMeshProxyActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeMeshProxyActor");
    return result;
}
