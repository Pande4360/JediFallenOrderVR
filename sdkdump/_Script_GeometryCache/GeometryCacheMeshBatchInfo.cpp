#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GeometryCacheMeshBatchInfo.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheMeshBatchInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCache.GeometryCacheMeshBatchInfo");
    return result;
}
