#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_SpatialQueryBase.hpp"
float& _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::get_OverrideMaxPathDistance() {
    return *(float*)((uintptr_t)this + 0x9c);
}
void* _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::get_ResultLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_SpatialQueryBase");
    return result;
}
void _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::set_bUseOverrideMaxProjectionHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::get_DistanceBetweenSearchPoints() {
    return *(float*)((uintptr_t)this + 0x98);
}
bool _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::get_bUseOverrideMaxProjectionHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 2 != 0;
}
float& _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::get_OverrideMaxProjectionHeight() {
    return *(float*)((uintptr_t)this + 0xa0);
}
bool _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::get_bUseOverrideMaxPathDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTTask_SpatialQueryBase::set_bUseOverrideMaxPathDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
