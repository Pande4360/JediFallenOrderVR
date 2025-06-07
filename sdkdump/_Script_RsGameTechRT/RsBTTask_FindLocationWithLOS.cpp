#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_FindLocationWithLOS.hpp"
#include "RsBTTask_SpatialQueryBase.hpp"
void* _Script_RsGameTechRT::RsBTTask_FindLocationWithLOS::get_Strategy() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_FindLocationWithLOS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_FindLocationWithLOS");
    return result;
}
