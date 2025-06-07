#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_FindWanderLocation.hpp"
#include "RsBTTask_SpatialQueryBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_FindWanderLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_FindWanderLocation");
    return result;
}
