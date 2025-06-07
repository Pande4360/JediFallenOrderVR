#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_DirectMoveToBlackboardBase.hpp"
#include "RsBTTask_MoveInDirection.hpp"
void* _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_MoveDirection() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_bAllowFallback() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_MaxMoveDistance() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_MinMoveDistance() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_Facing() {
    return (void*)((uintptr_t)this + 0xbc);
}
bool _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_bSetDestinationBlackboardKey() {
    return (*(uint8_t*)((uintptr_t)this + 0xbd + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTTask_MoveInDirection::set_bSetDestinationBlackboardKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbd + 0);
    *(uint8_t*)((uintptr_t)this + 0xbd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_DestinationBlackboardKey() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_RsGameTechRT::RsBTTask_MoveInDirection::set_bAllowFallback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_MoveInDirection::get_bRestrictTo2DMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsBTTask_MoveInDirection::set_bRestrictTo2DMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_MoveInDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_MoveInDirection");
    return result;
}
