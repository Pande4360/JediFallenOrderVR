#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheCodecBase.hpp"
#include "GeometryCacheCodecRaw.hpp"
int32_t& _Script_GeometryCache::GeometryCacheCodecRaw::get_DummyProperty() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheCodecRaw::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheCodecRaw");
    return result;
}
