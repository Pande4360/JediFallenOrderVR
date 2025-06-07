#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_FindLocationInCone.hpp"
#include "RsBTTask_SpatialQueryBase.hpp"
void _Script_RsGameTechRT::RsBTTask_FindLocationInCone::set_bRequireInCone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_HalfAngle() {
    return *(float*)((uintptr_t)this + 0xdc);
}
void* _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_SourceLocationKey() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_MinDistance() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_OffsetAngle() {
    return *(float*)((uintptr_t)this + 0xd8);
}
void* _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_ItemSelection() {
    return (void*)((uintptr_t)this + 0xe4);
}
bool _Script_RsGameTechRT::RsBTTask_FindLocationInCone::get_bRequireInCone() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_FindLocationInCone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_FindLocationInCone");
    return result;
}
