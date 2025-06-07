#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheCodecBase.hpp"
#include "GeometryCacheCodecV1.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheCodecV1::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheCodecV1");
    return result;
}
