#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CanMoveInDirection.hpp"
float& _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::get_OffsetAngle() {
    return *(float*)((uintptr_t)this + 0x68);
}
bool _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::get_bUseOverrideMaxProjectionHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::get_TestDistance() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::get_OverrideMaxProjectionHeight() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::get_FilterClass() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::set_bIncludeActorRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::set_bUseOverrideMaxProjectionHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::get_bIncludeActorRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CanMoveInDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CanMoveInDirection");
    return result;
}
