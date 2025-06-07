#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_TurnTo.hpp"
float& _Script_RsGameTechRT::RsBTTask_TurnTo::get_CosOfFacingTolerance() {
    return *(float*)((uintptr_t)this + 0xd0);
}
void _Script_RsGameTechRT::RsBTTask_TurnTo::set_bUseTurnToLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_TurnTo::get_bTrackLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsBTTask_TurnTo::get_TurnToLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_RsGameTechRT::RsBTTask_TurnTo::get_bUseTurnToLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsBTTask_TurnTo::set_bTrackLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBTTask_TurnTo::get_TurnToRotationKey() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_RsGameTechRT::RsBTTask_TurnTo::get_MotionParmName() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_TurnTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_TurnTo");
    return result;
}
