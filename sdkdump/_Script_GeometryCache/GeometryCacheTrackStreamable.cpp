#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheCodecBase.hpp"
#include "GeometryCacheTrack.hpp"
#include "GeometryCacheTrackStreamable.hpp"
_Script_GeometryCache::GeometryCacheCodecBase*& _Script_GeometryCache::GeometryCacheTrackStreamable::get_Codec() {
    return *(_Script_GeometryCache::GeometryCacheCodecBase**)((uintptr_t)this + 0x58);
}
float& _Script_GeometryCache::GeometryCacheTrackStreamable::get_StartSampleTime() {
    return *(float*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheTrackStreamable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheTrackStreamable");
    return result;
}
