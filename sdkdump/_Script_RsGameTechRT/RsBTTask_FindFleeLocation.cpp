#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_FindFleeLocation.hpp"
#include "RsBTTask_SpatialQueryBase.hpp"
float& _Script_RsGameTechRT::RsBTTask_FindFleeLocation::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_FindFleeLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_FindFleeLocation");
    return result;
}
