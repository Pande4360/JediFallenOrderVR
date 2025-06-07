#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheMeshData.hpp"
#include "GeometryCacheTrack.hpp"
#include "GeometryCacheTrack_FlipbookAnimation.hpp"
void* _Script_GeometryCache::GeometryCacheTrack_FlipbookAnimation::get_NumMeshSamples() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheTrack_FlipbookAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation");
    return result;
}
void _Script_GeometryCache::GeometryCacheTrack_FlipbookAnimation::AddMeshSample(_Script_GeometryCache::GeometryCacheMeshData& MeshData, float SampleTime) {
    return;
}
