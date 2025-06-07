#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheVertexInfo.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheVertexInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCache.GeometryCacheVertexInfo");
    return result;
}
