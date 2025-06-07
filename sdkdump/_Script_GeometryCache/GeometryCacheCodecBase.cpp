#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeometryCacheCodecBase.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheCodecBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheCodecBase");
    return result;
}
void* _Script_GeometryCache::GeometryCacheCodecBase::get_TopologyRanges() {
    return (void*)((uintptr_t)this + 0x28);
}
