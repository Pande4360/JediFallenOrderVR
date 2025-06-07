#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeHeightfieldCollisionComponent.hpp"
#include "LandscapeMeshCollisionComponent.hpp"
void* _Script_Landscape::LandscapeMeshCollisionComponent::get_MeshGuid() {
    return (void*)((uintptr_t)this + 0xc08);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeMeshCollisionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeMeshCollisionComponent");
    return result;
}
