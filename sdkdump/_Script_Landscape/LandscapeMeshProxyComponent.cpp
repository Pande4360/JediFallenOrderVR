#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "LandscapeMeshProxyComponent.hpp"
void* _Script_Landscape::LandscapeMeshProxyComponent::get_LandscapeGuid() {
    return (void*)((uintptr_t)this + 0xbc8);
}
void* _Script_Landscape::LandscapeMeshProxyComponent::get_ProxyComponentBases() {
    return (void*)((uintptr_t)this + 0xbd8);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeMeshProxyComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeMeshProxyComponent");
    return result;
}
void* _Script_Landscape::LandscapeMeshProxyComponent::get_ProxyLOD() {
    return (void*)((uintptr_t)this + 0xbe8);
}
