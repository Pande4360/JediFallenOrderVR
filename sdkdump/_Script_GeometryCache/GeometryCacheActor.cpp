#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "GeometryCacheActor.hpp"
#include "GeometryCacheComponent.hpp"
_Script_GeometryCache::GeometryCacheComponent*& _Script_GeometryCache::GeometryCacheActor::get_GeometryCacheComponent() {
    return *(_Script_GeometryCache::GeometryCacheComponent**)((uintptr_t)this + 0x360);
}
_Script_GeometryCache::GeometryCacheComponent* _Script_GeometryCache::GeometryCacheActor::GetGeometryCacheComponent() {
    return;
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheActor");
    return result;
}
