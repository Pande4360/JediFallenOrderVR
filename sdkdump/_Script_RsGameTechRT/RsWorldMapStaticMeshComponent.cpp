#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "RsWorldMapStaticMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapStaticMeshComponent");
    return result;
}
int32_t& _Script_RsGameTechRT::RsWorldMapStaticMeshComponent::get_MapLayer() {
    return *(int32_t*)((uintptr_t)this + 0xbc8);
}
