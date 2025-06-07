#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_FindJumpLocation.hpp"
#include "RsBTTask_SpatialQueryBase.hpp"
float& _Script_RsGameTechRT::RsBTTask_FindJumpLocation::get_MinDistance() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_RsGameTechRT::RsBTTask_FindJumpLocation::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0xac);
}
void* _Script_RsGameTechRT::RsBTTask_FindJumpLocation::get_Strategy() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_FindJumpLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_FindJumpLocation");
    return result;
}
