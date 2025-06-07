#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "RsWorldMapBoundingSphere.hpp"
_Script_Engine::SphereComponent*& _Script_RsGameTechRT::RsWorldMapBoundingSphere::get_BoundingSphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x360);
}
void* _Script_RsGameTechRT::RsWorldMapBoundingSphere::get_MapSection() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapBoundingSphere::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapBoundingSphere");
    return result;
}
