#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheMeshData.hpp"
#include "GeometryCacheTrack.hpp"
#include "GeometryCacheTrack_TransformGroupAnimation.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheTrack_TransformGroupAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
    return result;
}
void _Script_GeometryCache::GeometryCacheTrack_TransformGroupAnimation::SetMesh(_Script_GeometryCache::GeometryCacheMeshData& NewMeshData) {
    return;
}
