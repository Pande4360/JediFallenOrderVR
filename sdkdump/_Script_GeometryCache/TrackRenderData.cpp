#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TrackRenderData.hpp"
_Script_CoreUObject::Class* _Script_GeometryCache::TrackRenderData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCache.TrackRenderData");
    return result;
}
