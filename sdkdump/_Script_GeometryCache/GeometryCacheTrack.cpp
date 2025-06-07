#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeometryCacheTrack.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheTrack");
    return result;
}
float& _Script_GeometryCache::GeometryCacheTrack::get_Duration() {
    return *(float*)((uintptr_t)this + 0x28);
}
