#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheMeshData.hpp"
#include "GeometryCacheTrack.hpp"
#include "GeometryCacheTrack_TransformAnimation.hpp"
void _Script_GeometryCache::GeometryCacheTrack_TransformAnimation::SetMesh(_Script_GeometryCache::GeometryCacheMeshData& NewMeshData) {
    return;
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheTrack_TransformAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation");
    return result;
}
